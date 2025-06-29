s = input()
k = int(input())
x = input().strip()[0]

chars = list(s)

if 0 <= k < len(chars):
    chars[k] = x

print(''.join(chars))
