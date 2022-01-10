--CREATE TABLE "Admin Panel"
--(
--	"User_Name" varchar(20) not null,
--	"Password" int not null,
--)


--CREATE TABLE Tournament
--(
--	Match_Date date primary key,
--	Match_Type varchar(50) not null,
--	Match_Area varchar(10) not null,
--	Stadium varchar(100) not null,
--	Result varchar(20) not null
--)

--CREATE TABLE "La Liga"
--(
--	Match_Day int identity (1,1) primary key,
--	Match_Date date not null foreign key references Tournament(Match_Date),
--	Match_Opponent varchar(100) not null,
--	Win int not null,
--	Loss int not null,
--	Draw int not null
--)

--CREATE TABLE "Champions league"
--(
--	Match_Day int identity (1,1) primary key,
--	Match_Date date not null foreign key references Tournament(Match_Date),
--	Match_Opponent varchar(100) not null,
--	Win int not null,
--	Loss int not null,
--	Draw int not null
--)

--CREATE TABLE Media
--(
--	Media_Id int identity (1,1) primary key,
--	Media_Type varchar(100) not null,
--	Con_Year int not null,
--	Revenue money not null
--)

--CREATE TABLE "Ground & Gym"
--(
--	G_No int identity (1,1) primary key,
--	G_Name varchar(100) not null,
--	G_Type varchar(50) not null,
--	G_Capacity int not null,
--	G_Condition varchar(100) not null
--)

--CREATE TABLE Player
--(
--	P_ID INT IDENTITY(1,1) PRIMARY KEY,
--	P_NAME VARCHAR(50) NOT NULL,
--	P_POSSITION VARCHAR(50) NOT NULL,
--	P_AGE INT  NOT NULL ,
--	P_SEX VARCHAR(50) NOT NULL,
--	P_WEIGHT INT  NOT NULL,
--	P_HEIGHT INT  NOT NULL,
--	P_Nationality VARCHAR(80)  NOT NULL,
--	P_RATING INT NOT NULL,
--	P_M_issue VARCHAR(50)  NOT NULL 
--)

--CREATE TABLE Coach
--(
--	C_ID INT IDENTITY(1,1) PRIMARY KEY,
--	C_NAME VARCHAR(50) NOT NULL,
--	C_FORMATION VARCHAR(80)  NOT NULL,
--	C_AGE INT  NOT NULL,
--	C_SEX VARCHAR(50) NOT NULL,
--	C_RATING INT NOT NULL,
--	C_M_issue VARCHAR(50)  NOT NULL
--)

--CREATE TABLE Staff
--(
--	S_ID INT IDENTITY(1,1) PRIMARY KEY,
--	S_NAME VARCHAR(80) NOT NULL,
--	S_TYPE VARCHAR(80) NOT NULL,
--	S_AGE INT  NOT NULL,
--	S_SEX VARCHAR(50) NOT NULL,
--	S_M_issue VARCHAR(50)  NOT NULL
--)

--CREATE TABLE "Player Salary"
--(
--	P_PAY_ID INT IDENTITY(1,1) PRIMARY KEY, 
--	P_ID INT NOT NULL FOREIGN KEY REFERENCES Player(P_ID),
--	P_salary money  NOT NULL,
--	P_contract INT  NOT NULL,
--	P_bonus  money NOT NULL
--)

--CREATE TABLE "Coach Salary"
--(
--	C_PAY_ID INT IDENTITY(1,1) PRIMARY KEY, 
--	C_ID INT NOT NULL FOREIGN KEY REFERENCES Coach(C_ID),
--	C_salary money  NOT NULL,
--	C_contract INT NOT NULL,
--	C_bonus money NOT NULL
--)

--CREATE TABLE "Staff Salary"
--(
--	S_PAY_ID INT IDENTITY(1,1) PRIMARY KEY, 
--	S_ID INT NOT NULL FOREIGN KEY REFERENCES Staff (S_ID),
--	S_salary money NOT NULL,
--	S_contract INT NOT NULL,
--	S_bonus money NOT NULL
--)

--CREATE TABLE "Transfer Buy"
--(
--	BUY_ID INT IDENTITY(1,1) PRIMARY KEY,
--	NP_NAME VARCHAR(50)  NOT NULL,
--	Con_type VARCHAR(50)  NOT NULL,
--	Year INT  NOT NULL,
--	Salary MONEY  NOT NULL,
--	Fee MONEY  NOT NULL
--)

--CREATE TABLE "Transfer Sell"
--(
--	Sell_ID INT IDENTITY(1,1) PRIMARY KEY,
--	P_ID INT NOT NULL FOREIGN KEY REFERENCES Player(P_ID),
--	P_NAME VARCHAR(50) NOT NULL,
--	CON_TYPE VARCHAR(50) NOT NULL,
--	FEE MONEY NOT NULL
--)


--CREATE TABLE "Coach Medical Status"
--(
--	C_MED_ID INT IDENTITY(1,1) PRIMARY KEY,
--	M_ISSUE VARCHAR(50) NOT NULL,
--	C_ID INT NOT NULL FOREIGN KEY REFERENCES Coach(C_ID),
--	C_NAME VARCHAR(50) NOT NULL,
--	LEAVE INT not null,
--)

--CREATE TABLE "Player Medical Status"
--(
--	P_MED_ID INT IDENTITY(1,1) PRIMARY KEY,
--	M_ISSUE VARCHAR(50) NOT NULL,
--	P_ID INT NOT NULL FOREIGN KEY REFERENCES Player (P_ID),
--	P_NAME VARCHAR(50) NOT NULL ,
--	LEAVE INT not null,
--)

--CREATE TABLE "Staff Medical Status"
--(
--	S_MED_ID INT IDENTITY(1,1) PRIMARY KEY,
--	M_ISSUE VARCHAR(50) NOT NULL,
--	S_ID INT NOT NULL FOREIGN KEY REFERENCES STAFF(S_ID),
--	S_NAME VARCHAR(80) NOT NULL,
--	LEAVE INT not null,
--)