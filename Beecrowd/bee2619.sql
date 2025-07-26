select  products.name as name, 
        providers.name, 
        products.price as price
from
        products, 
        providers, 
        categories
where 
        categories.id = products.id_categories and
        lower(categories.name) = lower('Super Luxury')and
        providers.id = products.id_providers and
        products.price > 1000
    ;