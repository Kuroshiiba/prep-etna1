<?php

function	g()
{
	$GLOBALS['a'] = "gif";
}

function	j()
{
	$GLOBALS['a'] = "jpeg";
}

function l($number)
{
	if (is_numeric($number))
		$GLOBALS['nb'] = $number;
	else
	{
		echo "Argument invalide\n";
		exit();
	}
	return ;
}

function	N()
{
	echo "Les options N et n sont inaccessible actuellement\n";
}

function	p()
{
	$GLOBALS['a'] = "png";
}

function 	s()
{
}
function check_value($argv)
{
	if ($argv[1][0] == "-")
	{
		$j = 1;
		$array = ["g", "j", "l", "n", "N", "s", "p"];
		while (isset($argv[1][$j]))
		{
	 		if (in_array($argv[1][$j], $array))
	 		{
	 			if ($argv[1][$j] != 'l')
	 			{
	 				$argv[1][$j]();
	 			}
		 			
		 		else
			 		{
				 		$argv[1][$j]($argv[2]);
			 		}
	 			$j++;
	 		}
	 		else
	 			return FALSE;
	 	}
	 	return TRUE;
	 }
	 return  FALSE;
}