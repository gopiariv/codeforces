def main():	
	n, m, k = map(int, input().split())
	a = list(map(int, input().split()))
	b = list(map(int, input().split()))
	pos  = [0] * (n + 5)
	app = [0] * (n + 5)
	for i in range(n):
		pos[i + 1] = a[i]
		app[a[i]] = i + 1
	#print(app[1:], pos[1:])
	swipes = 0
	for x in b:
		if app[x] % k != 0:
			swipes += ((app[x] // k) + 1)
		else:
			swipes += (app[x]//k)
		if app[x] != 1:
			tempPos = app[x]
			tempApp = pos[tempPos - 1]
			pos[tempPos] = tempApp
			app[tempApp] = tempPos
			app[x] = tempPos - 1
			pos[tempPos - 1] = x
			#print(app[1:], pos[1:])
	print(swipes)




if __name__ == '__main__':
	main()