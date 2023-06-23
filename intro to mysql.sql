-- [[NOTES]]
-- [mySQL is NOT case sensitive]
-- [query = command]
-- [Text in  "[]" are comments. Text in "[[]]" are comments that are subitiles to a specific concept. This helps the reader to differentiate queires and comments.]

-- [[DATABSES]]
/*

-- [Databses = Directory]
-- [Tables = Files]
-- [Run each statement below one at a time]

-- CREATE DATABASE myDB;  -- [Create a new database]
-- USE myDB;   -- [Open myDB databse]
-- DROP DATABASE myDB;  -- [Drop/delete a database]
-- CREATE DATABASE myDB;
-- USE myDB;

-- ALTER DATABASE myDB READ ONLY = 1;   -- [Make database read-only]
-- ALTER DATABASE myDB READ ONLY = 0;   -- [Disable read-only database]
*/

-- [[TABLES]]
/*
-- USE myDB;
-- CREATE TABLE employees
-- (
-- 	   employee_id INT,
--     first_name VARCHAR(50), -- [50 maximum characters]
--     last_name VARCHAR(50),
--     hourly_pay DECIMAL(5, 2), -- ["5" maximum amount of digits, "2" precision (two decimal points)]
--     hire_date DATE 
-- );

-- SELECT * FROM employees;  --[Display table]

-- RENAME TABLE employees TO workers; --[Renaming a table]
-- RENAME TABLE workers TO employees; 
-- DROP TABLE employees; -- [Dropping/delete a table]
 
-- ALTER TABLE employees  
-- 		ADD phone_number VARCHAR(15);  -- [Add a column]

-- SELECT * FROM employees; --["Select ALL from employees"]

-- ALTER TABLE employees
-- 		RENAME COLUMN phone_number to email; 
-- SELECT * FROM employees;

-- ALTER TABLE employees
-- 		MODIFY COLUMN email VARCHAR(100);  -- [Change datatype of desired column]

-- DESCRIBE employees; -- [Display meta data of employees table]

-- SELECT * FROM employees;

-- ALTER TABLE employees
-- 		MODIFY email VARCHAR(100)
--     		AFTER last_name;  -- [move email column to the right of last_name]

-- ALTER TABLE employees
-- 		MODiFY email VARCHAR(100)
--     		first; -- [move email to first]

-- SELECT * FROM employees; 

-- ALTER TABLE employees
-- 		DROP COLUMN email; -- [Dropping a column]

-- SELECT * FROM employees;
*/

-- [[INSERT ROWS]]
/*
-- USE myDB;

-- INSERT INTO employees
-- 	VALUES (2, "Squidward", "Tentacles", 15.00, "2023-01-03"),  -- ["2023-01-03" "YEAR-MONTH-DAY"]
-- 			(3, "Spongebob", "Squarepants", 12.50, "2023-01-04"),
--             (4, "Patrick", "Star", 12.50, "2023-01-05"),
--             (5, "Sandy", "Cheels", 17.25, "2023-01-06");  -- [inserting multiple rows of data (arguemnts postions follow oroder of columns from left to right)]

--     
-- INSERT INTO employees(employee_id, first_name, last_name)  -- [Inserting a row with mising info]
-- 		VALUES (6, "Sheldon", "Plankton");


-- SELECT * FROM employees;
*/

-- [[SELECT keyword]]
/*
-- [display last_name then first_name of all samples from employees table]
-- SELECT last_name, first_name FROM employees;

-- SELECT * FROM employees 
		WHERE employee_id =1;
        
-- SELECT * FROM employees 
		WHERE hourly_pay >= 15;
        
-- SELECT * FROM employees 
		WHERE hire_date <= "2023--1-02";
        
-- SELECT * FROM employees 
		WHERE employee_id != 1;

-- SELECT * FROM employees 
		WHERE hire_date IS NULL;

-- SELECT * FROM employees 
		WHERE hire_date IS NOT NULL;
*/

-- [[UPDATE AND DELETE]]
/*
-- INSERT INTO employees
-- 	VALUES (2, "Squidward", "Tentacles", 15.00, "2023-01-03"),  -- ["2023-01-03" "YEAR-MONTH-DAY"]
-- 			(3, "Spongebob", "Squarepants", 12.50, "2023-01-04"),
--             (4, "Patrick", "Star", 12.50, "2023-01-05"),
--             (5, "Sandy", "Cheeks", 17.25, "2023-01-06");  -- [inserting multiple rows of data (arguemnts postions follow oroder of columns from left to right)]

--     
-- INSERT INTO employees(employee_id, first_name, last_name)  -- [Inserting a row with mising info]
-- 	VALUES (6, "Sheldon", "Plankton");


-- UPDATE employees 
-- 		SET hourly_pay = 10.25,
--     		hire_date = NULL
-- 				WHERE employee_id = 6;

-- DELETE FROM EMPLOYEES WHERE employee_id =6; -- [Deleting row that makes where clause true]

-- SELECT * FROM employees;
*/

