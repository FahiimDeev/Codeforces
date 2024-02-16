def count(alpha):
    count_a = alpha.count("A")
    count_d = alpha.count("D")

    if count_a > count_d:
        return "Anton"
    elif count_d > count_a:
        return "Danik"
    else:
        return "Friendship"
    
n = input()
alpha = input()

print(count(alpha))