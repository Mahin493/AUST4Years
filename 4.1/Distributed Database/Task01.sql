SET SERVEROUTPUT ON;
BEGIN
    DBMS_OUTPUT.PUT_LINE('Hello World');
END ;
/ 

BEGIN
  NULL;
END;
/  

BEGIN
 insert into money values(4,'D',500); --DML
 END;
/
commit;
DECLARE
 t_name varchar2(20);
 t_taka number;
BEGIN
SELECT  name, taka into t_name,t_taka FROM money where id=1;
DBMS_OUTPUT.PUT_LINE(t_name);
DBMS_OUTPUT.PUT_LINE(t_taka);

END;
/