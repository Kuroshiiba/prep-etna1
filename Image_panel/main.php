<?php

require_once('./include/error.php');
require_once('./include/image_panel.php');
require_once('./include/create_mozaique.php');

	echo "\033c";
	$GLOBALS['a'] = 'jpeg';
	$GLOBALS['nb'] = 0;
	$nb = '';
	$taille = 1;
	if (check_value($argv))
		$taille = 2;
	if ($nb != 0)
		$taille++;
	create_mozaique(dl_pic(get_pic($argv, $taille)), $argv[count($argv) - 1]);








 
 //   while (($line = fgets($fd)) != false)
 //     {
//	$params = decoupe($line);
	//$com = '-' . $params[1];
	//if (function_exists($com))
	 // {
	 //   $com($params);
	 // }
	//else
	 // com_notfound($params);
	//my_prompt();
    //  }
    //fclose($fd);
 // }

?>
