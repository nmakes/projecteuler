def genarray():
	a = []
	b = []
	for i in range(1,11):
		b=[]
		for j in range(1,11):
			b.append(i*j)
		a.append(b)
	return a

P = genarray()
print P
