arr = []
index = 0

"""
def fib(n):
	global index
	if (n==0):
		arr.append(1)
		index = index+1
		print n, ":", arr[n]
		fib(n+1)
	elif (n==1):
		arr.append(1)
		index = index+1
		print n, ":", arr[n]
		fib(n+1)
	else:
		arr.append(arr[n-1]+arr[n-2])
		index = index+1
		if(arr[n]>10000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000):
			return
		else:
			print n, ":", arr[n]
			fib(n+1)
"""

def fiboLoop(n):
	a=1
	b=1
	c=0
	if(n<=2):
		c=1
		return c

	for i in range(3, n+1): #Calculating using loop
		c = a+b
		a = b
		b = c

	return c

k= fiboLoop(4782)


print len(str(k))