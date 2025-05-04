s = input().strip()
count_upper = sum(1 for char in s if char.isupper())
print(count_upper)