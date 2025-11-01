luck, myid = input().split()
prizes = [2000000, 200000, 20000, 2000, 400, 200]
for i in range(10, 4, -1):
    if luck[:i] == myid[:i]:
        print(prizes[10-i])
        break
else:
    print("Shit happens")
