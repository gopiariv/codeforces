def main():
	n = int(input())
	p = 2
	for i in range(1, n + 1):
		c = ((i * (i + 1)) ** 2 - p) / i
		p = i * (i + 1)
		print(int(c))

if __name__ == '__main__':
	main()