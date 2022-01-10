--INSERT INTO STUDENT (FirstName,LasttName,Age,Department,Semester) VALUES

--('Mahin','Apu','22','CSE','6'),
--('Raihan','Uddin','23','EEE','3'),
--('Atanu','Saha','23','CSE','6'),
--('Faisal','Ahamed','24','CSE','6'),
--('Anamul','Joy','25','EEE','7'),
--('Rakib','Khan','27','ME','4'),
--('Mustafa','Ahamed','26','CSE','5'),
--('Saldina','Nurak','20','CE','3'),
--('Ema','Stone','28','IT','8')

SELECT StudentID,Department FROM STUDENT

ALTER TABLE STUDENT
Add CGPA INT
SELECT* FROM STUDENT

--INSERT into STUDENT (CGPA)
--(3.5) where StuentID=3

--delete from STUDENT
--where CGPA=3
ALTER TABLE STUDENT
ALTER COLUMN CGPA FLOAT

UPDATE STUDENT
SET CGPA=3.5 WHERE StudentID=1

SELECT FirstName FROM STUDENT
where FirstName like '%h_%'

SELECT Age from STUDENT
WHERE AGE LIKE '_%6'

SELECT *FROM STUDENT
WHERE AGE BETWEEN 21 AND 25


