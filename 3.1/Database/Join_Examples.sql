--create database lecture_join
--use lecture_join

create table Country
(
	countryId int identity(1,1) primary key,
	countryName varchar(50)

)


create table City
(
	cityId int identity(1,1) primary key,
	cityName varchar(50),
	countryId int foreign key references Country(countryId) 

)

insert into Country(countryName) values ('Bangladesh'),('India'),('China')

insert into City(CityName, CountryId) values('Delhi',2), ('Dhaka',1)
insert into City(CityName) values('Bangkok')


select * from Country
select * from City


--Full Join
select * from 
Country full join City
on Country.countryId = City.countryId



select * from Country
select * from City


--Left Join
select * from Country left join City
on Country.countryId = City.countryId



select * from Country
select * from City

--Right Join
select * from Country right join City
on Country.countryId = City.countryId


select * from Country
select * from City

--Inner Join
select * from Country inner join City
on Country.countryId = City.countryId




create table employee
(
	empId int primary key,
	empName varchar(50),
	salary int,
	managerId int

)



insert into employee(empId,empName,salary, managerId) values (1,'Rahim',20000, 5),(3,'Tanvir',30000,5),(4,'Bijoy',25000,2)
insert into employee(empId,empName,salary) values (2,'Karim',50000),(5,'Naim',60000)

select * from employee

select E1.empName as 'Employee Name', E2.empName as 'Manager Name' 
from employee E1 inner join employee E2
on E1.managerId = E2.empId


create table JobGrade
(
	lowest_val int,
	highest_val int,
	grade varchar(5)

)

insert into JobGrade (lowest_val,highest_val,grade) values (50000,100000, 'A'), (30000,45000,'B'), (10000,25000,'C')

select * from employee

select E.empName, J.grade
from employee E inner join JobGrade J
on (E.salary between J.lowest_val and J.highest_val)


