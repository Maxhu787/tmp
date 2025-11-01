T = int(input())
for _ in range(T):
    plate = input().strip()
    value = 0
    for ch in plate:
        if ch.isdigit():
            value = value*36 + int(ch)
        else:
            value = value*36 + ord(ch)-55
    print(value % 1688 + 1)
