SELECT C.name, R.rentals_date FROM rentals R
JOIN customers C ON C.id =  R.id_customers
WHERE EXTRACT(MONTH FROM R.rentals_date) = 9
