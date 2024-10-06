n = int(input())

events = list(map(int, input().split()))


police_officers = 0  
unchecked_crimes = 0 

for event in events:
    if event > 0:
        police_officers += event
    else:
        if police_officers > 0:
            police_officers -= 1
        else:
            unchecked_crimes += 1

print(unchecked_crimes)
