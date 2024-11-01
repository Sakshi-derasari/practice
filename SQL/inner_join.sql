use cutomer_12;
alter table student add column standard int;
describe student;
update student set standard=8 where rollno=5;
describe student;
select * from student;
alter table exam add column standard int;
update exam set standard=12 where marks=90;
select * from exam; 
alter table exam drop column excity;
describe exam;
select * from exam;
SELECT student.name, exam.marks
FROM student
INNER JOIN exam
ON student.standard = exam.standard;