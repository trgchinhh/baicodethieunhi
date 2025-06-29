s = input()
x = input()
n = int(input())

len_s = len(s)
pad = n - len_s 

if pad <= 0:
    print(s)
else:
    if pad % 2 == 0:
        left = pad // 2
        right = pad // 2
    else:
        if n % 2 == 1:
            left = pad // 2 + 1
            right = pad // 2
        else:
            left = pad // 2
            right = pad // 2 + 1

    result = x * left + s + x * right
    print(result)
