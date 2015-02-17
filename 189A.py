def main():
	n, a, b, c = map(int, input().split())
	f = [-1]*4006
	f[0] = 0
	for i in range(1,n+1):
		temp = max(f[at(i-a)], f[at(i-b)], f[at(i-c)])
		if temp == -1:
			f[i] = -1
		else:
			f[i] = temp + 1
		#print(f[1:n+1])
	print(f[n])
	#print(f[1:n+1])

if __name__ == '__main__':
	main()
