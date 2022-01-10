CREATE TABLE CUSTOMER
(
CustomerId int IDENTITY(1,1) PRIMARY KEY,
LastName varchar(50) NOT NULL,
FirstName varchar(50) NOT NULL,
AreaCode int NULL,
Address varchar(200) NULL,
Phone varchar(11) NULL,
)


SELECT * FROM CUSTOMER

INSERT INTO CUSTOMER VALUES (1000, 'Rahman', 'Karim', 1203, 'Dhaka','01912584949')
INSERT INTO CUSTOMER VALUES ('Rahman', 'Karim', 1203, 'Dhaka','01912584949')

INSERT INTO CUSTOMER (LastName, FirstName, AreaCode, Address, Phone) 
VALUES ('Khan', 'Rahim', 1307, 'Gulshan', '01677515829')

INSERT INTO CUSTOMER (LastName, FirstName) 
VALUES ('Ahmed', 'Hashim')

ALTER TABLE CUSTOMER
ADD CustomerSince date

ALTER TABLE CUSTOMER
DROP COLUMN CustomerSince

ALTER TABLE CUSTOMER
ALTER COLUMN CustomerSince datetime

INSERT INTO CUSTOMER (LastName, FirstName, AreaCode, Address, Phone, CustomerSince) 
VALUES ('Ema', 'Mahzabeen', 1209, 'Dhanmondi', '01677515829', '1994-05-18') 

INSERT INTO CUSTOMER (LastName, FirstName, AreaCode, Address, Phone, CustomerSince) 
VALUES ('Ema', 'Mahzabeen', 1307, 'Gulshan', '01677515829', '1994-05-18 23:59:59') 