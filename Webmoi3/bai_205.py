n = input().split()

minn = 10000
for x in n:
    if(len(x) < minn):
        minn = len(x)

for x in n:
    if(len(x) == minn):
        print(x)
        break        

