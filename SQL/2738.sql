SELECT C.name,
CAST(
  (((S.math * 2) + (S.specific * 3) + (S.project_plan * 5)) / 10)
  AS DECIMAL(10, 2)
) 
as "avg" 
FROM candidate C
JOIN SCORE S ON C.id = S.candidate_id
ORDER BY "avg" DESC