# Write your MySQL query statement below
SELECT s.year,s.price,p.product_name
FROM Sales AS s
INNER JOIN Product AS p
on s.product_id = p.product_id;