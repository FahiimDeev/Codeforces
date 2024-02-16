def is_lucky_number(num):
    count = sum(1 for digit in str(num) if digit in ['4', '7'])
    return all(digit in ['4', '7'] for digit in str(count))

n = input()

if is_lucky_number(n):
    print("YES")
else:
    print("NO")
