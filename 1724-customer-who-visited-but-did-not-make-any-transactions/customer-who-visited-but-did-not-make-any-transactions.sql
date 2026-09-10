# Write your MySQL query statement below
 SELECT v.customer_id, COUNT(v.visit_id) AS count_no_trans
 FROM Visits v
LEFT JOIN transactions T ON v.visit_id=T.visit_id
WHERE T.transaction_id IS NULL
group by v.customer_id;