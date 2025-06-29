n = int(input())
arr = [input().strip() for _ in range(n)]
arr.sort(key=len)
for s in arr:
    print(s)
