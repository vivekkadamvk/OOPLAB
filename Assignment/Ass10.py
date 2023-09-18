n = int(input("Enter the Number:"))
temp=n
sum = 0

if temp<0:
	print("Enter Valid Number")
while temp>0:
	digit=temp%10
	sum+=digit**3
	temp//=10
if n==sum:
	print(n,"is an armstrong number")
else:
	print(n,"is not an armstrong number")	


