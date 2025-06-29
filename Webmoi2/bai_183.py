s = input().strip()

if all(not c.isalnum() for c in s):
    print("YES")
else:
    print("NO")
