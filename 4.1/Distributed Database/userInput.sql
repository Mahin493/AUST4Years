SET VERIFY OFF;
SET SERVEROUTPUT ON;

DECLARE
 A INT:=&x;
 B INT:=&y;
BEGIN
  DBMS_OUTPUT.PUT_LINE(A+B);

END;
/

DECLARE
  A varchar2(12):='&Enter_Name';
  B varchar2(12):='&Enter_University';

  BEGIN
     DBMS_OUTPUT.PUT_LINE(A || ' ' || B);

 END;
 / 