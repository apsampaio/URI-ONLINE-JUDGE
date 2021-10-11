SELECT P.name, 
CAST( (P.salary * 10 / 100) AS DECIMAL(10, 2) ) AS "tax"
FROM people P
WHERE P.salary > 3000