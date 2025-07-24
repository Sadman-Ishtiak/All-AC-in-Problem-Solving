select movies.id as id, movies.name as name
from movies, prices
where movies.id_prices=prices.id and prices.value < 2.00