n = int(input())
names = [input().strip() for _ in range(n)]
def sort_key(fullname):
    parts = fullname.strip().split()
    name = parts[-1]  
    prefix = ' '.join(parts[:-1]) 
    return (name.lower(), prefix.lower())  

sorted_names = sorted(names, key=sort_key)
for name in sorted_names:
    print(name)
