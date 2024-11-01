SELECT * FROM customer_1.customer;
create table customer (cid int primary key, name varchar(20) not null, mobile_no bigint unique, age int, check (age>21));
describe customer;

alter table customer add column city varchar(20);
describe customer;

alter table customer drop column city;
describe customer;

alter table customer add column city varchar(20) after name;
describe customer;

alter table customer modify city varchar(10);
describe customer;

create table payment(pay_id int primary key, cid int, foreign key(cid) references customer(cid), withdraw_amount int not null, mode varchar(10), dt_payment datetime);
describe payment;

drop table payment;

create table payment(pay_id int primary key, cid int, foreign key(cid) references customer(cid), withdraw_amount int not null, mode varchar(10), dt_payment datetime);
describe payment;
-- (without field)

Insert into payment values (1,1,5000,"cash","2020-05-2211::00:00");

select * from payment;

-- (with field)
-- select * from customer;