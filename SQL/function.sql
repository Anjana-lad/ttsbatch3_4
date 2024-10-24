--  function defination 
delimiter //
create function  birthyear(age int) returns int deterministic
begin 
	declare year_c date;
    select curdate() into year_c;
    return year(year_c)-age;
end //
delimiter ;
-- to call the function
select cid,c_name,age,birthyear(age)as birth_year from customer;

-- procedure with no parameter
delimiter //
create procedure p1()
begin 
	select * from customer where age>30;
end //
delimiter ;

call p1();

-- procedure with in parameter 
delimiter $$
create procedure p2(in id int)
begin
	select c_name ,mobile_no from customer where cid=id;
end $$
delimiter ;

call p2(6);

-- procedure with in and out parameter
delimiter $$
create procedure p3(in id int,out nm varchar(20),out mm bigint)
begin
	select c_name,mobile_no from customer where cid=id;
end $$
delimiter ;

call p3(4,@nm,@mm);

-- procedure with inout parameter
delimiter //
create procedure p4(inout var varchar(20))
begin
	select c_name into var from customer where cid=var;
end //
delimiter ;
-- to execute 
set @var=3;
call p4(@var);
select @var as cust_data;