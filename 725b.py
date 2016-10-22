def main():
	s = input()
	n = int(s[:len(s) - 1]) - 1

	time = (n // 4) * 16

	k = n % 4 

	if k in [1,3]:
		time += 7

	a = [4, 5, 6, 3, 2, 1]

	time += a[ord(s[-1]) - ord('a')]

	print(time)


if __name__ == '__main__':
	main()