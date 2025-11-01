def f(x, n=0):
    if(x == 1):
        return n
    if(x % 2 == 0):
        return f(x // 2, n + 1)
    else:
        return f(3 * x + 1, n + 1)

print(f(int(input()), 1))