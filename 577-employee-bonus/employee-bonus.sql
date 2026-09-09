# Write your MySQL query statement below
select e.name , b.bonus
from Employee AS e
left join  Bonus AS b
on e.empID= b.empID
where b.bonus<1000 OR b.bonus IS NULL;