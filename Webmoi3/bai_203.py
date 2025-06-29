s = input()

min_char = ''
min_ascii = 10000

for ch in s:
    if ch.isalpha():  # chỉ xét chữ cái
        if ord(ch) < min_ascii:
            min_ascii = ord(ch)
            min_char = ch

print(f"{min_char}: {min_ascii}")
