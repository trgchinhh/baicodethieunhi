n = input()
m = input()
z = int(input())

n = list(n)
n[z-1] += m
n = ''.join(n)

print(n)