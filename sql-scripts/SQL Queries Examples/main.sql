1) How to create a database?
Ans:
Ex:       create database mom;
    --> create database is a command for creating a database.
    -->  mom is the database.
2) How to drop the database?
Ans:
        drop mom;

3) How to show the databases?
Ans:
Ex:         show databases;

4) How to select the database?
Ans:

      Syntax:   use databasename
      Example:  use mom
      

5) How to show all tables?
Ans:
Ex:          show tables;

6) How to create a table?
Ans:

Ex:
	CREATE TABLE `student` (
	  `id` int,
	  `name` varchar(250)
	);

Ex: 
	CREATE TABLE `marks` ( `id` int, `rank` int );

7) How to insert a row in a table?
Ans:
Ex:	INSERT INTO `student` (`id`, `name`) VALUES ('1', 'MOM');
Ex: 	INSERT INTO `student` (`id`, `name`) VALUES ('2', 'it'), ('3', 'Solutions');
Ex: 	INSERT INTO `marks` (`id`, `rank`) VALUES ('1', '101');
Ex:	INSERT INTO `marks` (`id`, `rank`) VALUES (2,202);
Ex: 	INSERT INTO marks (id, `rank`) VALUES (3,302);
Ex: 	INSERT INTO marks (id) VALUES (4);

How to show table data?
Ans:
Syntax:	select * from <TableName>;
Example:	SELECT * FROM marks;

How to print specific column name values or data from table?
Ex:	select id from marks;
Ex: 	select rank from marks;
Ex: 	select name from student;

Note:
	1) A database contains number of tables
	2) A table contains number of columns.

How to print specific data row from the table(where clause)?
Ans:
EX:	SELECT * FROM `student` WHERE id=3;
EX:	SELECT id,name FROM `student` WHERE id=3;
EX:	SELECT name FROM `student` WHERE id=3;

How to drop a table?
Ans:
Example:	drop TABLE marks;


