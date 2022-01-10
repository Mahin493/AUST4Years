select *
from Employeedata

select distinct (Gender)
from Employeedata

select Gender,Age ,count(Gender)
from Employeedata
where Age>22
group by Gender,Age

select Gender,Age,count(Gender) as Countgender
from Employeedata
where Age>22
group by Gender,Age
order by Countgender desc

select *
from Employeedata
order by Age ,Gender
