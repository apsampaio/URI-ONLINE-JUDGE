SELECT products.name, providers.name, products.price FROM products
JOIN providers ON products.id_providers = providers.id
WHERE products.price > 1000 AND products.id_categories =
	( SELECT categories.id FROM categories WHERE categories.name = 'Super Luxury' )