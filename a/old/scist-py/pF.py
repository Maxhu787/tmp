a, b = map(int, input().split())
count = 0

while a > b:
    if a % 2 == 0:
        a //= 2
    else:
        a -= 1
    count += 1

print(count)
