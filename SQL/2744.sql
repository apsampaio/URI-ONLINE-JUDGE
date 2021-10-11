SELECT A.id, A.password, MD5(A.password) as "MD5"
FROM account A