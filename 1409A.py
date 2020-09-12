def solve(a, b):
    res = 0
    if a == b:
        return 0
    if a > b:
        if a - b <= 10:
            res = 1
 
        else:
            res =  (a - b) // 10
            if (a - b) % 10 > 0:
                res +=1
        return res
    
    else:
        a, b = b, a
        if a - b <= 10:
            res = 1
 
        else:
            res =  (a - b) // 10
            if (a - b) % 10 > 0:
                res +=1
        return res
    
 
         
 
 
 
def main():
    t = int(input())
    for _ in range(t):
        a, b = map(int, input().split())
        print(solve(a, b))
 
 
 
if __name__ == "__main__":
    main()
