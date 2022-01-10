--create table Coachingstuff
--( Coach_id int,
--Coach_Name varchar(60),
--Coach_Type varchar(50),
--Coach_Age int,
--Coach_Rating int,
--Coach_Salary int,
--Gender varchar(20),
--P_Condition varchar(40),
--Country varchar(70)
--)

--insert into Coachingstuff values

--( 101,'Alex','Head',71,9,360000,'Male','Good','England'),
--( 102,'Sam','Defebsive Line',46,6,4600,'Male','Good','Spain'),
--( 103,'Finn','Offensive Line',42,7,5500,'Male','Enjured','Germany'),
--( 104,'Scot','Secoundary',51,7,36000,'Male','Good','England'),
--( 105,'Miami','Assistant',43,9,76000,'Male','Good','Italy'),
--( 106,'Marselo','Assistant',44,9,67000,'Male','Injured','England'),
--( 107,'Arthar','Physical Fitness ',40,8,4500,'Male','Good','Portugal'),
--( 108,'Marina','Entertainment',23,9,42000,'Female','Good','England')

select * from Coachingstuff

--alter table Coachingstuff 
--add Sex varchar(50)

--alter table Coachingstuff
--drop column city

--alter table Coachingstuff
--drop column Sex
Select Coach_Name,Coach_Age
from Coachingstuff

Select top 5*
from Coachingstuff

select distinct(Gender)
from Coachingstuff

select count(Gender) as totalgendercount
from Coachingstuff

Select max(Coach_Age) as eldest
from Coachingstuff