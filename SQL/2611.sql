SELECT M.id, M.name FROM movies M WHERE M.id_genres =
	( SELECT G.id FROM genres G WHERE G.description = 'Action' )