-- [[AUTOCOMMIT, COMMIT, ROLLBACK]]
/*
-- [By default, AUTOCOMMIT is set to be on.]
-- [When on, any transactions after executing are saved.]
-- [If that mode is set to off (SET AUTOCOMMIT= OFF), you can commit any changes manually.]
-- [COMMIT = Creates a savepoint.]
-- [To undo any changes use that ROLLBACK statement]

-- USE myDB;
-- SET AUTOCOMMIT = OFF; -- [Our transaction will not save automatically.]
-- COMMIT; -- [Creates a savepoint]

-- DELETE FROM employees;
-- ROLLBACK; -- [Restore my current transaction back to the previous savepoint (where we used commit)]

SELECT * FROM employees;
*/

-- [[CURRENT_DATE() & CURRENT_TIME]]
/*
-- [You can use the current date, time, or both in your dataset]

-- USE myDB;

-- CREATE TABLE test
-- (
-- 	   my_date DATE,
--     my_time TIME,
--     my_datetime DATETIME
-- );

-- SELECT * FROM test;

-- INSERT INTO test
-- -- VALUE(CURRENT_DATE()+1, NULL, NULL);
-- VALUE(CURRENT_DATE()-1, NULL, NULL);
-- SELECT * FROM test;
-- DROP TABLE test;
*/

-- [[UNIQUE Contraint]]
/*
-- [Shows that all values in a column are different.]

-- CREATE TABLE products 
-- (
-- 	product_id INT,
--     product_name VARCHAR(25) UNIQUE, -- [Using the unique constraint for this column]
--     price DECIMAL(4, 2)
-- );

-- [Adding a unique contrainst on a existing column in a existing table.]
-- ALTER TABLE product
-- 	ADD CONSTRAINT
--     UNIQUE(product_name);  

-- SELECT * FROM products;

-- INSERT INTO products
-- VALUES (100, "hamburger", 3.99),
-- 	   (101, "fires", 1.89),
--        (102, "soda", 1.00),
--        (103, "ice cream", 1.49);

-- SELECT * FROM products;
*/

-- [[NOT NULL Constraint]]
/*
-- CREATE TABLE products
-- (
-- 	   product_id INT,
--     product_name VARCHAR(25),
--     price DECIMAL(4,2) NOT NULL
-- );

-- ALTER TABLE products
-- 		MODIFY price DECIMAL(4,2) NOT NULL;

-- SELECT * FROM products;

-- INSERT INTO products
-- VALUES(104, "cookie", NULL); -- [Doesn't work]
*/

-- [[CHECK Constraint]]
/*
-- SELECT * FROM employees;

-- [Creating a table with the CHECK constraint]
-- CREATE TABLE employees
-- (
-- 	employee_id INT,
--     first_name VARCHAR(50),
--     last_name VARCHAR(50),
--     hourly_pay DECIMAL(5,2),
--     hire_date DATE,
--     CONSTRAINT chk_horly_pay CHECK(hourly_pay >= 10.00) -- Create a name for the CHECK constraint
-- );

-- [Adding a CHECK constraint in an exisitng table]
-- ALTER TABLE employees
-- 	ADD CONSTRAINT chk_hourly_pay CHECK(hourly_pay >= 10);

-- SELECT * FROM employees;

-- INSERT INTO employees
-- 	VALUES (7, "Larry", "Lobster", 5.00, 2023-01-07); -- [Will not work since hourly_pay = 5.00 < 10.00]

-- SELECT * FROM employees;

-- INSERT INTO employees
-- 	VALUES (7, "Larry", "Lobster", 10.00, 2023-01-07); -- [Will work]

-- [Dropping a CHECK constraint]
-- ALTER TABLE employees
-- 	DROP CHECK chk_hourly_pay;
*/

