<?php

function rrmdir($dir) { 
   if (is_dir($dir)) { 
     $objects = scandir($dir); 
     foreach ($objects as $object) { 
       if ($object != "." && $object != "..") { 
         if (filetype($dir."/".$object) == "dir") rrmdir($dir."/".$object); else unlink($dir."/".$object); 
       } 
     } 
     reset($objects); 
     rmdir($dir); 
   } 
} 
if (is_dir("./images"))
	rrmdir("./images");
if (!is_dir("./images"))
	mkdir("./images");

function url($url)
{
	$handle = curl_init($url);
	curl_setopt($handle,  CURLOPT_RETURNTRANSFER, TRUE);
	$response = curl_exec($handle);
	$httpCode = curl_getinfo($handle, CURLINFO_HTTP_CODE);
	if($httpCode == 404)
		return false;
	curl_close($handle);
	return true;
}

function my_filesize($url)
{
	$ch = curl_init();
	curl_setopt($ch, CURLOPT_URL, '$url');
	curl_setopt($ch, CURLOPT_FOLLOWLOCATION, true);
	curl_setopt($ch, CURLOPT_RETURNTRANSFER, true);
	curl_setopt($ch, CURLOPT_HEADER, true);
	curl_setopt($ch, CURLOPT_NOBODY, true);
	curl_exec($ch);
	$size = curl_getinfo($ch, CURLINFO_CONTENT_LENGTH_DOWNLOAD);
	return $size;
}

function relatif($path, $site)
{
	if($path[0] == '/')
		return($site .= $path);
}

function get_pic($argv, $taille)
{
	$x        = $taille;
	$y        = 0;
	$contents = '';
	while($x < count($argv) - 1)
	{
		if(!url($argv[$x]))
		{
			echo "Lien invalide\n";
			exit();
		}
		$handle = fopen($argv[$x], "rb");
		if (FALSE === $handle) {
		    exit("Echec lors de l'ouverture du flux vers l'URL");
		}
		while (!feof($handle)) {
		    $contents .= fread($handle, 8192);
		}
		fclose($handle);
		preg_match_all("/<img.*src=\"(.*?(.jpg|.png|.jpeg|.gif))/i", $contents, $resultat);
		unset($resultat[0]);
		unset($resultat[2]);
		while (isset($resultat[1][$y])){
			if (!preg_match("/http:\/\/|https:\/\//", $resultat[1][$y]) && preg_match("/http:\/\/|https:\/\//", $argv[$x]))
			{
				echo "$x\n$y\n";
				if($resultat[1][$y][0] != "/")
					$resultat[1][$y] = $argv[$x] . "/" . $resultat[1][$y];
				else
				{
					echo $argv[$x];
					echo "\n" . $resultat[1][$y] . "\n";
					$resultat[1][$y] = $argv[$x] . $resultat[1][$y];
					echo $resultat[1][$y];
					echo "\n";
				}
					
			}
			$y++;
		}
		$x++;
	}
	return $resultat;
}

function dl_pic($resultat)
{
	$i      = 0;
	$j      = 0;
	$k      = 0;
	$tab[1] = "gif";
	$tab[2] = "jpeg";
	$tab[3] = "png";
	while(isset($resultat[1][$i]))
	{
		if (preg_match("/http:\/\/|https:\/\//", $resultat[1][$i]))
			$test = "url";
		else
			$test = "file_exists";
		if ($test($resultat[1][$i]) == true)
		{
				if($type = $tab[exif_imagetype($resultat[1][$i])])
				{
					$funca  = "imagecreatefrom" . $type;
					$my_pic[$i] = $funca($resultat[1][$i]);
					//$funcb  = "image". $type;
					//$funcb($my_pic, "./images/test" . $k . ".". $type);
					echo "ressource test" . $k . "." . $type . " crée avec succés\n";
					$k++;
				}
		}
		else
			$j++;
		$i++;
	}
	echo "\n" .  count($resultat[1]) - $j . " résultats trouvés\n";
	return $my_pic;
}







































?>
