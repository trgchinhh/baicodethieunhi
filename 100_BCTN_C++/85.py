full_name = input().strip()
name_parts = full_name.split()
surname = " ".join(name_parts[:-1])
print(surname)