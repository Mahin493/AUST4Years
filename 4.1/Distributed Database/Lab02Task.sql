SET VERIFY OFF;
SET SERVEROUTPUT ON;

DECLARE
 A money.taka%TYPE;
 B money.taka%TYPE;
 C money.taka%TYPE;
 
  

 BEGIN
   A :=&x;
   B:=&y;
   C:=A+B;
   DBMS_OUTPUT.PUT_LINE(C);
  


  IF (C<170) THEN
       C:=C+10;
    insert into money values(7,'A',C);
     
     ELSIF(C>170 AND C<210) THEN
       C:=C+30;
       insert into money values(7,'B',C) ;

    ELSE
      insert INTO money values(7,'C',C);
   END IF;

END;
/   

select * from money;