SELECT M.id, M.name FROM movies M WHERE M.id_prices IN
	( SELECT P.id FROM prices P WHERE P.value < 2.00 ) 