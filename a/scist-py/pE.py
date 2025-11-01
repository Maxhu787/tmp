F, M = map(int, input().split())

if F >= M and F % M == 0:
    print("Happy")
elif M > F and M % F == 0:
    print("Sad")
else:
    print("ROIT")
