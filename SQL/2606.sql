SELECT P.id, P.name FROM products P WHERE P.id_categories IN 
	( SELECT C.id FROM categories C WHERE C.name LIKE '%super%' )