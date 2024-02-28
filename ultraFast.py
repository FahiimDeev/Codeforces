def mathematician(s1,s2):
    result =""
    for i in range(len(s1)):
        if s1[i] == s2[i]:
            result += "0"
        else:
            result += "1"
    return result

if __name__ == "__main__":
    s1 = input()
    s2 = input()
    print(mathematician(s1,s2))