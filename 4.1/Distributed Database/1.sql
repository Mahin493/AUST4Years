clear screen;
drop table money;
drop table deposit;

create table money(id number, name varchar2(20), taka number);
create table deposit(id number, name varchar2(20), taka number);

insert into money values(1,'Alam',100);
insert into money values(2,'Baki',110);
insert into money values(3,'Ceri',120);
insert into money values(4,'Dipto',130);

insert into deposit values(1,'Elias',140);
insert into deposit values(2,'Farabi',150);
insert into deposit values(3,'Gias',160);
insert into deposit values(4,'Hanif',170);

commit;

select * from money;
select * from deposit;


