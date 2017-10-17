import random

def fill_letter(numbers, letters, letter, freq):
    for x in range (0, freq):
        r = numbers[random.randint(0, len(numbers) - 1)]
        letters[r] = letter
        numbers.remove(r)

def gen_plain():
    dictionary = ["stovepipes", "nested","gibbousness", "cottoned" ,"hope","energize", "dextrins" ,"travestied", "jeopardous" ,"nymphal" ,"finale" ,"brisking", "expatiations", "meaningless" ,"sampling" ,"freelancing", "swells" ,"maturates", "violators" ,"rankly" ]
    plain = ""
    while(len(plain) < 500):
        plain += dictionary[random.randint(0, 19)]
        plain += " "
    plain = plain[:-1]
    return plain


def main() :
    numbers = [0] * 106

    letters = [' '] * 106

    freq = [7, 1, 2, 4, 10, 2, 2, 5, 6, 1, 1, 3, 2, 6, 6, 2, 1, 5, 5, 7, 2, 1, 2, 1, 2, 1]

    for x in range (0, 106):
        numbers[x] = x

    for x in range (0, 26):
        fill_letter(numbers, letters, str(chr(97+x)) , freq[x])

    ltk = []

    ltk.append(numbers) # Adds the keys for the space

    keys = []
    for x in range (0, 26):
        for y in range (0, 106):
            if letters[y] == chr(97 + x):
                keys.append(y)
        ltk.append(keys)
        keys = []

    for x in range(0, 27):
        print chr(x+ 96)
        print ltk[x]

    plain = gen_plain()

    cipher = []

    for x in range(0, len(plain)):
        if(ord(plain[x]) - 96 < 1):
            cipher.append(ltk[0][random.randint(0, 18)])
        else:
            letter_keys = ltk[ord(plain[x]) - 96]
            cipher.append( letter_keys[random.randint(0, len(letter_keys) - 1)])
    print plain

    print cipher
        



main()
