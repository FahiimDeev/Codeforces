first = input()
last = input()
letter = input()

concate = first + last

if sorted(concate) == sorted(letter):
    print("YES")
else:
    print("NO")
