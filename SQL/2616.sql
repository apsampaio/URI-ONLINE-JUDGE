SELECT C.id, C.name FROM customers C
WHERE C.id NOT IN
	( SELECT L.id_customers FROM locations L )