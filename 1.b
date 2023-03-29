select emp_name,emp_income from tbl_employee
 join tbl_income on tbl_income.emp_code = tbl_employee.emp_code
 where emp_status = 'R'
