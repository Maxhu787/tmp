a, b, c = map(int, input().split())
o = (a * 4 + b * 3 + c * 3) / (10)
if(o >= 80):
    print("A")
elif(o >= 70):
    print("B")
elif(o >= 60):
    print("C")
else:
    print("D")