CREATE TABLE CUSTOMER
(
CustomerId int IDENTITY(1,1) PRIMARY KEY,
Name varchar(50) NOT NULL,
Age int NOT NULL CHECK (Age >= 18),
Address varchar(200) NULL  DEFAULT  'Dhaka',
Salary decimal(18,2) NULL
)

CREATE TABLE ORDERS
(
OrderId int IDENTITY(1,1) PRIMARY KEY,
CustomerId int NOT NULL FOREIGN KEY REFERENCES CUSTOMER (CustomerId),
Date date NULL,
Amount money NULL
) 

INSERT INTO CUSTOMER (Name, Age, Address, Salary) 
VALUES ('Rahim', 32, 'Gulshan',2000.00),
       ('Karim', 25, 'Dhanmondi',1500.00),
       ('Hashim', 23, 'Mottijheel',2000.00),
       ('Khan', 25, 'Tejgaon',6500.00),
       ('Rahman', 27, 'Wari',8500.00),
       ('Mehedi', 22, 'Mohammadpur',4500.00),
       ('Kashim', 24, 'Kakrail',10000.00),
       ('Kazi', 22, 'Kakrail',1000.00)


SELECT * FROM CUSTOMER 

INSERT INTO ORDERS (CustomerId,Date,Amount)
VALUES (2,'02-15-2008',1230),
       (4,'11-25-2007',240),
       (3,'04-05-2013',1150),
       (2,'11-30-2007',14300),
       (5,'03-23-2012',30),
       (7,'02-15-2008',260),
       (5,'05-19-2013',1580),
       (3,'10-22-2012',458),
       (2,'03-27-2009',700)

SELECT * FROM ORDERS

SELECT CustomerId , Name, Age, Amount
FROM CUSTOMER, ORDERS
WHERE CUSTOMER.CustomerId = ORDERS.CustomerId


SELECT CUSTOMER.CustomerId , Name, Age, Amount
FROM CUSTOMER, ORDERS
WHERE CUSTOMER.CustomerId = ORDERS.CustomerId

SELECT C.CustomerId , Name, Age, O.Amount
FROM CUSTOMER C, ORDERS O
WHERE C.CustomerId = O.CustomerId

SELECT CUSTOMER.CustomerId , Name, Age, Amount,Date
FROM CUSTOMER 
INNER JOIN ORDERS
ON CUSTOMER.CustomerId = ORDERS.CustomerId

SELECT CUSTOMER.CustomerId , Name, Age, Amount,Date
FROM CUSTOMER 
LEFT JOIN ORDERS
ON CUSTOMER.CustomerId = ORDERS.CustomerId

SELECT CUSTOMER.CustomerId , Name, Age, Amount,Date
FROM CUSTOMER 
RIGHT JOIN ORDERS
ON CUSTOMER.CustomerId = ORDERS.CustomerId


SELECT *
FROM CUSTOMER 
WHERE CustomerId = (SELECT CustomerId 
FROM CUSTOMER 
WHERE Salary > 4500)

SELECT *
FROM CUSTOMER 
WHERE CustomerId IN (SELECT CustomerId 
FROM CUSTOMER 
WHERE Salary> 4500)


SELECT *
FROM CUSTOMER 
WHERE CustomerId IN (SELECT CustomerId 
FROM ORDERS 
WHERE Amount > 500)

INSERT INTO CUSTOMER_BKP
SELECT * FROM CUSTOMER 
WHERE CustomerId IN (SELECT CustomerId 
FROM CUSTOMER)

INSERT INTO CUSTOMER_BKP
SELECT Name,Age,Address,Salary FROM CUSTOMER 
WHERE CustomerId IN (SELECT CustomerId 
FROM CUSTOMER)

UPDATE CUSTOMER
SET SALARY = SALARY * 0.25
WHERE AGE IN (SELECT AGE FROM CUSTOMER_BKP
WHERE AGE >= 27 )


SELECT Name,Age
FROM CUSTOMER 
WHERE Salary >
(SELECT AVG(Salary) + 1000 
FROM CUSTOMER )


