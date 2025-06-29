n = input().split()

maxx = -1; 
for x in n:
    if(len(x) > maxx):
        maxx = len(x)

for x in n:
    if(len(x) == maxx):
        print(x)
        break

