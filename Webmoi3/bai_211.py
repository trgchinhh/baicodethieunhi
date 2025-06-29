s = input().strip()
words = s.split()
if len(words) <= 1:
    print("") 
else:
    print(' '.join(words[:-1]))
