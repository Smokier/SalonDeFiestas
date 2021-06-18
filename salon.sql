-- MySQL dump 10.13  Distrib 5.7.17, for Win64 (x86_64)
--
-- Host: localhost    Database: salon
-- ------------------------------------------------------
-- Server version	5.7.21-log

/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8 */;
/*!40103 SET @OLD_TIME_ZONE=@@TIME_ZONE */;
/*!40103 SET TIME_ZONE='+00:00' */;
/*!40014 SET @OLD_UNIQUE_CHECKS=@@UNIQUE_CHECKS, UNIQUE_CHECKS=0 */;
/*!40014 SET @OLD_FOREIGN_KEY_CHECKS=@@FOREIGN_KEY_CHECKS, FOREIGN_KEY_CHECKS=0 */;
/*!40101 SET @OLD_SQL_MODE=@@SQL_MODE, SQL_MODE='NO_AUTO_VALUE_ON_ZERO' */;
/*!40111 SET @OLD_SQL_NOTES=@@SQL_NOTES, SQL_NOTES=0 */;

--
-- Table structure for table `calendario`
--

DROP TABLE IF EXISTS `calendario`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `calendario` (
  `id_calendario` int(5) NOT NULL AUTO_INCREMENT,
  `id_evento` int(6) NOT NULL,
  `fecha_calendario` date NOT NULL,
  `duracion_calendario` int(3) NOT NULL,
  PRIMARY KEY (`id_calendario`),
  KEY `id_evento` (`id_evento`),
  CONSTRAINT `calendario_ibfk_1` FOREIGN KEY (`id_evento`) REFERENCES `evento` (`id_evento`)
) ENGINE=InnoDB AUTO_INCREMENT=4 DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `calendario`
--

