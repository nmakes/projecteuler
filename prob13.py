file = open('50nums')

sum=0

for i in range(1,101):
	K = file.readline()
	print i, int(K)
	sum = sum + int(K)

print sum