-- [[DEFAULT Constraint]]
/*
-- [When inserting a new row, if we do not specify a value for a column by default we can add some value that we set]

-- SELECT * FROM products;

-- [inserting products manually with each sample having the same price]
-- INSERT INTO products
-- 	VALUES (104, "straw", 0.00),
-- 		   (105, "napkin", 0.00),
-- 		   (106, "plastic fork", 0.00),
-- 		   (107, "plastic spoon", 0.00);
  
 -- [disabling safe update mode] 
--  SET SQL_SAFE_UPDATES = 0;
 
  
-- DELETE FROM products
-- 	WHERE product_id >= 104;
  
-- [Create a table with DEFAULT constraint]
-- CREATE TABLE products
-- (
-- 	   prdouct_id INT,
--     product_name VARCHAR(25),
--     price DECIMAL(4,2) DEFAULT 0 
-- );

-- [include a DEFAULT constraint to a column in a existing table]
-- ALTER TABLE products
-- 	ALTER price
-- 		SET DEFAULT 0;

-- INSERT INTO PRODUCTS (product_id, product_name)
-- 	VALUES (104, "straw"),
-- 		   (105, "napkin"),
-- 		    (106, "fork"),
-- 		    (107, "spoon");

-- SELECT * FROM products;

-- CREATE TABLE transactions
-- (
-- 	transaction_id INT,
--     amount DECIMAL(5,2),
--     transaction_date DATETIME DEFAULT NOW() -- [Make current date and time as DEFAULT]
-- );

-- SELECT * FROM transactions;

-- INSERT INTO transactions(transaction_id, amount)
-- 	VALUES (3, 8.37);

-- SELECT * FROM transactions;

-- DROP TABLE transactions; -- [Deleting transaction table]
*/

-- [[PRIMARY KEYS Constraint]]
/*

-- [The primary key constraint can be applied to a column where each value in that column must both be unique and not null]
-- [It's typically used as a unique identifier]
-- [YOU CAN HAVE ONLY ONE PRIMARY KEY PER TABLE]

-- CREATE TABLE transactions
-- (
-- 	transaction_id INT PRIMARY KEY, -- [There can be no duplicates nor NULL values in this column]
--     amount DECIMAL(5,2)
-- );

-- [Add a primary key constraint to a column of a table that already exists]
-- ALTER TABLE transactions
-- 	ADD CONSTRAINT PRIMARY KEY(transaction_id);

-- [Testing the TABLE, each line below is run onced, and then commented off]
-- INSERT INTO transactions
-- 	-- VALUES (1000, 4.99);
--     -- VALUES (1001, 2.89);
-- 	-- VALUES (1001 , 3.38); -- [Can't do this]
--     -- VALUES (NULL, 4.21); -- [Can't do this either]
-- 	VALUES (1003, 4.99);

-- SELECT * FROM transactions;

-- [Display amount of specific transaction_id]
-- SELECT amount
-- 	FROM transactions
-- 		WHERE transaction_id = 1003;
*/

-- [[AUTO INCREMENT]]
/*
-- [Can be applied to a column that is set as a key]
-- [whenever we insert a new row, our primary key can be populated automatically. Then each subsequent row is auto incremented]

-- DROP TABLE transactions;

-- CREATE TABLE transactions
-- (
-- 	transaction_id INT PRIMARY KEY AUTO_INCREMENT,
--     amount DECIMAL(5,2)
-- );


-- INSERT INTO transactions (amount)
-- 	VALUES (4.99); -- [transaction_id  automatically set to 1]

-- INSERT INTO transactions (amount)
-- 	VALUES (2.89); -- [transaction_id automatically set to 2]

-- INSERT INTO transactions (amount)
-- 	VALUES (3.38); -- [transaction_id automatically set to 3]
    
-- INSERT INTO transactions (amount)
-- 	VALUES (4.99); -- [transaction_id automatically set to 4]

-- [We could set our primary key at a different value]
-- ALTER TABLE transactions
-- 	AUTO_INCREMENT = 1000;
   
--  DELETE FROM transactions;
--  SELECT * FROM transactions;

-- INSERT INTO transactions (amount)
-- 	VALUES (4.99); -- [Automatically set transaction_id to 1000]

-- INSERT INTO transactions (amount)
-- 	VALUES (2.89); 

-- INSERT INTO transactions (amount)
-- 	VALUES (3.38); 

-- INSERT INTO transactions (amount)
-- 	VALUES (4.99); 

-- SELECT * FROM transactions;
*/

