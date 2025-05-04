s = input().strip()
count_lower = sum(1 for char in s if char.islower())
print(count_lower)