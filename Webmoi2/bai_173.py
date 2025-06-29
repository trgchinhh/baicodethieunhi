ch = input().strip()

if ch == 'z':
    print('a')
elif ch == 'Z':
    print('A')
else:
    print(chr(ord(ch) + 1))