-- [[FOREIGN KEYS]]
/*
-- [MySQL supports foregin keys, which permit cross-referening related data across tables, and foreign key constraints, which help keep the related data consistent.]
-- [A foreign key relationship involves a parent table that holds the initial column values, and a child table with column values that reference the parent column values.]
-- [A foregn key constraint is defined on the child table.]

-- CREATE TABLE customers
-- (
-- 	customer_id INT PRIMARY KEY AUTO_INCREMENT,
--     first_name VARCHAR(50),
--     last_name VARCHAR(50)
-- );

-- SELECT * FROM customers;

-- INSERT INTO customers (first_name, last_name)
-- 	VALUES ("Fred", "Fish"), 
-- 		   ("Larry", "Lobster"),
--            ("Bubble", "Bass");


-- SELECT * FROM customers;

-- DROP TABLE transactions;

-- [Recreate transactions table, but include the FORGEIN KEY contraint]
-- CREATE TABLE transactions
-- (
-- 	transaction_id INT PRIMARY KEY AUTO_INCREMENT,
--     amount DECIMAL(5,2),
--     customer_id INT,
--     FOREIGN KEY(customer_id) REFERENCES customers(customer_id)
-- );

-- [To drop a foreign key]
-- ALTER TABLE transactions
-- 	DROP FOREIGN KEY transactions_ibfk_1;

-- [Add a foreign key that has a unique name to an existing table]
-- ALTER TABLE transactions
-- 	ADD CONSTRAINT fk_customer_id
-- 		FOREIGN KEY(customer_id) REFERENCES customers(customer_id); -- [FOREIGN KEY(column_of_current_table) REFERENCES other_table_name(column_of_other_table)]

-- ALTER TABLE transactions
-- 	AUTO_INCREMENT = 1000;

-- INSERT INTO transactions (amount, customer_id)
-- 	VALUES (4.99, 3), 
-- 		   (2.89, 2),
--            (3.38, 3),
--            (4.99, 1);

-- DELETE FROM customers
-- 	WHERE customer_id = 3;  -- [Cannot do this]

-- SELECT * FROM transactions;
*/

-- [[JOINS]]
/*
-- INSERT INTO transactions (amount, customer_id) 
-- 	VALUES (1.00, NULL);

-- INSERT INTO customers (first_name, last_name) 
-- 	VALUES ("Poppy", "Puff");


-- [Performing an inner join]
-- SELECT *
-- 	FROM transactions INNER JOIN customers  -- ["left table" INNER JOIN "right table"]
-- 		ON transactions.customer_id = customers.customer_id;   -- [Primary key and foreign key names]

-- [Performing an inner join with columns that we want.]
-- SELECT transaction_id, amount, first_name, last_name
-- 	FROM transactions INNER JOIN customers
-- 		ON transactions.customer_id = customers.customer_id;  

-- [Performning a left join] [we will display EVERYTHING from the table on the left, our transactions table. Howver, if there is a matching customer ID pull in any relevant data from the table on the right.]
-- SELECT *
-- 	FROM transactions LEFT JOIN customers
-- 		ON transactions.customer_id = customers.customer_id;

-- [Performning a right join] [we will display EVERYTHING from the table on the right, our customers table. Howver, if there is a matching customer ID pull in any relevant data from the table on the right.]
SELECT *
	FROM transactions RIGHT JOIN customers
		ON transactions.customer_id = customers.customer_id;
*/

-- [[FUNCTIONS]]
/*
-- SELECT COUNT(amount) -- [returns the nmber of rows in the column "amount"]
-- 	FROM transactions;

-- [Can give a column an alias] 
-- SELECT COUNT(amount) AS "today's transactions"
-- 	FROM transactions;

-- SELECT MAX(amount) AS "maximum"
-- 	FROM transactions;

-- SELECT MIN(amount) AS "minimum"
-- 	FROM transactions;

-- SELECT AVG(amount) AS "average"
-- 	FROM transactions; 

-- SELECT SUM(amount) AS "sum"
-- 	FROM transactions;

-- [combine first_name and last_name, and create a new column name full_name]
-- SELECT * FROM employees;    
-- SELECT CONCAT(first_name, " ", last_name) AS full_name
-- 	FROM employees;
*/

-- [[AND, OR, NOT, BETWEEN, IN logical operators]]
/*
-- ALTER TABLE employees
-- 	ADD COLUMN job VARCHAR(25) 
-- 		AFTER  hourly_pay;

-- UPDATE employees
-- 	SET job = "manager" 
-- 		WHERE employee_id =1;

-- UPDATE employees
-- 	SET job = "cashier" 
-- 		WHERE employee_id =2;

-- UPDATE employees
-- 	SET job = "cook" 
-- 		WHERE employee_id =3;

-- UPDATE employees
-- 	SET job = "cook" 
-- 		WHERE employee_id =4;
        
-- UPDATE employees
-- 	SET job = "asst. manager" 
-- 		WHERE employee_id =5;

-- UPDATE employees
-- 	SET job = "janitor"
-- 		WHERE employee_id = 6;

-- [AND logical operator example]
-- SELECT *
-- 	FROM employees
-- 		WHERE hire_date < "2023-01-5" AND job = "cook";

-- [OR lgocal operator example]
-- SELECT *
-- 	FROM employees
-- 		WHERE job = "cook" OR job = "cashier";

-- [NOT logical operator example] 
-- SELECT *
-- 	FROM employees
-- 		WHERE NOT job = "manager"

-- SELECT *
-- 	FROM employees
-- 		WHERE NOT job = "manager" AND NOT job = "asst. manager";

-- [the BETWEEN logical operator]
-- SELECT *
-- 	FROM employees
-- 		WHERE hire_date BETWEEN "2023-01-04" AND "2023-01-07";

-- [The IN logical operator]
-- SELECT *
-- 	FROM employees
-- 		WHERE job IN ("cook", "cashier", "janitor");
*/

