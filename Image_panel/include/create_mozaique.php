<?php

function create_mozaique($images, $base)
{
	if (is_dir($base))
		rrmdir($base);
	if (!is_dir($base))
		mkdir($base);
	$largeur = 0;
	$image = imagecreatetruecolor(1800,1500);
	$dimensionM = 0.9;
	$dimensionP = 1.1;
	$x = 1800;
	$i = 0;
	$j = 0;
	$tab[1] = "gif";
	$tab[2] = "jpeg";
	$tab[3] = "png";
	$i = count($images) - 1;
	$lim = $i + 1;
	while(isset($images[$i]) || $i == 0)
	{
		//$type = $tab[exif_imagetype($images[$i])];
		//$funca  = "imagecreatefrom" . $type;
		$new_insert = $images[$i];
		$width = imagesx($images[$i]);
		$height = imagesy($images[$i]);
		$new_width = $width;
		$new_height = $height;
		if ($height >= 130)
		{
			while ($new_height >= 130)
			{
				$new_width = $width * $dimensionM;
				$new_height = $height * $dimensionM;
				$dimensionM = $dimensionM - 0.0001;
			}
		}
		else
		{
			while ($new_height <= 130)
			{
				$new_width = $width * $dimensionP;
				$new_height = $height * $dimensionP;
				$dimensionP = $dimensionP + 0.0001;
			}
		}
		$dimensionM = 0.9;
		$dimensionP = 1.1;
		if ($x - $new_width < 0)
		{
			$old_max_height = $old_max_height + $max_height;
			$max_height = 0;
			$old_width = 0;
			$x = 1800;
		}
		if ($max_height < $new_height)
			$max_height =  $new_height;
		imagecopyresampled($image, $new_insert, $old_width, $old_max_height, 0, 0, $new_width, $new_height, $width, $height);
		$old_width = $old_width + $new_width;
		$x = $x - $new_width;
		$new_width = 0;
//		imagestring($image, 1, 800, 1400, $base . $j . "." .$GLOBALS['a'], imagecolorallocate ($image, 255, 255, 255));
		if ($i == $lim - $GLOBALS['nb'] || $i == 0)
		{
			$lim -= $GLOBALS['nb'];
			$format = "image" . $GLOBALS['a'];
		 	$format($image, "./" . $base . "/" . $base . $j . "." .$GLOBALS['a']);
			imagedestroy($image);
			$image = imagecreatetruecolor(1800,1500);
		 	$j++;
		}
		$i--;
	}
//	imagejpeg($image, "./" . $base . "/" . $base . $i . '.jpeg');
}
?>