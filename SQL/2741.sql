SELECT 
'Approved: ' || S.name AS "name",
S.grade
FROM students S
WHERE S.grade >= 7
ORDER BY S.grade DESC