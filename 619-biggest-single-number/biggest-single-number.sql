# Write your MySQL query statement below
SELECT MAX(num)AS NUM 
FROM (
    SELECT num 
    FROM MyNumbers
    GROUP BY num
    having count(num)=1
)as single_numbers;