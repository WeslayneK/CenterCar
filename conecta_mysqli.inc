<?php
	// conexão usando o estilo procedural da extensão MySQLi
   $conexao = mysqli_connect ("localhost", "root", "");
   mysqli_select_db ($conexao, "lojacarros");
   mysqli_set_charset($conexao, "utf8")
?>