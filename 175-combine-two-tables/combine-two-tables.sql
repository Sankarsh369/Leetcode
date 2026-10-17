# Write your MySQL query statement below
select A.lastName, A.firstName, B.city, B.state from Person as A left join Address as B on A.personId=B.personId;