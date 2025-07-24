select products.name, providers.name
from providers, products
where products.id_providers = providers.id
  and lower(providers.name) = 'ajax sa';