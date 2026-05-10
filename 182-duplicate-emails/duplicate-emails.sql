select Email from Person 
group by(email) havIng (count(Email)>1)