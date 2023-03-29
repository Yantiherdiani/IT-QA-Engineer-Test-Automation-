select emp_code,emp_name,emp_status,income from tbl_employee
join tbl_income on tbl_employee.emp_code =tbl_employee.emp_code
order by emp_income DESC
