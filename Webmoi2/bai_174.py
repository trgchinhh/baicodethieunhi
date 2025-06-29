ch = input().strip()

if ch == 'a':
    print('z')
elif ch == 'A':
    print('Z')
else:
    print(chr(ord(ch) - 1))
