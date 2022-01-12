SET SERVEROUTPUT ON;

DECLARE
 NUM INT :=0;

BEGIN
--Printing 1 TO5 USING ALL TYPE OF LOOP IN PL SQL
  While NUM<5
     LOOP
     NUM:=NUM+1;
      DBMS_OUTPUT.PUT_LINE(NUM);
        --NUM:=NUM+1;
        --DBMS_OUTPUT.PUT_LINE(NUM);

        --////IF NUM=5 THEN
          -- EXIT;
        --EXIT when NUM=10;
        --////END IF;
    END LOOP;     


END;
/   
--FOR LOOP
DECLARE 
 NUMB INT :=5;

BEGIN
  FOR i IN 1.. NUMB LOOP
     DBMS_OUTPUT.PUT_LINE(i);
  END LOOP;

END;
/  





