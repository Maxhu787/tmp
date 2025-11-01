x, y = map(int, input().split())
n = int(input())
for _ in range(n):
    a, m = map(int, input().split())
    if a == 1:
        y += m
    elif a == 2:
        y -= m
    elif a == 3:
        x -= m
    elif a == 4:
        x += m
print("(", x, ",", y, ")", sep='')
