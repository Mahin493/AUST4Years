CREATE TABLE CUSTOMER
(
CustomerId int IDENTITY(1,1) PRIMARY KEY,
LastName varchar(50) NOT NULL,
FirstName varchar(50) NOT NULL,
AreaCode int NULL,
Address varchar(200) NULL,
Phone varchar(11) NULL,
)


CREATE TABLE ORDERDETAILS
(
OrderId int IDENTITY(1,1) PRIMARY KEY,
CustomerId int NOT NULL FOREIGN KEY REFERENCES CUSTOMER (CustomerId),
OrderDate date NULL,
OrderAmount money NULL
) 


CREATE TABLE CUSTOMER
(
CustomerId int IDENTITY(1,1) PRIMARY KEY,
CustomerNumber int NOT NULL UNIQUE  CHECK(CustomerNumber>1000),
LastName varchar(50) NOT NULL,
FirstName varchar(50) NOT NULL,
AreaCode int NULL,
Address varchar(200) NULL  DEFAULT  'Dhaka',
Phone varchar(11) NULL,
)


INSERT INTO CUSTOMER (CustomerNumber,LastName, FirstName, AreaCode, Address, Phone) 
VALUES (1001,'Khan', 'Rahim', 1307, 'Gulshan', '01677515829'),
       (1002,'Rahman', 'Kahim', 1202, 'Dhanmondi', '0i912584949'),
       (1003,'Mehedi', 'Hashim', 1307, 'Gulshan', '01645789544')


INSERT INTO CUSTOMER (CustomerNumber,LastName, FirstName, AreaCode, Address, Phone) 
VALUES (1002,'Sardar', 'Kashim', 1102, 'Uttara', '01612457845')

INSERT INTO CUSTOMER (CustomerNumber,LastName, FirstName, AreaCode, Address, Phone) 
VALUES (-1002,'Sardar', 'Kashim', 1102, 'Uttara', '01612457845')

INSERT INTO CUSTOMER (CustomerNumber,LastName, AreaCode, Address, Phone) 
VALUES (1004,'Sardar', 1102, 'Uttara', '01612457845')

INSERT INTO CUSTOMER (CustomerNumber,LastName, FirstName, AreaCode, Phone) 
VALUES (1004,'Sardar', 'Kashim', 1102, '01612457845')

UPDATE CUSTOMER set AreaCode=46 where CustomerId=2

UPDATE CUSTOMER set AreaCode=46 

DELETE FROM CUSTOMER where CustomerId=2

DELETE FROM CUSTOMER

SELECT * FROM CUSTOMER

SELECT CustomerId,FirstName,LastName FROM CUSTOMER

SELECT FirstName as 'First Name',LastName as 'Last Name' FROM CUSTOMER

SELECT FirstName + ' ' + LastName as 'Customer Name' FROM CUSTOMER

SELECT * FROM CUSTOMER ORDER BY LastName

SELECT * FROM CUSTOMER ORDER BY Address,LastName

SELECT * FROM CUSTOMER ORDER BY LastName desc

SELECT * FROM CUSTOMER WHERE CustomerNumber='1001'

SELECT * FROM CUSTOMER WHERE AreaCode > 1250

SELECT DISTINCT Address FROM CUSTOMER







