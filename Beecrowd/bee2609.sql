select categories.name as name, sum(products.amount) as sum
from categories join products on products.id_categories = categories.id
group by categories.id;