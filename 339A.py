def main():
	numbers = list(map(int, input().split('+')))
	numbers.sort()
	for i in range(len(numbers) - 1):
		print(str(numbers[i])+'+', end = '')
	print(numbers[-1])

if __name__ == '__main__':
	main()