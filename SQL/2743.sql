SELECT P.name, LENGTH(P.name) AS "length"
FROM people P
ORDER BY "length" DESC