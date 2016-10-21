def main():
	n, c = map(int, input().split())
	a = list(map(int, input().split()))
	count = 1
	for i in range(1, n):
		if a[i] - a[i - 1] > c:
			count = 1
		else:
			count += 1
	print(count)

if __name__ == '__main__':
	main()