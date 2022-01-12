SET SERVEROUTPUT ON;

DECLARE
 NUM money.taka%TYPE;

 BEGIN

   SELECT taka into NUM from money where id=1;
    IF MOD(NUM,3)=0 THEN
        DBMS_OUTPUT.PUT_LINE('Remainder is zero');
    
    ELSIF MOD(NUM,3)=1 THEN
       DBMS_OUTPUT.PUT_LINE('Remainder is One');

    else
        DBMS_OUTPUT.PUT_LINE('Remainder is Two');

    END IF;
 END;
 /   



 

