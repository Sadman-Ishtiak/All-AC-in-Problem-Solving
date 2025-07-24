SELECT
    movies.id AS id,
    movies.name AS name
FROM
    movies,
    genres
WHERE
    movies.id_genres = genres.id
    AND lower(genres.description) = 'action';