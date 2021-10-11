(SELECT 
'Podium: ' || L.team AS "name"
FROM league L
WHERE L.position <= 3)
UNION ALL
(SELECT 'Demoted: ' || L.team
FROM league L
WHERE L.position >= 14)