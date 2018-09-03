i = open("INPUT.TXT", 'r')

m = i.read().split(" ")

k = int(m[0])
n = int(m[1])

a = [0] * (n+k)

a[k]=1

for i in range(k+1, 2*k, 1):
	for j in range(i, k-1, -1):
		a[i]+=a[j]
	a[i]+=1

for i in range(2*k, n+k):
	for j in range(1, k+1):
		a[i]+=a[i-j]

o = open("OUTPUT.TXT", 'w')
o.write(str(a[len(a)-1]))