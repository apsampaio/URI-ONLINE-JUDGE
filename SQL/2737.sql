(SELECT L.name, L.customers_number
FROM lawyers L
ORDER BY L.customers_number DESC
LIMIT 1)
UNION
(SELECT L.name, L.customers_number
FROM lawyers L
ORDER BY L.customers_number
LIMIT 1)
UNION ALL
(SELECT 'Average' as "name", CAST(AVG(L.customers_number) AS DECIMAL(10, 0)) FROM lawyers L)
