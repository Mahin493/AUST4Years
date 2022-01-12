SET VERIFY OFF;
SET SERVEROUTPUT ON;


DECLARE
  newname money.name%TYPE:='&Name';
  dbname money.name%TYPE;
  dbname2 deposit.name%TYPE;


  mid money.id%TYPE;
  did deposit.id%TYPE;

  mtaka money.taka%TYPE;
  dtaka money.taka%TYPE;

  totalid money.id%TYPE;

  BEGIN
   select count(id) into totalid from money;

   for i IN 1..totalid LOOP
   select id,name,taka into mid,dbname,mtaka from money where id=i;
   select id,name,taka into did,dbname2,dtaka from deposit where id=i;

  IF dbname=newname THEN
    DBMS_OUTPUT.PUT_LINE('Money Table');
     DBMS_OUTPUT.PUT_LINE(mid);
     DBMS_OUTPUT.PUT_LINE(dbname);
     DBMS_OUTPUT.PUT_LINE(mtaka);

     ELSIF dbname2=newname THEN
      DBMS_OUTPUT.PUT_LINE('Deposit');
       DBMS_OUTPUT.PUT_LINE(did);
       DBMS_OUTPUT.PUT_LINE(dbname2);
       DBMS_OUTPUT.PUT_LINE(dtaka);
    END IF;
    
   END LOOP;


  END;
  /
  