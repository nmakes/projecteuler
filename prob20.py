def fact(n):
	if(n<=1):
		return 1
	else:
		return n*fact(n-1)

k = fact(100)
sum =0
while k!=0:
	t = k%10
	sum += t
	k /= 10

print sum