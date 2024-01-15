-- list the names of all peoplewho starred in Toy Story
SELECT name FROM people
JOIN stars ON stars.person_id = people.id
JOIN movies ON movies.id = stars.movie_id
WHERE movies.title = "Toy Story";
