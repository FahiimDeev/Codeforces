a,b,c = map(int, input().split())

position = sorted([a,b,c])

distance = position[2] - position[0]

print(distance)