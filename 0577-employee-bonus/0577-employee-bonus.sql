# Write your MySQL query statement below
SELECT Employee.name,Bonus.bonus FROM Employee
LEFT JOIN Bonus ON Employee.empId=Bonus.empId
Where bonus<1000 or bonus IS NULL;