-- [[WILD CARD characters]]
/*
-- [wild card characters % _]
-- [used to subsitute one or more characters in a string]

-- SELECT * 
-- 	FROM employees
-- 		WHERE first_name LIKE "s%"; --  [show rows where  their first_name starts wiith the letter s.] 

-- SELECT * 
-- 	FROM employees
-- 		WHERE hire_date LIKE "2023%"; -- [show rows where  their hire_date is in the year 2023]

-- SELECT *
-- 	FROM employees 
-- 		WHERE last_name LIKE "%r"; -- [show rows where last_name ends with the letter 'r']

-- SELECT *
-- 	FROM employees
-- 		WHERE first_name LIKE "sp%";

-- [ '_' represents ONE random letter]
-- SELECT *
-- 	FROM employees
-- 		WHERE job LIKE "_ook";

-- SELECT *
-- 	FROM employees
-- 		WHERE job LIKE "_ook_"; -- [Displays nothing since there are no 5 character string with "ook"]
        
-- SELECT *
-- 	FROM employees
-- 		WHERE hire_date LIKE "____-__-02"; -- [Displays rows which hire_date has '02' at the end]

-- SELECT *
-- 	FROM employees
-- 		WHERE job LIKE "_a%"; -- [displays rows where jobs has an 'a' as the second letter]
*/

-- [[ORDER BY]]
/*
-- SELECT *
-- 	FROM employees
-- 		ORDER BY last_name; -- [Ascending order]

-- SELECT *
-- 	FROM employees
-- 		ORDER BY last_name DESC; -- [Descending order]

-- SELECT *
-- 	FROM employees
-- 		ORDER BY first_name DESC;

-- SELECT *
-- 	FROM employees
-- 		ORDER BY first_name DESC;

-- [example below shows that you can order by more than one column. For sorting amount, if there are identical values then the second case will execute to sort those identical values]
-- SELECT * FROM transactions
-- 	ORDER BY amount, customer_id;

-- SELECT * FROM transactions
-- 	ORDER BY amount ASC, customer_id DESC;
*/

-- [[LIMIT]]
/*
-- [LIMIT clause is sed to limit the number of records.]
-- [Useful if you're working with a lot  of data.]
-- [Can be used to display a large data on pages (pagination).]alter

-- SELECT * FROM customers
-- 	LIMIT 1; -- [display first row]

-- SELECT * FROM customers
-- 	LIMIT 2; -- [display first 2 rows]

-- SELECT * FROM customers
-- 	LIMIT 3; -- [display first 3 rows]

-- SELECT * FROM customers
-- 	LIMIT 4; 

-- SELECT * FROM customers
-- 	ORDER BY last_name LIMIT 1;
    
-- SELECT * FROM customers
-- 	LIMIT 1, 1;  -- [Limit to one record after the first (offset)]
  
-- SELECT * FROM customers
-- 	LIMIT 2, 1;  -- [Limit to one record after the first and second]

-- SELECT * FROM customers
-- 	LIMIT 10, 10;

*/

-- [[UNIONS]] 
/*
-- [UNION combines the results of two or more SELECT statements] 
-- [[UNON doesn't allow duplicates. To display all duplicates, use UNION ALL]]

-- CREATE TABLE income
-- (
-- 	income_name VARCHAR(50),
--     amount DECIMAL(11,2)
-- );

-- CREATE TABLE expenses
-- (
-- 	expenses_name VARCHAR(50),
--     amount DECIMAL(11,2)
-- );

-- INSERT INTO expenses
-- 	VALUES ("wages", -250000.00),
-- 		   ("tax", -50000.00), 
--            ("reparis", -15000.00);

-- INSERT INTO income
-- 	VALUES ("orders", 1000000.00), 
-- 		   ("merchandise", 50000.00),
-- 		   ("services", 125000.00);

-- [Both tables must have same number of columns to work.]
-- SELECT * FROM income
-- 	UNION 
	-- SELECT * FROM expenses;

-- DROP TABLE income;
-- DROP TABLE expenses;

-- [Will work if both modifed tables have unique ]
-- SELECT first_name, last_name FROM employees
-- 	UNION 
-- 		SELECT first_name, last_name FROM customers;

-- INSERT INTO customers
-- 	VALUES (5, "Sheldon", "Plankton");

-- SELECT * FROM customers;

-- SELECT first_name, last_name FROM employees
-- 	UNION ALL
-- 		SELECT first_name, last_name FROM customers;

-- DELETE FROM customers
-- 	WHERE customer_id = 5;
*/

