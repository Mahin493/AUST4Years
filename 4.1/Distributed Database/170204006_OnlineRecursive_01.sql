clear screen;

SET VERIFY OFF;
SET SERVEROUTPUT ON;
DECLARE
    newname money.name%TYPE := '&NAME';
    dbname money.name%TYPE;
    dbname2 deposit.name%TYPE;

    dbid money.id%TYPE;
    dbmoney money.taka%TYPE;

    
    MAX_ID money.id%TYPE;
    MIN_ID money.id%TYPE;

    dbid2 deposit.id%TYPE;
    dbmoney2 deposit.taka%TYPE;





BEGIN 
    SELECT MAX(id) INTO MAX_ID FROM money ;
    SELECT MIN(id) INTO MIN_ID FROM money ;

    FOR i IN MIN_ID..MAX_ID LOOP
        SELECT name INTO dbname FROM money WHERE id = i ;
        SELECT name INTO dbname2 FROM deposit WHERE id = i ;

        IF dbname = newname THEN
            SELECT id, name, taka INTO dbid, dbname, dbmoney FROM money WHERE id = i ;
            DBMS_OUTPUT.PUT_LINE('Money');
            DBMS_OUTPUT.PUT_LINE(dbid);
            DBMS_OUTPUT.PUT_LINE(dbname);
            DBMS_OUTPUT.PUT_LINE(dbmoney);

        ELSIF dbname2 = newname THEN
            SELECT id, name, taka INTO dbid2, dbname2, dbmoney2 FROM deposit WHERE id = i ;
            DBMS_OUTPUT.PUT_LINE('Deposit');
            DBMS_OUTPUT.PUT_LINE(dbid2);
            DBMS_OUTPUT.PUT_LINE(dbname2);
            DBMS_OUTPUT.PUT_LINE(dbmoney2);
        END IF;
    END LOOP;
END;
/