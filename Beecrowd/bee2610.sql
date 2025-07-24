SELECT
    CAST(
        avg(price)
        AS DECIMAL(10,2)
    ) AS price
FROM
    products;