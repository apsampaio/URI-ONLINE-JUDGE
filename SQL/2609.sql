SELECT C.name, SUM(P.amount) FROM categories C
INNER JOIN products P ON P.id_categories = C.id
GROUP BY C.name