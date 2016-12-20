fil = open('numberwords.txt','w')

tens = ['', 'one', 'two', 'three', 'four', 'five', 
			'six', 'seven', 'eight', 'nine', 'ten', 
		'eleven', 'twelve', 'thirteen', 'fourteen', 
		'fifteen', 'sixteen', 'seventeen', 'eighteen',
		'nineteen', 'twenty' ]

tenmultiplier = ['', '', 'twenty', 'thirty', 'forty', 'fifty', 'sixty', 'seventy', 'eighty', 'ninety']

hundredmultiplier = ['', 'one hundred', 'two hundred', 'three hundred', 'four hundred', 'five hundred', 'six hundred', 'seven hundred', 'eight hundred', 'nine hundred']

for j in range(0, 10):

	fil.write(hundredmultiplier[j])
	fil.write('\n')

	for i in range(1,20):
		fil.write(hundredmultiplier[j])
		if(j!=0) : fil.write(' and ')
		fil.write(tens[i])
		fil.write('\n')

	for i in range(20, 100):
		fil.write(hundredmultiplier[j])
		if(j!=0) : fil.write(' and ')
		fil.write(tenmultiplier[i/10])
		fil.write(tens[(i%10)])
		fil.write('\n')

fil.write('one thousand\n')

fil.close()

#--

fil = open('numberwords.txt', 'r')
st = fil.readline()
total = 0
while st != '':
	total = total + len(st) -1
	st = fil.readline()

print total-1