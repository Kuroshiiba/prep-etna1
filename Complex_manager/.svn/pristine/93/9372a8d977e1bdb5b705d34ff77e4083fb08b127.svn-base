<?php
  function aff($r, $i) {
    if ($r != 0 || $i == 0)
      echo $r;
    if ($r != 0 && $i > 0)
      echo " + ";
    else if ($i < 0)
      echo " - ";
    $i = ($i < 0) ? -1 * $i : $i;
    if ($i == 1)
      echo " i";
    else if ($i != 0)
      echo $i . " i";
  }
  $_POST["reel"] = preg_replace("/,/", ".", $_POST["reel"]);
  $_POST["ima"] = preg_replace("/,/", ".", $_POST["ima"]);
  eval("\$reel = " . ((isset($_POST["reel"]) && $_POST["reel"] != "") ? $_POST["reel"] . ";" : "0;"));
  eval("\$ima = " . ((isset($_POST["ima"]) && $_POST["ima"] != "") ? $_POST["ima"] . ";" : "0;"));
?>
<!DOCTYPE html>
<html>
  <head>
    <meta charset="UTF-8">
    <link rel="stylesheet" media="screen" type="text/css" title="Exemple" href="style.css"/>
  </head>
  <body>
    <div class="div">
      <h1>
        Complex Manager
      </h1>
    </div>
    <div class="div">
      <form method="post" id="form"></form>
        <table id="table1">
          <tbody>
            <tr><td>Partie réelle</td><td><input name="reel" type="text" pattern="[-+]?\d*[,.]?\d+" form="form" placeholder="<?php echo $reel; ?>" /></td></tr>
            <tr><td>Partie imaginaire</td><td><input name="ima" type="text" pattern="[-+]?\d*[,.]?\d+" form="form" placeholder="<?php echo $ima; ?>" /></td></tr>
            <tr><td></td><td><button form="form">Go !</button></td></tr>
          </tbody>
        </table>
      <table id="table2">
        <tbody>
          <?php
            echo "<tr><td>a = </td><td>";
            echo $reel;
            echo "</td></tr>";

            echo "<tr><td>b = </td><td>";
            echo $ima;
            echo "</td></tr>";

            echo "<tr><td>conjugué = </td><td>";
            aff($reel, -1 * $ima);
            echo "</td></tr>";

            if ($ima == 0 && $reel == 0)
              echo "<tr><td>1 / z = </td><td>inf.</td></tr>";
            else
            {
              echo "<tr><td>1 / z = </td><td>(";
              aff($reel, -1 * $ima);
              echo ") / " . ($reel * $reel + $ima * $ima) . "</td></tr>";
            }

            $mod = sqrt($reel * $reel + $ima * $ima);
            echo "<tr><td>|z| = </td><td>" . round($mod, 3) . "</td></tr>";

            $arg = atan2($ima, $reel);
            echo "<tr><td>arg(z) = </td><td>";
            echo round($arg / pi(), 3) . " π</td></tr>";

            if ($mod == 0)
              echo "<tr><td>z = </td><td>0</td></tr>";
            else
              echo "<tr><td>z = </td><td>" . round($mod, 3) . "(cos(" . $arg / pi() . " π) + i sin(" . $arg / pi() . " π))</td></tr>";
          ?>
        </tbody>
      </table>
      <br>
      <canvas id="graph" width="500" height="500" style="border:3px solid black;">Votre navigateur ne supporte pas les balises HTML5 canvas.</canvas>
    </div>
    <script>
      var c = document.getElementById("graph");
      var ctx = c.getContext("2d");

      ctx.moveTo(250, 0);
      ctx.lineTo(250, 500);
      ctx.moveTo(0, 250);
      ctx.lineTo(500, 250);
      ctx.lineWidth = 2;
      ctx.strokeStyle = '#000';
      ctx.stroke();

      ctx.beginPath();
      ctx.lineWidth = 2;
      ctx.strokeStyle = '#f00';
      ctx.moveTo(250, 250);
      ctx.lineTo(250 + 25 * <?php echo $reel; ?>, 250 - 25 * <?php echo $ima; ?>);
      ctx.arc(250 + 25 * <?php echo $reel; ?>, 250 - 25 * <?php echo $ima; ?>, 2, 0, 2 * Math.PI, false);
      ctx.lineCap = "round";
      ctx.stroke();

      ctx.beginPath();
      ctx.setLineDash([5, 8]);
      ctx.lineWidth = 2;
      ctx.moveTo(250 + 25 * <?php echo $reel; ?>, 250);
      ctx.lineTo(250 + 25 * <?php echo $reel; ?>, 250 - 25 * <?php echo $ima; ?>);
      ctx.stroke();

      ctx.beginPath();
      ctx.setLineDash([5, 8]);
      ctx.lineWidth = 2;
      ctx.moveTo(250, 250 - 25 * <?php echo $ima; ?>);
      ctx.lineTo(250 + 25 * <?php echo $reel; ?>, 250 - 25 * <?php echo $ima; ?>);
      ctx.stroke();
      ctx.setLineDash([]);

      ctx.fillStyle = '#f00';
      ctx.fillText(<?php echo round($reel, 2); ?>, 247 + 25 * <?php echo $reel; ?>, 265);
      ctx.fillText(<?php echo round($ima, 2); ?>, 235, 253- 25 * <?php echo $ima; ?>);
      ctx.fillStyle = '#000';

      for (var i = 0; i <= 20; i++)
      {
        ctx.beginPath();
        ctx.lineWidth = 2;
        ctx.strokeStyle = '#000';
        ctx.moveTo(248, i * 25);
        ctx.lineTo(252, i * 25);
        ctx.stroke();

        ctx.beginPath();
        ctx.lineWidth = 2;
        ctx.strokeStyle = '#000';
        ctx.moveTo(i * 25, 248);
        ctx.lineTo(i * 25, 252);
        ctx.stroke();

        ctx.beginPath();
        ctx.lineWidth = 0.2;
        ctx.strokeStyle = '#000';
        ctx.moveTo(0, i * 25);
        ctx.lineTo(500, i * 25);
        ctx.stroke();

        ctx.beginPath();
        ctx.lineWidth = 0.2;
        ctx.strokeStyle = '#000';
        ctx.moveTo(i * 25, 0);
        ctx.lineTo(i * 25, 500);
        ctx.stroke();

        ctx.font = "10px Arial";
        ctx.fillText(i - 10, 255, 495 - 25 * i);
        ctx.fillText(10 - i, 505 - 25 * i, 245);
      }
    </script>
  </body>
</html>