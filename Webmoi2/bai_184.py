s = input().strip()

ok = True
for c in s:
    if c.isalpha() and not c.islower():
        ok = False
        break

print("YES" if ok else "NO")
