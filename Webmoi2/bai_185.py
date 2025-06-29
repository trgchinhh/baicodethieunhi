s = input().strip()

ok = True
for c in s:
    if c.isalpha() and not c.isupper():
        ok = False
        break

print("YES" if ok else "NO")
