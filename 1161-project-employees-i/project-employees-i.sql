# Write your MySQL query statement below
select project_id,Round(sum(experience_years)/count(experience_years),2) as average_years from Project P join 
Employee E on E.employee_id=P.employee_id
group by project_id