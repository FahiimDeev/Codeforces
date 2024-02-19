def is_beautiful_year(year):
    digits = set(str(year))
    return len(digits) == len(str(year))

def next_beautiful_year(current_year):
    next_year = current_year + 1
    while not is_beautiful_year(next_year):
        next_year += 1
    return next_year

if __name__ == "__main__":
    current_year = int(input())
    print(next_beautiful_year(current_year))
    