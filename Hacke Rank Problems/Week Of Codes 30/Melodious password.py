import sys
import itertools

n = int(input().strip())

consonants = ['b', 'c', 'd', 'f', 'g', 'h', 'j', 'k', 'l', 'm', 'n', 'p', 'q', 'r', 's', 't', 'v', 'w', 'x', 'z']
vowels = ['a', 'e', 'i', 'o', 'u']

test = ['b', 'c', 'd', 'f', 'g', 'h', 'j', 'k', 'l', 'm', 'n', 'p', 'q', 'r', 's', 't', 'v', 'w', 'x', 'z', 'a', 'e', 'i', 'o', 'u']

ans = set(itertools.product(test , repeat = n))
for letter in ans:
    for j in range(len(letter)):
        flag = 1
        if j!= len(letter) - 1:
            if letter[j] in vowels and letter[j+1] in vowels:
                flag = 0
                break
            if letter[j] in consonants and letter[j+1] in consonants:
                flag = 0
                break
    if flag:
        for j in letter:
            sys.stdout.write(j)
        print()