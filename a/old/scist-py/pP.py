w = list(map(int, input().split()))
ticket = list(map(int, input().split()))
o = sum(1 for w, t in zip(w, ticket) if w == t)
if o <= 2:
    print("Dog food")
elif o == 3:
    print(777)
elif o == 4:
    print(7777)
elif o == 5:
    print(77777)
elif o == 6:
    print(777777)
else:
    print("VIP")
