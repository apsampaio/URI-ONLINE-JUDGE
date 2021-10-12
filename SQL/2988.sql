SELECT T.name, 
-- matches
( COUNT(M.team_1) FILTER ( WHERE M.team_1 = T.id ) ) +
( COUNT(M.team_2) FILTER ( WHERE M.team_2 = T.id ) ) AS "matches",
-- victories
( COUNT(M.team_1) FILTER ( WHERE M.team_1 = T.id AND M.team_1_goals > M.team_2_goals ) ) +
( COUNT(M.team_2) FILTER ( WHERE M.team_2 = T.id AND M.team_2_goals > M.team_1_goals ) ) AS "victories",
-- defeats
( COUNT(M.team_1) FILTER ( WHERE M.team_1 = T.id AND M.team_2_goals > M.team_1_goals ) ) +
( COUNT(M.team_2) FILTER ( WHERE M.team_2 = T.id AND M.team_1_goals > M.team_2_goals ) ) AS "defeats",
-- draws
( COUNT(M.team_1) FILTER ( WHERE M.team_1 = T.id AND M.team_2_goals = M.team_1_goals ) ) +
( COUNT(M.team_2) FILTER ( WHERE M.team_2 = T.id AND M.team_1_goals = M.team_2_goals ) ) AS "draws",
-- score
((( COUNT(M.team_1) FILTER ( WHERE M.team_1 = T.id AND M.team_1_goals > M.team_2_goals ) ) +
( COUNT(M.team_2) FILTER ( WHERE M.team_2 = T.id AND M.team_2_goals > M.team_1_goals ) ) ) * 3) + 
( COUNT(M.team_1) FILTER ( WHERE M.team_1 = T.id AND M.team_2_goals = M.team_1_goals ) ) +
( COUNT(M.team_2) FILTER ( WHERE M.team_2 = T.id AND M.team_1_goals = M.team_2_goals ) )
AS "score"
FROM teams T
JOIN matches M ON T.id = M.team_1 OR T.id = M.team_2 
GROUP BY T.name
ORDER BY "score" DESC