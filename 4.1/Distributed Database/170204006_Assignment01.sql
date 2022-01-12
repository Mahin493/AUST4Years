clear screen;
drop TABLE Student;
drop TABLE Borrows;
drop TABLE Book;
drop TABLE Author;




create table Student(studentID integer,Sname varchar2(50),phone varchar2(100),age integer );
create table Borrows(studentID integer,bookID integer,dateBorrowed date);
create table Book(bookID INTEGER,authorID INTEGER,title varchar2(100), genre varchar2(100),datePublished date);
create table Author(authorID INTEGER,A_name varchar2(50),age integer);



insert into Student values (1,'Mahin','01644305371',21);
insert into Student values (2,'Anamul','01630715344',23);
insert into Student values(3,'Raihan','015678943',20);
insert into Student values (4,'Prince','01767755994',21);
insert into Student values (5,'Mahiat','0176543653',21);
insert into Student values (6,'Emon','0165577092',24);	


insert into Borrows values(1, 3,' 12-SEP-2021');
insert into Borrows values(2, 4,'9-SEP-2021');
insert into Borrows values(3, 1,'12-SEP-2021');
insert into Borrows values(4, 2,'20-SEP-2021');
insert into Borrows values(5, 6,'20-OCT-2021');
insert into Borrows values(6, 5,'26-SEP-2021');

insert into Book values(1, 1,'The Old Man and the Sea','Literary Fiction','01-SEP-1952');
insert into Book values(2, 2,'Gulliver’s Travels','Adventure Fiction','28-DEC-1722');
insert into Book values(3, 3,'Norwegian Wood','Fiction','25-MAR-1987');
insert into Book values(4, 4,'Baraf Gola Nadi','Fiction','22-JAN-1984');
insert into Book values(5, 5,'Agnibeena','Poetry','17-JUL-192');
insert into Book values(6,6, 'Misir Ali Unsolved','Fiction','20-APR-2019');	


insert into Author values(1,'Arnest Hamingway',61);
insert into Author values(2,'Jonathan Swift',77);
insert into Author values(3,'Haruki Murakami',72);
insert into Author values(4,'Zahir Rayhan',36);
insert into Author values(5,'Kazi Nazrul Islam',77);
insert into Author values(6,'Humayun Ahamed',63);



Select Author.A_name,Author.age
from Author
INNER join Book on
Book.authorID=Author.authorID
WHERE Book.title='Gulliver’s Travels';



select Author.A_name
from Author 
inner join Book on
Book.authorID = Author.authorID 
where Book.genre = 'Fiction' And Author.age=(SELECT MIN(Author.age) FROM Author);


Select Author.A_name,Book.datePublished
from Author
INNER join Book on
Book.authorID=Author.authorID
WHERE Book.datePublished= '20-APR-2019';




commit;




