-- [[SELF JOINS]] 
/*
-- [Join another copy of a table to itself]
-- [used to compare rows of the same table] 
-- [helps t display a hierarchy of data]

-- ALTER TABLE customers
-- 	ADD referral_id INT;

-- UPDATE customers
-- 	SET referral_id=1
-- 		WHERE customer_id=2;

-- UPDATE customers
-- 	SET referral_id = 2
-- 		WHERE customer_id = 3;

-- UPDATE customers
-- 	SET referral_id = 2
-- 		WHERE customer_id = 4;

-- SELECT a.customer_id, a.first_name, a.last_name, 
-- 					CONCAT(b.first_name, " ", b.last_name) AS "referred_by"
-- 	FROM customers AS a
-- 		INNER JOIN customers AS b
-- 			ON a.referral_id = b.customer_id;

-- ALTER TABLE employees
-- 	ADD supervisor_id INT;


-- UPDATE employees
-- 	SET supervisor_id = 5
-- 		WHERE employee_id = 2;  -- [Sandy supervises Squidward]
        
-- UPDATE employees
-- 	SET supervisor_id = 5
-- 		WHERE employee_id = 3;

-- UPDATE employees
-- 	SET supervisor_id = 5
-- 		WHERE employee_id = 4;

-- UPDATE employees
-- 	SET supervisor_id = 5
-- 		WHERE employee_id = 6;

-- UPDATE employees
-- 	SET supervisor_id = 1
-- 		WHERE employee_id = 5; -- [Mr. Krabs supervises Sandy]

-- SELECT a.first_name, a.last_name,
-- 		CONCAT(b.first_name, " ", b.last_name) AS "reports to"
-- 	FROM employees AS a
-- 		INNER JOIN employees as b
-- 			ON a.supervisor_id = b.employee_id;

-- [Display all employees who gets reported AND not get reported]
-- SELECT a.first_name, a.last_name,
-- 		CONCAT(b.first_name, " ", b.last_name) AS "reports to"
-- 	FROM employees AS a
-- 		LEFT JOIN employees as b
-- 			ON a.supervisor_id = b.employee_id;

*/

-- [[VIEWS]]
/* 
-- [A virtual table based on the result-set of an SQL statement]
-- [The fields in a view are fields from one or more real tables in the database]
-- [They're not real tables, but can be interacted with as if they are]

-- CREATE VIEW employee_attendance AS
-- 	SELECT first_name, last_name
-- 		FROM employees;

-- SELECT * FROM employee_attendance
-- 	ORDER BY last_name ASC;	

-- DROP VIEW employee_attendance;

-- ALTER TABLE customers
-- 	ADD COLUMN email VARCHAR(50);

-- UPDATE customers
-- 	SET email = "FFish@gmail.com" 
-- 		WHERE customer_id = 1;

-- UPDATE customers
-- 	SET email = "LLobster@gmail.com" 
-- 		WHERE customer_id = 2;

-- UPDATE customers
-- 	SET email = "BBass@gmail.com" 
-- 		WHERE customer_id = 3;

-- UPDATE customers
-- 	SET email = "PPuff@gmail.com" 
-- 		WHERE customer_id = 4;

-- CREATE VIEW customer_emails AS 
-- 	SELECT email
-- 		FROM customers;

-- SELECT * FROM customer_emails;

-- INSERT INTO customers
-- 	VALUES (5, "Pearl", "Krabs", NULL, "PKrabs@gmail.com");

-- SELECT * FROM customer_emails;

-- SELECT * FROM customers;
*/

-- [[INDEXES]]
/*
-- [INDEX (BTree data structure)]
-- [Indexes are used to find values within a specific column more quickly]
-- [MySQL normally searchrs sequentially through a column] 
-- [The longer the column, the more expesnive the operation is] 
-- [Using INDEX, UPDATE takes more time, SELECT takes less time]

-- SELECT * FROM customers;

-- SHOW INDEXES FROM customers;

-- [Create a singe column index]
-- CREATE INDEX last_name_idx
-- 	ON customers(last_name);

-- SELECT * FROM customers
-- 	WHERE last_name = "Puff";

-- [To create a multi-column index] 
-- CREATE INDEX last_name_first_name_idx
-- 	ON customers(last_name, first_name);

-- SHOW INDEXES FROM customers;

-- ALTER TABLE customers
-- 	DROP INDEX last_name_idx;
--     
-- SHOW INDEX FROM customers;

SELECT * FROM customers
	WHERE last_name = "Puff" AND first_name = "Poppy";
    
*/
   