LOCK TABLES `calendario` WRITE;
/*!40000 ALTER TABLE `calendario` DISABLE KEYS */;
INSERT INTO `calendario` VALUES (1,1,'2021-06-16',6),(2,5,'2021-06-17',6),(3,6,'2021-06-22',5);
/*!40000 ALTER TABLE `calendario` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `evento`
--

DROP TABLE IF EXISTS `evento`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `evento` (
  `id_evento` int(6) NOT NULL AUTO_INCREMENT,
  `id_usuario` int(5) NOT NULL,
  `nombre_evento` varchar(45) NOT NULL,
  `personas_evento` int(4) NOT NULL,
  `precio_evento` int(10) NOT NULL,
  `duracion_evento` int(2) NOT NULL,
  `mesas_evento` int(3) NOT NULL,
  `menu_evento` varchar(400) NOT NULL,
  `refrescos_evento` int(4) NOT NULL,
  `barra_evento` tinyint(1) DEFAULT NULL,
  `adicionales_evento` varchar(400) DEFAULT NULL,
  PRIMARY KEY (`id_evento`),
  KEY `id_usuario` (`id_usuario`),
  CONSTRAINT `evento_ibfk_1` FOREIGN KEY (`id_usuario`) REFERENCES `usuario` (`id_usuario`)
) ENGINE=InnoDB AUTO_INCREMENT=7 DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `evento`
--

LOCK TABLES `evento` WRITE;
/*!40000 ALTER TABLE `evento` DISABLE KEYS */;
INSERT INTO `evento` VALUES (1,2,'XV de rosa',300,140000,6,12,'crema de zanahoria, pechuga rellena, postre',300,NULL,'Ninguno'),(2,2,'bosa de mariana',200,30000,6,12,'crema de zanahoria, pechuga rellena, postre',300,NULL,'Ninguno'),(3,2,'evento con detalles',200,30000,6,12,'albondigas y jitomates',15,NULL,'Centro de mesa con rosas'),(4,2,'Avance de nuevo',250,50000,8,12,'pasta boloñesa',32,NULL,'guayabas en centro de mesa\r\nque las personas de servicio tengan\r\nvestimenta de color obscuro'),(5,2,'graduacion juanita',300,15000000,6,12,'crema de zanahoria, pechuga rellena, postre',300,NULL,'centro de mesa '),(6,2,'comunion',200,8000,5,5,'jitomatitos',30,NULL,'jitomatitos jaja');
/*!40000 ALTER TABLE `evento` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `liquidado`
--

DROP TABLE IF EXISTS `liquidado`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `liquidado` (
  `id_liquidado` int(5) NOT NULL AUTO_INCREMENT,
  `id_evento` int(6) NOT NULL,
  `precio_liquidado` int(6) NOT NULL,
  `restante_liquidado` int(6) NOT NULL,
  `estado_liquidado` tinyint(1) DEFAULT NULL,
  PRIMARY KEY (`id_liquidado`),
  KEY `id_evento` (`id_evento`),
  CONSTRAINT `liquidado_ibfk_1` FOREIGN KEY (`id_evento`) REFERENCES `evento` (`id_evento`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `liquidado`
--

LOCK TABLES `liquidado` WRITE;
/*!40000 ALTER TABLE `liquidado` DISABLE KEYS */;
/*!40000 ALTER TABLE `liquidado` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `paquete`
--

DROP TABLE IF EXISTS `paquete`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `paquete` (
  `id_paquete` int(3) NOT NULL AUTO_INCREMENT,
  `nombre_paquete` varchar(25) NOT NULL,
  `personas_paquete` int(3) NOT NULL,
  `precio_paquete` int(6) NOT NULL,
  `duracion_paquete` int(2) NOT NULL,
  `mesas_paquete` int(2) NOT NULL,
  `menu_paquete` varchar(150) NOT NULL,
  `refrescos_paquete` int(4) NOT NULL,
  `barra_paquete` tinyint(1) DEFAULT NULL,
  PRIMARY KEY (`id_paquete`)
) ENGINE=InnoDB AUTO_INCREMENT=6 DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `paquete`
--

LOCK TABLES `paquete` WRITE;
/*!40000 ALTER TABLE `paquete` DISABLE KEYS */;
INSERT INTO `paquete` VALUES (1,'fiesta de XV',300,50000,6,12,'crema de zanahoria, pechuga rellena, postre',300,1),(2,'boda',200,25000,7,10,'pollo y pasta',15,NULL),(3,'bautizo',20,20,30,30,'HOLAA',30,NULL),(4,'Avance clase',200,150,8,12,'pasta boloñesa',12,NULL);
/*!40000 ALTER TABLE `paquete` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `usuario`
--

DROP TABLE IF EXISTS `usuario`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `usuario` (
  `id_usuario` int(5) NOT NULL AUTO_INCREMENT,
  `correo_usuario` varchar(20) NOT NULL,
  `pass_usuario` varchar(50) NOT NULL,
  `permiso_usuario` int(2) NOT NULL,
  PRIMARY KEY (`id_usuario`)
) ENGINE=InnoDB AUTO_INCREMENT=3 DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `usuario`
--

LOCK TABLES `usuario` WRITE;
/*!40000 ALTER TABLE `usuario` DISABLE KEYS */;
INSERT INTO `usuario` VALUES (1,'admin@admin.com','root',0),(2,'cliente@cliente.com','123',1);
/*!40000 ALTER TABLE `usuario` ENABLE KEYS */;
UNLOCK TABLES;
/*!40103 SET TIME_ZONE=@OLD_TIME_ZONE */;

/*!40101 SET SQL_MODE=@OLD_SQL_MODE */;
/*!40014 SET FOREIGN_KEY_CHECKS=@OLD_FOREIGN_KEY_CHECKS */;
/*!40014 SET UNIQUE_CHECKS=@OLD_UNIQUE_CHECKS */;
/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
/*!40111 SET SQL_NOTES=@OLD_SQL_NOTES */;

-- Dump completed on 2021-06-16 15:33:08
