def contains_all_alphabets(string):
    alphabets = [False] * 26
    distinct_count = 0

    for ch in string:
        if ch.isalpha():
            ch = ch.lower()
            index = ord(ch) - ord('a')
            if not alphabets[index]:
                alphabets[index] = True
                distinct_count += 1

    return distinct_count == 26

def main():
    n = int(input())
    input_str = input()

    if len(input_str) < 26:
        print("NO")
    elif contains_all_alphabets(input_str):
        print("YES")
    else:
        print("NO")

if __name__ == "__main__":
    main()
