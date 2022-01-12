SET SERVEROUTPUT ON;
DECLARE
  NUM money.taka%TYPE;

 BEGIN
   select taka into NUM from money where id=1;

   case
       --CASE MOD(NUM.3)
       --WHEN 0 THEN
       --PUT_LINE('zERO')
       when MOD(NUM,3)=0 THEN
           DBMS_OUTPUT.PUT_LINE('ZERO');

       WHEN MOD(NUM,3)=1 THEN
           DBMS_OUTPUT.PUT_LINE('One');

       else
           DBMS_OUTPUT.PUT_LINE('Two');

    END case;

 END;
 /      
