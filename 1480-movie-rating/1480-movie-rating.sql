(select name as results
from users, movierating
where users.user_id = movierating.user_id
group by users.user_id
order by count(*) desc, name
limit 1)

union all

(select title as results
from movies, movierating
where movies.movie_id = movierating.movie_id and movierating.created_at like "2020-02%"
group by movies.title
order by avg(movierating.rating) desc, title
limit 1)
;