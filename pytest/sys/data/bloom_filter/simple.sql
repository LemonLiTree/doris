DROP DATABASE IF EXISTS test;
CREATE DATABASE test;
USE test;
CREATE TABLE `all_type` (
      `tinyint_key` tinyint(4) DEFAULT NULL,
      `smallint_key` smallint(6) DEFAULT NULL,
      `int_key` int(11) DEFAULT NULL,
      `bigint_key` bigint(20) DEFAULT NULL,
      `char_50_key` char(50) DEFAULT NULL,
      `character_key` varchar(500) DEFAULT NULL,
      `char_key` char(1) DEFAULT NULL,
      `character_most_key` varchar(65533) DEFAULT NULL,
      `decimal_key` decimal(20, 6) DEFAULT NULL,
      `decimal_most_key` decimal(27, 9) DEFAULT NULL,
      `date_key` date DEFAULT NULL,
      `datetime_key` datetime DEFAULT NULL,
      `tinyint_value` tinyint(4) DEFAULT NULL,
      `smallint_value` smallint(6) DEFAULT NULL,
      `int_value` int(11) DEFAULT NULL,
      `bigint_value` bigint(20) DEFAULT NULL,
      `char_50_value` char(50) DEFAULT NULL,
      `character_value` varchar(500) DEFAULT NULL,
      `char_value` char(1) DEFAULT NULL,
      `character_most_value` varchar(65533) DEFAULT NULL,
      `decimal_value` decimal(20, 6) DEFAULT NULL,
      `decimal_most_value` decimal(27, 9) DEFAULT NULL,
      `date_value_replace` date DEFAULT NULL,
      `date_value_max` date DEFAULT NULL,
      `date_value_min` date DEFAULT NULL,
      `datetime_value_replace` datetime DEFAULT NULL,
      `datetime_value_max` datetime DEFAULT NULL,
      `datetime_value_min` datetime DEFAULT NULL,
      `float_value` float DEFAULT NULL,
      `double_value` double DEFAULT NULL);
