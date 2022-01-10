--INSERT INTO Player (P_NAME ,P_POSSITION ,P_AGE ,P_SEX ,P_WEIGHT ,P_HEIGHT ,P_Nationality ,P_RATING ,P_M_issue)
--VALUES 
--		('Lionel Messi','RWF',33,'MALE',72,170,'Argentina',96,'Good'),
--		('Ansu Fati','LWF',18,'MALE',66,178,'Spain',82,'Good'),
--		('Frenkie de Jong','CMF',23,'MALE',74,180,'Netherlands',85,'Injuried'),
--		('Sergi Roberto','RB',29,'MALE',68,178,'Spain',83,'Good'),
--		('Antoine Griezmann','ST',29,'MALE',73,176,'France',87,'Good'),
--		('Ronald Araujo','CB',21,'MALE',79,188,'Uruguay',69,'Good'),
--		('Jordi Alba','LB',31,'MALE',68,170,'Spain',86,'Injuried'),
--		('Ousmane Dembélé','LM',23,'MALE',67,178,'France',83,'Good'),
--		('Gerard Piqué','CB',34,'MALE',85,194,'Spain',86,'Good'),
--		('Sergio Busquets','CDM',32,'MALE',76,189,'Spain',87,'Good'),
--		('Philippe Coutinho','CAM',28,'MALE',68,172,'Brazil',83,'Good'),
--		('Marc-André ter Stegen','GK',28,'MALE',85,187,'Germany',90,'Good'),
--		('Pedri','CAM',16,'MALE',60,174,'Spain',72,'Good'),
--		('Junior Firpo','LB',24,'MALE',78,184,'Spain',79,'Good'),
--		('Óscar Mingueza','RM',18,'MALE',68,180,'Spain',62,'Good'),
--		('Samuel Umtiti','CB',27,'MALE',75,182,'France',83,'Good'),
--		('Sergiño Dest','RM',20,'MALE',62,175,'USA',75,'Good'),
--		('Clément Lenglet','RM',25,'MALE',81,186,'France',85,'Good'),
--		('Neto','GK',31,'MALE',84,190,'Brazil',82,'Good'),
--		('Miralem Pjanic','DMF',30,'MALE',72,178,'Bosnia-Herzegovina',85,'Good')


--INSERT INTO Coach(C_NAME,C_FORMATION,C_AGE,C_SEX,C_RATING,C_M_issue)
--VALUES	
--		('Jurgen Klopp','4-3-1-2',53,'MALE',92,'Good'),
--		('Marcelo Bielsa','4-1-4-1',65,'MALE',88,'Good'),
--		('Hans-Dieter Flick','4-2-3-1',55,'MALE',87,'Good'),
--		('Julen Lopetegui','4-3-3',54,'MALE',83,'Good'),
--		('Zinedine Zidane','3-4-1-2',48,'MALE',90,'Good'),
--		('D. DESCHAMPS','4-2-2-2',52,'MALE',89,'Good'),
--		('J. LÖW','4-2-1-3',61,'MALE',87,'Good'),
--		('FERNANDO SANTOS','4-3-3',66,'MALE',85,'Good'),
--		('R. KOEMAN','4-2-3-1',57,'MALE',83,'Good'),
--		('G. SOUTHGATE','4-3-3',50,'MALE',83,'Good')



--INSERT INTO Staff(S_NAME,S_TYPE,S_AGE,S_SEX,S_M_issue)
--VALUES ('Ramón Planes','Sporting Director', 53 ,'MALE','Good'),
--		('Òscar Grau','Chief Executive Officer',56,'MALE','Good'),
--		('Jordi Cardoner','Vice-President',58,'MALE','Good'),
--		('Guillermo Amor','Managing Director Sport and Communications',53,'MALE','Good'),
--		('Pep Boada','Head of Scouting',59,'MALE','Good'),
--		('Urbano','Scout',59,'MALE','Good'),
--		('Ricard Pruna','Club Doctor',56,'MALE','Good'),
--		('David Dias Couel','Physiotherapist',47,'MALE','Good'),
--		('Patrick Kluivert','Academy Manager',44,'MALE','Good')

--INSERT INTO Tournament
--VALUES  
--		('2020-11-26','La Liga','Home','Training ground','Draw'),
--	    ('2020-11-30','Champions League','Home','Camp nou','Win'),
--		('2020-12-07','La Liga','Away','Estadio de Ipurua','Win'),
--		('2020-12-10','La Liga','Home','Camp nou','Win'),
--		('2020-12-15','Champions League','Away','Wanda Metropolitano','Loss'),
--		('2020-12-18','La Liga','Home','Camp nou','Win'),
--		('2020-12-20','La Liga','Away','Estadio San Mames','Win'),
--		('2020-12-22','La Liga','Away','Coliseum Alfonso Perez','Draw'),
--		('2021-01-02','La Liga','Home','Camp nou','Win'),
--		('2021-01-08','La Liga','Away','Santiago Bernabéu','Loss'),
--		('2021-01-12','La Liga','Home','Camp nou','Win'),
--		('2021-01-16','Champions League','Away','Allianz Stadium','Win'),
--		('2021-01-19','La Liga','Home','Training ground','Draw'),
--		('2021-01-21','La Liga','Home','Camp nou','win'),
--		('2021-01-24','Champions League','Home','Camp nou','Loss')


--INSERT INTO [La Liga]
--VALUES	    
--		('2020-11-26','Celta Vigo',4,2,1),	  
--		('2020-12-07','Eibar',6,2,1),
--		('2020-12-10','Huesca',7,2,1),
--		('2020-12-18','Alaves',8,2,1),
--		('2020-12-20','Athletic Club',9,2,1),
--		('2020-12-22','Getafe',9,2,2),
--		('2021-01-02','Granada',10,2,2),
--		('2021-01-08','Real Madrid',10,3,2),
--		('2021-01-12','Real Betis',11,3,2),
--		('2021-01-19','Sevilla',11,3,3),
--		('2021-01-21','Athletic Club',12,3,3)


--INSERT INTO [Champions league]
--VALUES
--	    ('2020-11-30','Atletico de Madrid', 1 , 0 , 0),		
--		('2020-12-15','Atletico de Madrid', 1 , 1 , 0),
--		('2021-01-16','Juventus',2 , 1 , 0),
--		('2021-01-24','Juventus',2 , 2 , 0)

--INSERT INTO [Admin Panel] VALUES
--('Mahin',170204006)