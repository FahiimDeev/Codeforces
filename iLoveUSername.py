n = int(input())

scores = list(map(int, input().split()))

best = worst = scores[0]

record_breaks = 0

for score in scores[1:]:
    if score > best:
        best = score
        record_breaks += 1
    elif score < worst:
        worst = score
        record_breaks += 1

print(record_breaks)