-- [[SUBQUERIES]]   
/*
-- [A query within another query] 
-- [query(subquery)] 

-- SELECT * FROM employees;

-- SELECT first_name, last_name, hourly_pay,
-- 	(SELECT AVG(hourly_pay) FROM employees) AS avg_pay
-- 		FROM employees;

-- SELECT first_name, last_name, hourly_pay
-- 	FROM employees
-- 		WHERE hourly_pay > (SELECT AVG(hourly_pay) FROM employees);  -- ["(SELECT AVG(hourly_pay) FROM employees)" returned 15.45]  
     
-- SELECT first_name, last_name
-- 	FROM customers
-- 		WHERE customer_id IN	
-- 			(SELECT DISTINCT customer_id
-- 				FROM transactions
-- 					WHERE customer_id IS NOT NULL);
*/

-- [[GROUP BY]]
/*
-- [Aggregate all rows by a specfic column.] 
-- [Often used with aggregate functions. EX: SUM(), MAX(), MIN(), AVG(), COUNT()]

-- ALTER TABLE transactions
-- 	ADD order_date DATE
-- 		AFTER customer_id;

-- UPDATE transactions
-- 	SET order_date = "2023-01-03"
-- 		WHERE transaction_id = 1004;

-- INSERT INTO transactions (amount, customer_id, order_date)
-- 	VALUES (2.49, 4, "2023-01-03"), 
-- 		   (5.48, NULL, "2023-01-03");

-- SELECT * FROM transactions;      

-- [Displaying the total amount of money for each day]
-- SELECT SUM(amount), order_date
-- 	FROM transactions
-- 		GROUP BY order_date;

-- SELECT MAX(amount), order_date
-- 	FROM transactions
-- 		GROUP BY order_date;

-- SELECT COUNT(amount), order_date
-- 	FROM transactions
-- 		GROUP BY order_date;

-- SELECT SUM(amount), customer_id
-- 	FROM transactions
-- 		GROUP BY customer_id;

-- SELECT MAX(amount), customer_id
-- 	FROM transactions
-- 		GROUP BY customer_id;

-- [Using a HAVING clause (its like the WHERE clause)]
-- SELECT COUNT(amount), customer_id
-- 	FROM transactions
-- 		GROUP BY customer_id
-- 			HAVING COUNT(amount) > 1 && customer_id IS NOT NULL;


-- SELECT * FROM transactions;
*/

-- [[ROLLUP]]
/*
-- [ROLLUP, extension of the GROUP BY clause]
-- [Produces another rows and shows the GRAND TOTAL (super-aggregate value)]

-- SELECT SUM(amount), order_date
-- 	FROM transactions
-- 		GROUP BY order_date WITH ROLLUP;

-- SELECT COUNT(transaction_id) AS "# of orders", customer_id
-- 	FROM transactions
-- 		GROUP BY customer_id WITH ROLLUP;

-- SELECT * FROM transactions;

--  SELECT * FROM employees; 
  
-- SELECT SUM(hourly_pay) AS "hourly pay", employee_id
-- 	FROM employees
-- 		GROUP BY employee_id WITH ROLLUP;
*/

-- [[ON DELETE]] 
/*
-- [ON DELETE SET NULL = When a FK (Foreign Key) is deleted, replace FK with NULL] 
-- [ON DELETE CASCADE = When a FK is deleted, delete row]

--  DELETE FROM cusomters
-- 	WHERE customer_id = 4; -- [Cannot do this with this foreign key constraint]
 
 -- [Using ON DELETE SET NULL on a new table] [Already created this]
--  CREATE TABLE transactions 
--  (
-- 	transaction_id INT PRIMARY KEY;
--     amount DECIMAL (5,2),
--     customer_id INT,
--     order_date DATE,
--     FOREIGN KEY (cutomer_id) REFERENCES customers(customer_id)
-- 		ON DELETE SET NULL
--  );

-- ALTER TABLE transaction 
-- 	DROP FOREIGN KEY fk_customer_id; 

-- ALTER TABLE transactions 
-- 	ADD CONSTRAINT fk_customer_id
-- 		FOREIGN KEY(customer_id) REFERENCES customers(customer_id) 
-- 			ON DELETE SET NULL;

-- DELETE FROM customers
-- 	WHERE customer_id = 4;

-- ALTER TABLE transactions
-- 	DROP FOREIGN KEY fk_customer_id;

-- ALTER TABLE transactions
-- 	ADD CONSTRAINT fk_transactions_id
-- 		FOREIGN KEY (customer_id) REFERENCES customers(customer_id)
-- 			ON DELETE CASCADE;

-- UPDATE transactions
-- 	SET customer_id = 4
-- 		WHERE transaction_id = 1005;

-- DELETE FROM customers
-- 	WHERE customer_id = 4;

-- SELECT * FROM transactions;
*/

