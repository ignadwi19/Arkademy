<?php
mysqli_connect("localhost", "root", "","arkademy");
?>

<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <meta http-equiv="X-UA-Compatible" content="ie=edge">
    <title>Arkademy</title>
    <link rel="stylesheet" type="text/css" href="style.css">
</head>
<body>
<div>
<img src="img/icon.png" width="95">
    <h1 id="head"> ARKADEMY BOOTCAMP</h1>

</div>
    <table class="tabel" border="1px" cellpadding="10" cellspacing="0">

    <tr class="tabel">
        <th>Name</th>
        <th>Work</th>
        <th>Salary</td>
</tr>

<tr class="tabel">
<td>Bintang</td>
<td>Backend Dev</td>
<td>Rp 12.000.000</td>
</tr>

<tr class="tabel">
<td>Tasya</td>
<td>Backend Dev</td>
<td>Rp 12.000.000</td>
</tr>

<tr class="tabel">
<td>Poetra</td>
<td>Backend Dev</td>
<td>Rp 12.000.000</td>
</tr>

<tr class="tabel">
<td>Joko</td>
<td>Frontend Dev</td>
<td>Rp 10.000.000</td>
</tr>

</table> 


<button id="button"><a href="submit.php" target="_parent">Submit</a></button>
</body> 
</html>