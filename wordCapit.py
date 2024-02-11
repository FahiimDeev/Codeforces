string = input()

words = string.split()

capitalized_words = []

for word in words:
    capitalized_word = word[0].upper() + word[1:]
    capitalized_words.append(capitalized_word)

capitalized_string = ' '.join(capitalized_words)

print(capitalized_string)
