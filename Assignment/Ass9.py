basic_pay=int(input("Enter Basic Pay of Employee in Rupees:"))
print("Basic Pay:",basic_pay)
if basic_pay<0:
	print("Enter Valid Amount")
else:
	HRA=basic_pay*0.1
	TA=basic_pay*0.08
	total_salary=basic_pay+HRA+TA
	tax=total_salary*0.02
	salary_payable=total_salary-tax
	print("Gross Salary to Employee in Rupees:",total_salary)
	print("Tax Paid by Employee in Rupees:",tax)
	print("Net Salary payable to Employee in Rupees:",salary_payable)
	
