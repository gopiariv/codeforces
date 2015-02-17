def main():
	m, s = map(int, input().split())
	if s == 0:
		if m == 1:
			print(0, 0)
		else:
			print(-1, -1)
		exit()
	for i in range(1,10):
		if 0 <= s - i <= (m-1)*9:
			k = s - i
			a = []
			for j in range(m - 1):
				a.append(min(9, k))
				k -= min(9, k)
			print (''.join(map(str, [i] + a[::-1])), )
			break
	else:
		print(-1, )
	k = s
	a = []
	for j in range(m):
		a.append(min(9, k))
		k -= min(9, k)
	if k:
		print(-1)
	else:
		print(''.join(map(str, a)))

	


if __name__ == '__main__':
	main()
