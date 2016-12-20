sum = 0
for i in range(0,1001,3):
	print i
	sum+=i

for j in range(0,1000,5):
	if j%3 is not 0:
		sum+=j

print sum
