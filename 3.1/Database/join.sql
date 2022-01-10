CREATE TABLE Country(

CountryID int identity(1,1) primary key,
CountryName VARCHAR(50),




)

CREATE TABLE CITY(

CityId int identity(1,1) primary key,
CityName varchar(50),
CountryID int foreign key references Country(CountryID)


)

--INSERT INTO Country values
--('Bangladesh'),
--('USA'),
--('UK')

--insert into CITY values
--('Dhaka',1),
--('Florida',2),

--('Birmingham',3)

--INSERT INTO Country values
--('Germany')

--Insert into CITY(CityName) values
--('Munich')



SELECT* FROM Country
SELECT* FROM CITY

----FULL JOIN 
Select *from Country full join CITY
ON Country.CountryID=CITY.CountryID


     