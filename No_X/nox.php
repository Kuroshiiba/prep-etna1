#!/usr/bin/env php
<?php

$tdd = microtime(true);
//Début du Timer  
if ($argc != 3)
{
  echo "Veuillez entrer le fichier message et le fichier dico\n";
}
else if (is_readable($argv[1]) === FALSE)
  {
    echo "Le fichier " . $argv[1] . " n'existe pas\n";
  }
elseif (is_readable($argv[2]) === FALSE)
  {
    echo "Le fichier " . $argv[2] . " n'existe pas\n";
  }
else
  {
$h1 = fopen($argv[1], "r");
$h2 = fopen($argv[2], "r");

$c1 = fread($h2, filesize($argv[2]));
$c2 = fread($h1, filesize($argv[1]));

preg_match_all("/.+\s/",$c1, $dico);

preg_match_all("/.+\s/",$c2, $mots);
$dico2 = array_flip($dico[0]);

foreach ($mots[0] as $value) {
  if(array_key_exists($value, $dico2))
  {
      echo $value;
      }
  }
unset($value); // Détruit la référence sur le dernier élément

fclose($h1);
fclose($h2);
//Fin du Timer                                                                                                                                                                                                                                                               
$tdf = microtime(true);
$tps = $tdf - $tdd;
$tempsdecimal = number_format($tps, 4);
echo "\nRecherche terminee en " . $tempsdecimal . " sec.\n";
  }
?>