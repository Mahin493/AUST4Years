--This Assignments will find how many courses a Student has taken.
SET VERIFY OFF;
SET SERVEROUTPUT ON

DECLARE
total_course enrolled.cnum%TYPE:=0;
name student.sname%TYPE;
id student.snum%TYPE;
x int :=&ID;


BEGIN
 IF ((x>0 AND x<9) OR (x>10 AND x<19) OR (x>20 AND x<29)) THEN
  select s.snum,s.sname,count(e.cnum) into id,name,total_course  from student s,enrolled e where e.snum=s.snum and e.snum=x group by s.sname,s.snum;

  DBMS_OUTPUT.PUT_LINE(id || ' ' || name || ' '|| 'has taken' ||' '|| total_course ||' '|| 'course.');
    IF total_course>1 THEN
	 DBMS_OUTPUT.PUT_LINE('That is,the student has taken more than one course.');
	ELSE
	  DBMS_OUTPUT.PUT_LINE('That is,the student has taken only one course.');
	END IF;
 ELSE	
	 DBMS_OUTPUT.PUT_LINE('There is no student having this Id');
 END IF;	 
  


END;
/