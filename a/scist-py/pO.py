n = int(input())
start = 10**(n-1) if n > 1 else 1
end = 10**n
for i in range(start, end):
    if str(i) == str(i)[::-1] and bin(i)[2:] == bin(i)[2:][::-1]:
        print(i)
