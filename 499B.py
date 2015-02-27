def main():
	n, m = map(int,input().split())
	trans = {}
	for _ in range(m):
		temp = list(input().split())
		a, b = temp[0],temp[1]
		if len(a) <= len(b):
			trans[a] = a
		else:
			trans[a] = b
	lecture = list(input().split())
	notes = ''
	for x in lecture:
		notes += (trans[x]+' ')
	print(notes)


if __name__ == '__main__':
	main()