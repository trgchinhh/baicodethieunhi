s = input().strip()
words = s.split()

def is_valid(word):
    return word[0].isupper() and (len(word) == 1 or word[1:].islower())

if all(is_valid(word) for word in words):
    print("Yes")
else:
    print("No")
