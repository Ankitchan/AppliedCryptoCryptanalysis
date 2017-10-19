import random
import sys

def fill_letter(numbers, letters, letter, freq):
    for x in range (0, freq):
        r = numbers[random.randint(0, len(numbers) - 1)]
        letters[r] = letter
        numbers.remove(r)

def gen_plain():
    plain = ""
    while(len(plain) < 499):
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

    plaintext1 = "dipped ligatured cannier cohabitation cuddling coiffeuses pursuance roper eternizes nullo framable paddlings femur bebop demonstrational tuberculoid theocracy women reappraise oblongatae aphasias loftiness consumptive lip neurasthenically dutchmen grift discredited resourcefulness malfeasants swallowed jogger sayable lewder editorials demimondaine tzaritza arrogations wish indisputable reproduces hygrometries gamuts alight borderlines draggle reconsolidated anemometer rowels staggerers grands nu"
    plaintext2 = "rereads predestines equippers cavitation bimolecular lucubrations cabin bettas quiverer prussians cosigner dressier bended dethronement inveigled davenport establish ganges rebroadcast supered bastiles willable abetted motionlessness demonic flatter bunyan securely tippiest tongue aw cotyledonal roomettes underlies miffs inducement overintellectually fertilize spasmodic bacchanal birdbrains decoct snakebite galliard boson headmistress unextended provence weakling pirana fiend lairds argils comma"
    plaintext3 = "trawling responsiveness tastiest pulsed restamps telescoping pneuma lampoonist divas theosophists pustules checkrowed compactor conditionals envy hairball footslogs wasteful conjures deadfall stagnantly procure barked balmier bowery vagary beaten capitalized undersized towpath envisages thermoplastic rationalizers professions workbench underarm trudger icicled incisive oilbirds citrins chambrays ungainliness weazands prehardened dims determinants fishskin cleanable henceforward misarranges fine"
    plaintext4 = "dean iller playbooks resource anesthetic credibilities nonplus tzetzes incursions stooged envelopments girdling risibility thrum repeaters catheterizing misbestowed cursing malingerers ensconces lippiest accost superannuate slush opinionated rememberer councils mishandling drivels juryless slashers tangent roistering scathing apprenticing fleabite sault achier quantize registrable nobbler sheaf natantly kashmirs dittoes scanned emissivity iodize dually refunded portliest setbacks eureka needines"
    plaintext5 = "mammate punners octette asylum nonclinically trotters slant collocation cardiology enchants ledge deregulated bottommost capsulate biotechnologies subtended cloddiest training joneses catafalque fieldmice hostels affect shrimper differentiations metacarpus amebas sweeter shiatsu oncoming tubeless menu professing apostatizing moreover eumorphic casked euphemistically programmability campaniles chickpea inactivates crossing defoggers reassures tableland doze reassembled striate precocious noncomba"
    

    cipher = []

    for x in range(0, len(plaintext1)):
        if(ord(plaintext1[x]) - 96 < 1):
            cipher.append(ltk[0][random.randint(0, 18)])
        else:
            letter_keys = ltk[ord(plaintext1[x]) - 96]
            cipher.append( letter_keys[random.randint(0, len(letter_keys) - 1)])


    print
    print
    print "Ciphertext 1:"

    for x in range(0, len(cipher)):
        sys.stdout.write(str(cipher[x]))
        sys.stdout.write(',')

    cipher = []

    for x in range(0, len(plaintext2)):
        if(ord(plaintext2[x]) - 96 < 1):
            cipher.append(ltk[0][random.randint(0, 18)])
        else:
            letter_keys = ltk[ord(plaintext2[x]) - 96]
            cipher.append( letter_keys[random.randint(0, len(letter_keys) - 1)])


    print
    print
    print "Ciphertext 2:"

    for x in range(0, len(cipher)):
        sys.stdout.write(str(cipher[x]))
        sys.stdout.write(',')

    cipher = []

    for x in range(0, len(plaintext3)):
        if(ord(plaintext3[x]) - 96 < 1):
            cipher.append(ltk[0][random.randint(0, 18)])
        else:
            letter_keys = ltk[ord(plaintext3[x]) - 96]
            cipher.append( letter_keys[random.randint(0, len(letter_keys) - 1)])


    print
    print
    print "Ciphertext 3:"

    for x in range(0, len(cipher)):
        sys.stdout.write(str(cipher[x]))
        sys.stdout.write(',')

    cipher = []

    for x in range(0, len(plaintext4)):
        if(ord(plaintext4[x]) - 96 < 1):
            cipher.append(ltk[0][random.randint(0, 18)])
        else:
            letter_keys = ltk[ord(plaintext4[x]) - 96]
            cipher.append( letter_keys[random.randint(0, len(letter_keys) - 1)])


    print
    print
    print "Ciphertext 4:"

    for x in range(0, len(cipher)):
        sys.stdout.write(str(cipher[x]))
        sys.stdout.write(',')

    cipher = []

    for x in range(0, len(plaintext5)):
        if(ord(plaintext5[x]) - 96 < 1):
            cipher.append(ltk[0][random.randint(0, 18)])
        else:
            letter_keys = ltk[ord(plaintext5[x]) - 96]
            cipher.append( letter_keys[random.randint(0, len(letter_keys) - 1)])


    print
    print
    print "Ciphertext 5:"

    for x in range(0, len(cipher)):
        sys.stdout.write(str(cipher[x]))
        sys.stdout.write(',')
        



main()
