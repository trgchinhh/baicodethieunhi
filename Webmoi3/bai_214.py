s = input().strip()
k = int(input())
res = ""
for ch in s:
    if ch.islower():
        new_ch = chr((ord(ch) - ord('a') + k) % 26 + ord('a'))
    elif ch.isupper():
        new_ch = chr((ord(ch) - ord('A') + k) % 26 + ord('A'))
    else:
        new_ch = ch  
    res += new_ch

print(res)
