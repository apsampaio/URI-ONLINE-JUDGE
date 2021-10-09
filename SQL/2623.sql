SELECT P.name, C.name FROM products P
JOIN categories C ON P.id_categories= C.id
WHERE P.amount > 100 AND
C.id IN (1, 2, 3, 6, 9)
ORDER BY C.id 