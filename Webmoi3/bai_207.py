s = input()
x = input()
n = int(input())

len_s = len(s)
pad = n - len_s 

if pad <= 0:
    print(s)
else:
    result = x * pad + s
    print(result)
