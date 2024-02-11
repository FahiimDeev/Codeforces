s = input()
numbers = [int(x) for x in s.split('+')]
numbers.sort()
sorted_string = '+'.join(map(str, numbers))
print(sorted_string)