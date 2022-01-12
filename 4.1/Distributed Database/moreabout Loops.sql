SET SERVEROUTPUT ON;

DECLARE
NUM money.id%TYPE:=0;

BEGIN

   SELECT COUNT(id) into NUM from money;

  FOR i IN 1..5 LOOP
       NUM:=NUM+1;
       insert into money values(NUM,'D',300);

 END LOOP;

 END;
 / 

 select * from money;

--PRinting All rows having Even ids from table 
 DECLARE
  Id money.id%TYPE:=0;

BEGIN
   SELECT count(id) into Id from money;

   
   for i in 1..Id LOOP
   IF MOD(i,2)=0 THEN
     DBMS_OUTPUT.PUT_LINE(i);
    --else
       -- DBMS_OUTPUT.PUT_LINE('Remainder is Two');
     END IF;
  -- DBMS_OUTPUT.PUT_LINE(evenId);
   END LOOP;
END;
/   
--select id from money;