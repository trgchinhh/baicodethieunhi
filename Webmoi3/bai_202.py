s = input()

max_char = ''
max_ascii = -1

for ch in s:
    if ch.isalpha():  # chỉ xét chữ cái
        if ord(ch) > max_ascii:
            max_ascii = ord(ch)
            max_char = ch

print(f"{max_char}: {max_ascii}")