-- [[STORED PROCEDURES]]
/* 
-- [Stored procedures = is prepared SQL code that you can save]
-- [Great if there's a query that you write often] 
-- [Reduces network traffic]
-- [Increases performance] 
-- [Secure, admin can grant permission to use]
-- [Downside: Increases memeory usage of every connection]

-- SELECT DISTINCT first_name, last_name
-- 	FROM transactions INNER JOIN customers 
-- 		ON transactions.customer_id = customers.customer_id;


-- DELIMITER $$  -- [changes deliminter from ";" to "$$"]
-- CREATE PROCEDURE get_customers()
-- BEGIN
-- 	SELECT * FROM customers;
-- END $$
-- DELIMITER ;  -- [Change deliminter back to ";"]

-- CALL get_customers();

-- DROP PROCEDURE get_customers;


-- DELIMITER $$
-- CREATE PROCEDURE find_customer(IN id INT)
-- BEGIN
-- 	SELECT *
-- 		FROM customers
-- 			WHERE customer_id = id;
-- END $$
-- DELIMITER ;

-- CALL find_customer(4);

-- DROP PROCEDURE find_customer;

-- DELIMITER $$
-- CREATE PROCEDURE find_customer(IN f_name VARCHAR(50), IN l_name VARCHAR(50)) -- [Name of the paramerts CANNOT be the same as the columns you are going to use]
-- BEGIN
-- 	SELECT *
-- 		FROM customers
-- 			WHERE first_name = f_name AND last_name = l_name;
-- END $$
-- DELIMITER ;
-- CALL find_customer("Larry", "Lobster");
*/

-- [[TRIGGERS]]
/*
-- [Trigger = When an event happens, do something]
-- [ex. (INSERT, UPDATE, DELETE)]
-- [benefits = Checks data, handles errors, auditing tables] 

-- ALTER TABLE employees
-- 	ADD COLUMN salary DECIMAL(10,2) 
-- 		AFTER hourly_pay;

-- UPDATE employees
-- 	SET salary = hourly_pay * 2080;

-- CREATE TRIGGER before_hourly_pay_update
-- 	BEFORE UPDATE ON employees
-- 		FOR EACH ROW
-- 			SET NEW.salary = (NEW.hourly_pay) * 2080; -- [Tells MySQL to use the new salary after the calculation]
            
-- SHOW TRIGGERS;

-- UPDATE employees
-- 	SET hourly_pay = 50
-- 		WHERE employee_id =1;
-- SELECT * FROM employees;

-- UPDATE employees
-- 	SET hourly_pay = hourly_pay + 1;

-- SELECT * FROM employees;

-- DELETE FROM employees
-- 	WHERE employee_id = 6;

-- SELECT * FROM employees;

-- CREATE TRIGGER before_hourly_pay_insert 
-- 	BEFORE INSERT ON employees
-- 		FOR EACH ROW
-- 			SET NEW.salary = (NEW.hourly_pay) * 2080;

-- INSERT INTO employees
-- 	VALUES (6, "Sheldon", "Plankton", 10, NULL, "janitor", "2023-01-07", 5); -- [Because of the "before_hourly_pay_insert" trigger, the NULL is filled with the calculated salary]

-- CREATE TABLE expenses
-- (
-- 	expense_id INT PRIMARY KEY, 
--     expense_name VARCHAR(50),
--     expense_total DECIMAL(10,2)
-- );

-- INSERT INTO expenses
-- 	VALUES (1, "salaries", 0),
-- 		   (2, "supplies", 0),
--            (3, "taxes", 0);
         
--  UPDATE EXPENSES 
-- 	SET expense_total = (SELECT SUM(salary) FROM employees)
-- 		WHERE expense_name = "salaries";

-- CREATE TRIGGER after_salary_delete
-- 	AFTER DELETE ON employees
-- 		FOR EACH ROW
-- 			UPDATE expenses
-- 				SET expense_total = expense_total - OLD.salary
-- 					WHERE expense_name = "salaries";


-- DELETE FROM employees
-- 	WHERE employee_id = 6;

-- CREATE TRIGGER after_salary_insert
-- 	AFTER INSERT ON employees
-- 		FOR EACH ROW
-- 			UPDATE expenses
-- 				SET expense_total = expense_total + NEW.salary
-- 					WHERE expense_name = "salaries";

-- INSERT INTO employees
-- 	VALUES (6, "Sheldon", "Plankton", 10, NULL, "janitor", "2023-01-07", 5);

-- CREATE TRIGGER after_salary_update
-- 	AFTER UPDATE ON employees
-- 		FOR EACH ROW
-- 			UPDATE expenses
-- 				SET expense_total = expense_total + (NEW.salary - OLD.salary)
-- 					WHERE expense_name = "salaries";

-- UPDATE employees
-- 	SET hourly_pay = 100
-- 		WHERE employee_id = 1;
         
SELECT * FROM expenses;
*/

