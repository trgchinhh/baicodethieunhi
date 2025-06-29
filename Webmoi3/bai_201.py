n = int(input())
chars = [input().strip() for _ in range(n)]

words = []
current_word = []
for char in chars:
    if char == '':
        if current_word:  
            words.append(''.join(current_word))
            current_word = []
    else:
        current_word.append(char)
if current_word:
    words.append(''.join(current_word))

result = ' '.join(words)
print(result)