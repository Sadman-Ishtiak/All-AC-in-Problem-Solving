select customers.name as name
from customers, legal_person
where customers.id = legal_person.id_customers;