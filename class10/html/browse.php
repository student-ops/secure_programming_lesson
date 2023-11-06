<?php
$filename = $_GET['file'];
$fh = fopen($filename,"r");
if ($fh === FALSE) {
echo 'cannot access '.$filename;
die;
}
$src = fread($fh,filesize($filename));
fclose($fh);
echo $src;