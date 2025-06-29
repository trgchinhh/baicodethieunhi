n = int(input())
names = [input().strip() for _ in range(n)]
scores = [float(input()) for _ in range(n)]

for name, score in zip(names, scores):
    print(f"{name}: {score:.1f}")
