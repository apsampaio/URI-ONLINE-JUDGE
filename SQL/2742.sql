SELECT L.name,
CAST( (L.omega * 1.618) AS DECIMAL(10, 3) ) AS "Fator N"
FROM life_registry L
JOIN dimensions D ON L.dimensions_id = D.id
WHERE L.name LIKE 'Richard%' AND D.name IN ('C875', 'C774')
ORDER BY L.omega