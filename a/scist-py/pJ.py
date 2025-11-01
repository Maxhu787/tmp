n = int(input())
lions = [tuple(map(int, input().split())) for i in range(n)]
min_index, min_value = 1, lions[0][0]*lions[0][1]
for i in range(1, n):
    value = lions[i][0]*lions[i][1]
    if value < min_value:
        min_value = value
        min_index = i+1
print(min_index, lions[min_index-1][0], lions[min_index-1][1])
