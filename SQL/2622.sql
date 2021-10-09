SELECT C.name FROM customers C
WHERE C.id IN ( SELECT L.id_customers FROM legal_person L )