def main():	
	s = (input())
	t = (input())

	arrS = [0] * 70
	arrT = [0] * 70
	count = 0
	count2 = 0
	n = len(s)
	for x in s:
		arrS[ord(x) - 65] += 1
	for x in t:
		arrT[ord(x) - 65] += 1
	for i in range(60):
		temp = min(arrS[i], arrT[i])
		arrS[i] -= temp
		arrT[i] -= temp
		count += temp
	for i in range(28):
		temp = min(arrS[i], arrT[i + 32])
		arrS[i] -= temp
		arrT[i + 32] -= temp
		count2 += temp
	for i in range(32, 68):
		temp = min(arrS[i], arrT[i - 32])
		arrS[i] -= temp
		arrT[i - 32] -= temp
		count2 += temp
	
	print(count, count2)



if __name__ == '__main__':
	main()