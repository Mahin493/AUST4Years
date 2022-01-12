SET SERVEROUTPUT ON;

DECLARE
  t_name money.name%TYPE; --Anchors
  t_taka money.taka%TYPE:=700;

 BEGIN
 --t_taka:=500;
 --SELECT  name,taka into t_name,t_taka from money where id=1;
 update money SET taka=t_taka where id=1;
 DBMS_OUTPUT.PUT_LINE(t_name);
 DBMS_OUTPUT.PUT_LINE(t_taka);
 END;
 /
 commit;