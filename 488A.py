def main():
	a = int(input())
	for i in range(1,17):
		if '8' in str(a+i):
			print(i)
			break

if __name__ == '__main__':
	main()

"""Critical case is when a = -8 . So i's range should be greater than 16"""