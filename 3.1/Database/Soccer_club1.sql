USE SOCCER_CLUB
CREATE TABLE Player(
	P_ID INT IDENTITY(1,1) PRIMARY KEY,
	P_NAME VARCHAR(50) NOT NULL,
	P_POSSITION VARCHAR(50) NOT NULL,
	P_AGE INT  NOT NULL ,
	P_SEX VARCHAR(50) NOT NULL,
	P_WEIGHT INT  NOT NULL,
	P_HEIGHT INT  NOT NULL,
	P_Nationality VARCHAR(80)  NOT NULL,
	P_RATING INT NOT NULL,
	P_M_issue VARCHAR(50)  NOT NULL 
)



INSERT INTO Player (P_NAME ,P_POSSITION ,P_AGE ,P_SEX ,P_WEIGHT ,P_HEIGHT ,P_Nationality ,P_RATING ,P_M_issue)
VALUES ('Lionel Messi','RWF',33,'MALE',72,170,'Argentina',96,'Good'),
		('Ansu Fati','LWF',18,'MALE',66,178,'Spain',82,'Good'),
		('Frenkie de Jong','CMF',23,'MALE',74,180,'Netherlands',85,'Injuried'),
		('Sergi Roberto','RB',29,'MALE',68,178,'Spain',83,'Good'),
		('Antoine Griezmann','ST',29,'MALE',73,176,'France',87,'Good'),
		('Ronald Araujo','CB',21,'MALE',79,188,'Uruguay',69,'Good'),
		('Jordi Alba','LB',31,'MALE',68,170,'Spain',86,'Injuried'),
		('Ousmane Dembélé','LM',23,'MALE',67,178,'France',83,'Good'),
		('Gerard Piqué','CB',34,'MALE',85,194,'Spain',86,'Good'),
		('Sergio Busquets','CDM',32,'MALE',76,189,'Spain',87,'Good'),
		('Philippe Coutinho','CAM',28,'MALE',68,172,'Brazil',83,'Good'),
		('Marc-André ter Stegen','GK',28,'MALE',85,187,'Germany',90,'Good'),
		('Pedri','CAM',16,'MALE',60,174,'Spain',72,'Good'),
		('Junior Firpo','LB',24,'MALE',78,184,'Spain',79,'Good'),
		('Óscar Mingueza','RM',18,'MALE',68,180,'Spain',62,'Good'),
		('Samuel Umtiti','CB',27,'MALE',75,182,'France',83,'Good'),
		('Sergiño Dest','RM',20,'MALE',62,175,'USA',75,'Good'),
		('Clément Lenglet','RM',25,'MALE',81,186,'France',85,'Good'),
		('Neto','GK',31,'MALE',84,190,'Brazil',82,'Good'),
		('Miralem Pjanic','DMF',30,'MALE',72,178,'Bosnia-Herzegovina',85,'Good')


SELECT * FROM Player

CREATE TABLE Coach(
	C_ID INT IDENTITY(1,1) PRIMARY KEY,
	C_NAME VARCHAR(50) NOT NULL,
	C_FORMATION VARCHAR(80)  NOT NULL,
	C_AGE INT  NOT NULL,
	C_SEX VARCHAR(50) NOT NULL,
	C_RATING INT NOT NULL,
	C_M_issue VARCHAR(50)  NOT NULL
)

INSERT INTO Coach(C_NAME,C_FORMATION,C_AGE,C_SEX,C_RATING,C_M_issue)
VALUES ('Jurgen Klopp','4-3-1-2',53,'MALE',92,'Good'),
		('Marcelo Bielsa','4-1-4-1',65,'MALE',88,'Good'),
		('Hans-Dieter Flick','4-2-3-1',55,'MALE',87,'Good'),
		('Julen Lopetegui','4-3-3',54,'MALE',83,'Good'),
		('Zinedine Zidane','3-4-1-2',48,'MALE',90,'Good'),
		('D. DESCHAMPS','4-2-2-2',52,'MALE',89,'Good'),
		('J. LÖW','4-2-1-3',61,'MALE',87,'Good'),
		('FERNANDO SANTOS','4-3-3',66,'MALE',85,'Good'),
		('R. KOEMAN','4-2-3-1',57,'MALE',83,'Good'),
		('G. SOUTHGATE','4-3-3',50,'MALE',83,'Good')

  SELECT* FROM Coach


  CREATE TABLE Staff(
	S_ID INT IDENTITY(1,1) PRIMARY KEY,
	S_NAME VARCHAR(80) NOT NULL,
	S_TYPE VARCHAR(80) NOT NULL,
	S_AGE INT  NOT NULL,
	S_SEX VARCHAR(50) NOT NULL,
	S_M_issue VARCHAR(50)  NOT NULL
)

INSERT INTO Staff(S_NAME,S_TYPE,S_AGE,S_SEX,S_M_issue)
VALUES ('Ramón Planes','Sporting Director', 53 ,'MALE','Good'),
		('Òscar Grau','Chief Executive Officer',56,'MALE','Good'),
		('Jordi Cardoner','Vice-President',58,'MALE','Good'),
		('Guillermo Amor','Managing Director Sport and Communications',53,'MALE','Good'),
		('Pep Boada','Head of Scouting',59,'MALE','Good'),
		('Urbano','Scout',59,'MALE','Good'),
		('Ricard Pruna','Club Doctor',56,'MALE','Good'),
		('David Dias Couel','Physiotherapist',47,'MALE','Good'),
		('Patrick Kluivert','Academy Manager',44,'MALE','Good')

 SELECT *FROM Staff

 


 