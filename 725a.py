def main():
	n = int(input())
	s = input()
	count = 0
	i = 0

	while i < n and s[i] == '<' :
		count += 1
		i += 1

	i = n - 1
	while i > -1 and s[i] == '>':
		count += 1
		i -= 1

	print(count)


if __name__ == '__main__':
	main()