//#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <sstream>
#include <fstream>
#include <map>
#include <algorithm>
using namespace std;

// Plain Text Dictionary for Test1    
string pt[] = { "dipped ligatured cannier cohabitation cuddling coiffeuses pursuance roper eternizes nullo framable paddlings femur bebop demonstrational tuberculoid theocracy women reappraise oblongatae aphasias loftiness consumptive lip neurasthenically dutchmen grift discredited resourcefulness malfeasants swallowed jogger sayable lewder editorials demimondaine tzaritza arrogations wish indisputable reproduces hygrometries gamuts alight borderlines draggle reconsolidated anemometer rowels staggerers grands nu",
"rereads predestines equippers cavitation bimolecular lucubrations cabin bettas quiverer prussians cosigner dressier bended dethronement inveigled davenport establish ganges rebroadcast supered bastiles willable abetted motionlessness demonic flatter bunyan securely tippiest tongue aw cotyledonal roomettes underlies miffs inducement overintellectually fertilize spasmodic bacchanal birdbrains decoct snakebite galliard boson headmistress unextended provence weakling pirana fiend lairds argils comma",
"trawling responsiveness tastiest pulsed restamps telescoping pneuma lampoonist divas theosophists pustules checkrowed compactor conditionals envy hairball footslogs wasteful conjures deadfall stagnantly procure barked balmier bowery vagary beaten capitalized undersized towpath envisages thermoplastic rationalizers professions workbench underarm trudger icicled incisive oilbirds citrins chambrays ungainliness weazands prehardened dims determinants fishskin cleanable henceforward misarranges fine ",
"dean iller playbooks resource anesthetic credibilities nonplus tzetzes incursions stooged envelopments girdling risibility thrum repeaters catheterizing misbestowed cursing malingerers ensconces lippiest accost superannuate slush opinionated rememberer councils mishandling drivels juryless slashers tangent roistering scathing apprenticing fleabite sault achier quantize registrable nobbler sheaf natantly kashmirs dittoes scanned emissivity iodize dually refunded portliest setbacks eureka needines",
"mammate punners octette asylum nonclinically trotters slant collocation cardiology enchants ledge deregulated bottommost capsulate biotechnologies subtended cloddiest training joneses catafalque fieldmice hostels affect shrimper differentiations metacarpus amebas sweeter shiatsu oncoming tubeless menu professing apostatizing moreover eumorphic casked euphemistically programmability campaniles chickpea inactivates crossing defoggers reassures tableland doze reassembled striate precocious noncomba"
};

int countVal(std::vector<int> v, int val)
{
	int count = 0;
	for (std::vector<int>::iterator it = v.begin(); it != v.end(); ++it)
	{
		if (*it == val)
			count++;
	}
	return count;
}
bool checkFirstPT(vector<int> tokens)
{
	//Condition for b are 29,95,115,117,139,177,315,385,427 & //count of b should be 9
	int idxB = tokens[29];
	if (idxB == tokens[95] && idxB == tokens[115] && idxB == tokens[117] && idxB == tokens[139] && idxB == tokens[177] && idxB == tokens[315] && idxB == tokens[385] && idxB == tokens[427] && countVal(tokens, idxB) == 9)
	{

		//Condition of j is 1
		if (countVal(tokens, tokens[304]) == 1)
		{
			//condition of q is that should occur 0 times
			
			//condition for v is it should occour at 215

			if (countVal(tokens, tokens[215]) == 1)
			{
				//condition for z is it occurs at 80,351,356 and  std::count is 3
				int idxZ = tokens[80];
				if (idxZ == tokens[351] && idxZ == tokens[356] && countVal(tokens, idxZ) == 3)
					return 1;
			}
		}

	}
	return 0;
}

bool checkSecondPT(vector<int> tokens)
{
	//condition of b are it should occur on 41,57,68,72,116,160,175,193,207,212,250,373,383,387,406,420
	int idxArrB[] = { 57,68,72,116,160,175,193,207,212,250,373,383,387,406,420 };
	int idxB = tokens[41];
	for(size_t i=0;i<sizeof(idxArrB)/sizeof(idxArrB[0]);i++)
	{
		if (idxB != tokens[idxArrB[i]])
		{
			return 0;
		}
	}
	if (countVal(tokens, idxB) == 16)
	{
		//condition of k is it should occour at 404,462
		int idxK = tokens[404];
		if (idxK == tokens[462] && countVal(tokens, idxK) == 2)
		{
			//condtion of q is that it should occur 21,79
			int idxQ = tokens[21];
			if (idxQ == tokens[79] && countVal(tokens, idxK) == 2)
			{
				//condtion of v is it should occur at 6 times --> CHANGE IT
				int idxArrV[] = { 82, 138, 148, 335, 453 };
				int idxV = tokens[32];
				for (size_t i = 0; i<sizeof(idxArrV) / sizeof(idxArrV[0]); i++)
				{
					if (idxV != tokens[idxArrV[i]])
					{
						return 0;
					}
				}
				if (countVal(tokens, idxV) == 6)
				{
					//condition of x is it should occur 442

					if (countVal(tokens, tokens[442]) == 1)
					{
						//condition of z is it should occur 360
						if (countVal(tokens, tokens[360]) == 1)
							return 1;
					}

				}
			}

		}
	}
	return 0;
}


bool checkThirdPT(vector<int> tokens)
{
	//condition of b are it should occur on 150, 211, 218, 226, 240, 332, 375, 393, 466
	int idxArrB[] = { 211, 218, 226, 240, 332, 375, 393, 466 };
	int idxB = tokens[150];
	for (size_t i = 0; i<sizeof(idxArrB) / sizeof(idxArrB[0]); i++)
	{
		if (idxB != tokens[idxArrB[i]])
		{
			return 0;
		}	
	}
	if (countVal(tokens, idxB) == 9)
	{
		//condition of k is it should occour at 111, 214, 331, 456
		int idxK = tokens[214];
		if (idxK == tokens[111]  && idxK == tokens[331] && idxK == tokens[456] && countVal(tokens, idxK) == 4 )
		{
			//condtion of j is that it should occur 177
			if (countVal(tokens, tokens[177]) == 1)
			{
				//condtion of v is it should occur at 17, 81, 143, 233, 280, 369 
				int idxArrV[] = { 81, 143, 233, 280, 369 };
				int idxV = tokens[17];
				for (size_t i = 0; i<sizeof(idxArrV) / sizeof(idxArrV[0]); i++)
				{
					if (idxV != tokens[idxArrV[i]])
					{
						return 0;
					}
				}
				if (countVal(tokens, idxV) == 6)
				{
					//condition of x is it should never occur

					if (1)
					{
						//condition of z is it should occur 255, 266, 311, 415
						int idxZ = tokens[255];
						if (idxZ == tokens[266] && idxZ == tokens[311] && idxZ == tokens[415] && countVal(tokens, idxZ) == 4)
						{
							return 1;
						}
					}

				}
			}

		}
	}
	return 0;
}

bool checkFourthPT(vector<int> tokens)
{
	//condition of b are it should occur on 15, 46, 116, 156, 247, 345, 380, 386, 387, 479
	int idxArrB[] = { 46, 116, 156, 247, 345, 380, 386, 387, 479 };
	int idxB = tokens[15];
	for (size_t i = 0; i<sizeof(idxArrB) / sizeof(idxArrB[0]); i++)
	{
		if (idxB != tokens[idxArrB[i]])
		{
			return 0;
		}	
	}
	if (countVal(tokens, idxB) == 10)
	{
		//condition of k is it should occour at 18, 407, 482, 489
		int idxK = tokens[407];
		if (idxK == tokens[18] && idxK == tokens[482] && idxK == tokens[489] && countVal(tokens, idxK) == 4)
		{
			//condtion of q is that it should never occur
			if (1)
			{
				//condtion of v is it should occur at 17, 81, 143, 233, 280, 369
				int idxArrV[] = { 277,438 };
				int idxV = tokens[92];
				for (size_t i = 0; i<sizeof(idxArrV) / sizeof(idxArrV[0]); i++)
				{
					if (idxV != tokens[idxArrV[i]])
					{
						return 0;
					}
				}
				if (countVal(tokens, idxV) == 3)
				{
					//condition of j is it should occur 282

					if (countVal(tokens, tokens[282]) == 1)
					{
						//condition of z is it should occur 64, 67, 148, 369, 447
						int idxArrZ[] = { 67, 148, 369, 447 };
						int idxZ = tokens[64];
						for (size_t i = 0; i<sizeof(idxArrZ) / sizeof(idxArrZ[0]); i++)
						{
							if (idxZ != tokens[idxArrZ[i]])
							{
								return 0;
							}
						}
						if (countVal(tokens, idxZ) == 5)
							{
								return 1;
							}
					}

				}
			}

		}
	}
	return 0;
}

bool checkFifthPT(vector<int> tokens)
{
	//condition of b are it should occur on 110, 131, 149, 260, 291, 378, 448, 468, 498
	int idxArrB[] = { 131, 149, 260, 291, 378, 448, 468, 498 };
	int idxB = tokens[110];
	for (size_t i = 0; i<sizeof(idxArrB) / sizeof(idxArrB[0]); i++)
	{
		if (idxB != tokens[idxArrB[i]])
		{
			return 0;
		}
	}
	if (countVal(tokens, idxB) == 9)
	{
		//condition of k is it should occour at 349, 400
		int idxK = tokens[400];
		if (idxK == tokens[349] && countVal(tokens, idxK) == 2)
		{
			//condtion of q is that it should occur 191
			if (countVal(tokens, tokens[191]) == 1)
			{
				//condtion of v is it should occur at 332, 441
				int idxArrV[] = { 411 };
				int idxV = tokens[332];
				for (size_t i = 0; i<sizeof(idxArrV) / sizeof(idxArrV[0]); i++)
				{
					if (idxV != tokens[idxArrV[i]])
					{
						return 0;
					}
				}
				if (countVal(tokens, idxV) == 2)
				{
					//condition of j is it should occur 176

					if (countVal(tokens, tokens[176]) == 1)
					{
						//condition of z is it should occur 332, 458
						int idxZ = tokens[322];
						if (idxZ == tokens[458] && countVal(tokens, idxZ) == 2)
							return 1;
					}

				}
			}

		}
	}
	return 0;
}
int guessPlainTextOne(string ct)
{
	stringstream ss(ct);

    string item;
    vector<int> tokens;
    std::string::size_type sz; 
    while (getline(ss, item, ',')) {
        tokens.push_back(std::stoi(item,&sz));
    }
    if(tokens.size() == 500)
    {
    	if(checkFirstPT(tokens))
    		return 0;
    	else if(checkSecondPT(tokens))
    		return 1;
    	else if(checkThirdPT(tokens))
    		return 2;
    	else if(checkFourthPT(tokens))
    		return 3;
    	else if(checkFifthPT(tokens))
    		return 4;
    
    }
	return -1;
}


string test_two_dictionary[] = {
	"stovepipes",
	"nested",
	"gibbousness",
	"cottoned",
	"hope",
	"energize",
	"dextrins",
	"travestied",
	"jeopardous",
	"nymphal",
	"finale",
	"brisking",
	"expatiations",
	"meaningless",
	"sampling",
	"freelancing",
	"swells",
	"maturates",
	"violators",
	"rankly" };

// Keys represent the integer ciphertext
// num is the integer
// used is whether or not it has been deciphered
// letter is the plaintext
class Key {
public:
	Key(int aNum) : num(aNum), used(false), letter(' ') {}

	int getNum() {
		return num;
	}

	bool getUsed() {
		return used;
	}

	char getLetter() {
		return letter;
	}

	void setUsed(bool isUsed) {
		used = isUsed;
	}

	void setLetter(char aLetter) {
		letter = aLetter;
	}

private:
	int num;
	bool used;
	char letter;
};

void decryptWord(vector<Key>::iterator& vi, map<char, vector<int>>& letterToKey, const string& word) {
	int  length = word.size();
	for (int i = -1 * length + 1; i < 1; ++i) {
		Key* keyPointer = &(*(vi + i));
		keyPointer->setLetter(word[length + i - 1]);
		vector<int>* keys_of_letter = &letterToKey[keyPointer->getLetter()];
		if (find(keys_of_letter->begin(), keys_of_letter->end(), keyPointer->getNum()) == letterToKey[keyPointer->getLetter()].end())
		{
			keys_of_letter->push_back(keyPointer->getNum());

		}
		keyPointer->setUsed(true);
	}

}


void checkWord(vector<Key>& vk, map<char, vector<int>>& letterToKey, const string& word, char fc, int f_off, char sc = '-', int s_off = 1) {
	for (vector<Key>::iterator iter = vk.begin() + word.size() - 1; iter < vk.end(); ++iter) {
		bool valid = false;
		for (int i = 0; i < letterToKey[fc].size(); ++i) {
			valid = valid || ((iter + f_off)->getNum() == letterToKey[fc][i] && !(iter + f_off)->getUsed());
			if (valid)
				break;
		}
		if (!valid)
			continue;
		else {
			if (s_off < 1) {
				for (int i = 0; i < letterToKey[sc].size(); ++i) {
					if (valid && ((iter + s_off)->getNum() == letterToKey[sc][i]) && !(iter + s_off)->getUsed()) {
						decryptWord(iter, letterToKey, word);
						break;
					}
				}
			}
			else
				decryptWord(iter, letterToKey, word);
		}
	}
}

bool sanityCheck(map<char, vector<int>>& letterToKey, vector<Key>& tokens) {
	int max_keys[] = { 19, 7, 1, 2, 4, 10, 2, 2, 5, 6, 1, 1, 3, 2, 6, 6, 2, 1, 5, 5, 7, 2, 1, 2, 1, 2, 1 };
	bool flag = false;
	for (int i = 1; i < 27; ++i) {
		flag = (letterToKey[(char)(96 + i)].size() > max_keys[i]);
		if (flag)
			break;
	}
	return flag;
}



vector<Key> guessPlainTextTwo(string ct)
{
	stringstream ss(ct);
	string item;
	vector<Key> tokens;
	std::string::size_type sz;
	while (getline(ss, item, ',')) {
		tokens.push_back(Key(stoi(item, &sz)));
	}

	//char keyToLetter[106];
	map<char, vector<int>> letterToKey;
	int max[27] = { 19, 7, 1, 2, 4, 10, 2, 2, 5, 6, 1, 1, 3, 2, 6, 6, 2, 1, 5, 5, 7, 2, 1, 2, 1, 2, 1 };
	int filled[27];

	vector<int> pairs;
	if (true)
	{
		int prev = -1;			// The previous key
		map<int, int> key_pairs_occ; // Key that has a pair, number of times it occurred
		map<int, vector<int>> key_pairs_index;		// Keys that has a pair, where the pairs of those keys are 
		vector<int> popu_keys; // Vector of key pairs that occurred the most


		for (int i = 0; i < tokens.size(); ++i) {
			if (prev == tokens[i].getNum()) {			// Finds pairs of same keys
				key_pairs_occ[prev]++;
				key_pairs_index[prev].push_back(i - 1);
			}

			prev = tokens[i].getNum();
		}

		int occurences = 0;
		for (map<int, int>::iterator it = key_pairs_occ.begin(); it != key_pairs_occ.end(); ++it) {		// Finds the most popular pair of same keys
			if (it->second > occurences) {
				occurences = it->second;
				popu_keys.clear();
				popu_keys.push_back(it->first);
			}
			else if (it->second == occurences) {
				popu_keys.push_back(it->first);
			}
		}

		for (vector<int>::iterator i = popu_keys.begin(); i != popu_keys.end(); ++i) { // Loop through the most popular pairs
																					   // Set 'gibbousness' in ciphertext
			for (vector<int>::iterator iter = key_pairs_index[*i].begin(); iter != key_pairs_index[*i].end(); ++iter) { // Finds the first b in gibbousness
				tokens[*iter - 2].setLetter('g');
				tokens[*iter - 1].setLetter('i');
				tokens[*iter].setLetter('b');
				tokens[*iter + 1].setLetter('b');
				tokens[*iter + 2].setLetter('o');
				tokens[*iter + 3].setLetter('u');
				tokens[*iter + 4].setLetter('s');
				tokens[*iter + 5].setLetter('n');
				tokens[*iter + 6].setLetter('e');
				tokens[*iter + 7].setLetter('s');
				tokens[*iter + 8].setLetter('s');

				for (int j = -2; j < 9; ++j) {
					Key* keyPointer = &tokens[*iter + j];
					vector<int>* keys_of_letter = &letterToKey[keyPointer->getLetter()];
					if (find(keys_of_letter->begin(), keys_of_letter->end(), keyPointer->getNum()) == letterToKey[keyPointer->getLetter()].end())
						keys_of_letter->push_back(keyPointer->getNum());
					tokens[*iter + j].setUsed(true);
				}
			}
			// Set 'brisking' in ciphertext

			if (sanityCheck(letterToKey, tokens) && (i) != popu_keys.end() - 1) {
				for (vector<Key>::iterator vi = tokens.begin(); vi != tokens.end(); ++vi) {
					vi->setLetter(' ');
					vi->setUsed(false);
				}
				for (map<char, vector<int>>::iterator mi = letterToKey.begin(); mi != letterToKey.end(); ++mi) {
					mi->second.clear();
				}
				continue;
			}

			checkWord(tokens, letterToKey, "brisking", 'b', -7);

			if (sanityCheck(letterToKey, tokens) && (i) != popu_keys.end() - 1) {
				for (vector<Key>::iterator vi = tokens.begin(); vi != tokens.end(); ++vi) {
					vi->setLetter(' ');
					vi->setUsed(false);
				}
				for (map<char, vector<int>>::iterator mi = letterToKey.begin(); mi != letterToKey.end(); ++mi) {
					mi->second.clear();
				}
				continue;
			}

			checkWord(tokens, letterToKey, "rankly", 'k', -2);

			if (sanityCheck(letterToKey, tokens) && (i) != popu_keys.end() - 1) {
				for (vector<Key>::iterator vi = tokens.begin(); vi != tokens.end(); ++vi) {
					vi->setLetter(' ');
					vi->setUsed(false);
				}
				for (map<char, vector<int>>::iterator mi = letterToKey.begin(); mi != letterToKey.end(); ++mi) {
					mi->second.clear();
				}
				continue;
			}
			checkWord(tokens, letterToKey, "nymphal", 'y', -5);

			if (sanityCheck(letterToKey, tokens) && (i) != popu_keys.end() - 1) {
				for (vector<Key>::iterator vi = tokens.begin(); vi != tokens.end(); ++vi) {
					vi->setLetter(' ');
					vi->setUsed(false);
				}
				for (map<char, vector<int>>::iterator mi = letterToKey.begin(); mi != letterToKey.end(); ++mi) {
					mi->second.clear();
				}
				continue;
			}
			checkWord(tokens, letterToKey, "meaningless", 's', -1, 's', 0);

			if (sanityCheck(letterToKey, tokens) && (i) != popu_keys.end() - 1) {
				for (vector<Key>::iterator vi = tokens.begin(); vi != tokens.end(); ++vi) {
					vi->setLetter(' ');
					vi->setUsed(false);
				}
				for (map<char, vector<int>>::iterator mi = letterToKey.begin(); mi != letterToKey.end(); ++mi) {
					mi->second.clear();
				}
				continue;
			}

			checkWord(tokens, letterToKey, "meaningless", 'm', -10, 'g', -4);

			if (sanityCheck(letterToKey, tokens) && (i) != popu_keys.end() - 1) {
				for (vector<Key>::iterator vi = tokens.begin(); vi != tokens.end(); ++vi) {
					vi->setLetter(' ');
					vi->setUsed(false);
				}
				for (map<char, vector<int>>::iterator mi = letterToKey.begin(); mi != letterToKey.end(); ++mi) {
					mi->second.clear();
				}
				continue;
			}
			checkWord(tokens, letterToKey, "maturates", 'm', -8, 's', -4);

			if (sanityCheck(letterToKey, tokens) && (i) != popu_keys.end() - 1) {
				for (vector<Key>::iterator vi = tokens.begin(); vi != tokens.end(); ++vi) {
					vi->setLetter(' ');
					vi->setUsed(false);
				}
				for (map<char, vector<int>>::iterator mi = letterToKey.begin(); mi != letterToKey.end(); ++mi) {
					mi->second.clear();
				}
				continue;
			}

			checkWord(tokens, letterToKey, "maturates", 'm', -8, 'u', -5);

			if (sanityCheck(letterToKey, tokens) && (i) != popu_keys.end() - 1) {
				for (vector<Key>::iterator vi = tokens.begin(); vi != tokens.end(); ++vi) {
					vi->setLetter(' ');
					vi->setUsed(false);
				}
				for (map<char, vector<int>>::iterator mi = letterToKey.begin(); mi != letterToKey.end(); ++mi) {
					mi->second.clear();
				}
				continue;
			}
			checkWord(tokens, letterToKey, "freelancing", 'l', -6, 'g', 0);

			if (sanityCheck(letterToKey, tokens) && (i) != popu_keys.end() - 1) {
				for (vector<Key>::iterator vi = tokens.begin(); vi != tokens.end(); ++vi) {
					vi->setLetter(' ');
					vi->setUsed(false);
				}
				for (map<char, vector<int>>::iterator mi = letterToKey.begin(); mi != letterToKey.end(); ++mi) {
					mi->second.clear();
				}
				continue;
			}

			checkWord(tokens, letterToKey, "sampling", 'p', -4, 'g', 0);

			if (sanityCheck(letterToKey, tokens) && (i) != popu_keys.end() - 1) {
				for (vector<Key>::iterator vi = tokens.begin(); vi != tokens.end(); ++vi) {
					vi->setLetter(' ');
					vi->setUsed(false);
				}
				for (map<char, vector<int>>::iterator mi = letterToKey.begin(); mi != letterToKey.end(); ++mi) {
					mi->second.clear();
				}
				continue;
			}
			checkWord(tokens, letterToKey, "energize", 'g', -3, 'r', -4);

			if (sanityCheck(letterToKey, tokens) && (i) != popu_keys.end() - 1) {
				for (vector<Key>::iterator vi = tokens.begin(); vi != tokens.end(); ++vi) {
					vi->setLetter(' ');
					vi->setUsed(false);
				}
				for (map<char, vector<int>>::iterator mi = letterToKey.begin(); mi != letterToKey.end(); ++mi) {
					mi->second.clear();
				}
				continue;
			}
			checkWord(tokens, letterToKey, "swells", 'l', -2, 'l', -1);

			if (sanityCheck(letterToKey, tokens) && (i) != popu_keys.end() - 1) {
				for (vector<Key>::iterator vi = tokens.begin(); vi != tokens.end(); ++vi) {
					vi->setLetter(' ');
					vi->setUsed(false);
				}
				for (map<char, vector<int>>::iterator mi = letterToKey.begin(); mi != letterToKey.end(); ++mi) {
					mi->second.clear();
				}
				continue;
			}

			for (vector<Key>::iterator iter = tokens.begin() + 8; iter < tokens.end(); ++iter) {
				for (int i = 0; i < letterToKey['i'].size(); ++i) {
					if ((iter - 7)->getNum() == letterToKey['i'][i] && !(iter - 7)->getUsed()) {
						for (int j = 0; j < letterToKey['l'].size(); ++j) {
							if (((iter - 5)->getNum() == letterToKey['l'][j]) && !(iter - 5)->getUsed()) {
								for (int k = 0; k < letterToKey['s'].size(); ++k) {
									if (((iter)->getNum() == letterToKey['s'][k]) && !(iter)->getUsed()) {
										decryptWord(iter, letterToKey, "violators");
									}
								}
							}
						}
					}
				}

			}

			printLetterKey(letterToKey);

			if (sanityCheck(letterToKey, tokens) && (i) != popu_keys.end() - 1) {
				for (vector<Key>::iterator vi = tokens.begin(); vi != tokens.end(); ++vi) {
					vi->setLetter(' ');
					vi->setUsed(false);
				}
				for (map<char, vector<int>>::iterator mi = letterToKey.begin(); mi != letterToKey.end(); ++mi) {
					mi->second.clear();
				}
				continue;
			}

			//			checkWord(tokens, letterToKey, "violators", 'l', -5, 's', 0);

			checkWord(tokens, letterToKey, "travestied", 'v', -6, 's', -4);

			if (sanityCheck(letterToKey, tokens) && (i) != popu_keys.end() - 1) {
				for (vector<Key>::iterator vi = tokens.begin(); vi != tokens.end(); ++vi) {
					vi->setLetter(' ');
					vi->setUsed(false);
				}
				for (map<char, vector<int>>::iterator mi = letterToKey.begin(); mi != letterToKey.end(); ++mi) {
					mi->second.clear();
				}
				continue;
			}
			checkWord(tokens, letterToKey, "dextrins", 'r', -3, 's', 0);

			if (sanityCheck(letterToKey, tokens) && (i) != popu_keys.end() - 1) {
				for (vector<Key>::iterator vi = tokens.begin(); vi != tokens.end(); ++vi) {
					vi->setLetter(' ');
					vi->setUsed(false);
				}
				for (map<char, vector<int>>::iterator mi = letterToKey.begin(); mi != letterToKey.end(); ++mi) {
					mi->second.clear();
				}
				continue;
			}
			checkWord(tokens, letterToKey, "expatiations", 'x', -10, 'e', -11);

			if (sanityCheck(letterToKey, tokens) && (i) != popu_keys.end() - 1) {
				for (vector<Key>::iterator vi = tokens.begin(); vi != tokens.end(); ++vi) {
					vi->setLetter(' ');
					vi->setUsed(false);
				}
				for (map<char, vector<int>>::iterator mi = letterToKey.begin(); mi != letterToKey.end(); ++mi) {
					mi->second.clear();
				}
				continue;
			}

			checkWord(tokens, letterToKey, "stovepipes", 'p', -4, 'p', -2);

			if (sanityCheck(letterToKey, tokens) && (i) != popu_keys.end() - 1) {
				for (vector<Key>::iterator vi = tokens.begin(); vi != tokens.end(); ++vi) {
					vi->setLetter(' ');
					vi->setUsed(false);
				}
				for (map<char, vector<int>>::iterator mi = letterToKey.begin(); mi != letterToKey.end(); ++mi) {
					mi->second.clear();
				}
				continue;
			}


			checkWord(tokens, letterToKey, "maturates", 'm', -8, 'r', -4);

			if (sanityCheck(letterToKey, tokens) && (i) != popu_keys.end() - 1) {
				for (vector<Key>::iterator vi = tokens.begin(); vi != tokens.end(); ++vi) {
					vi->setLetter(' ');
					vi->setUsed(false);
				}
				for (map<char, vector<int>>::iterator mi = letterToKey.begin(); mi != letterToKey.end(); ++mi) {
					mi->second.clear();
				}
				continue;
			}

			checkWord(tokens, letterToKey, "meaningless", 'm', -10, 'g', -4);

			if (sanityCheck(letterToKey, tokens) && (i) != popu_keys.end() - 1) {
				for (vector<Key>::iterator vi = tokens.begin(); vi != tokens.end(); ++vi) {
					vi->setLetter(' ');
					vi->setUsed(false);
				}
				for (map<char, vector<int>>::iterator mi = letterToKey.begin(); mi != letterToKey.end(); ++mi) {
					mi->second.clear();
				}
				continue;
			}

			checkWord(tokens, letterToKey, "finale", 'a', -2, 'n', -3);
			if (sanityCheck(letterToKey, tokens) && (i) != popu_keys.end() - 1) {
				for (vector<Key>::iterator vi = tokens.begin(); vi != tokens.end(); ++vi) {
					vi->setLetter(' ');
					vi->setUsed(false);
				}
				for (map<char, vector<int>>::iterator mi = letterToKey.begin(); mi != letterToKey.end(); ++mi) {
					mi->second.clear();
				}
				continue;
			}
			for (vector<Key>::iterator iter = tokens.begin() + 9; iter < tokens.end(); ++iter) {
				for (int i = 0; i < letterToKey['e'].size(); ++i) {
					if ((iter - 8)->getNum() == letterToKey['e'][i] && !(iter - 8)->getUsed()) {
						for (int j = 0; j < letterToKey['r'].size(); ++j) {
							if (((iter - 4)->getNum() == letterToKey['r'][j]) && !(iter - 4)->getUsed()) {
								for (int k = 0; k < letterToKey['s'].size(); ++k) {
									if (((iter)->getNum() == letterToKey['s'][k]) && !(iter)->getUsed()) {
										decryptWord(iter, letterToKey, "jeopardous");
									}
								}
							}
						}
					}
				}

			}

			if (sanityCheck(letterToKey, tokens) && (i) != popu_keys.end() - 1) {
				for (vector<Key>::iterator vi = tokens.begin(); vi != tokens.end(); ++vi) {
					vi->setLetter(' ');
					vi->setUsed(false);
				}
				for (map<char, vector<int>>::iterator mi = letterToKey.begin(); mi != letterToKey.end(); ++mi) {
					mi->second.clear();
				}
				continue;
			}

			checkWord(tokens, letterToKey, "nested", 'n', -5, 's', -3);

			if (sanityCheck(letterToKey, tokens) && (i) != popu_keys.end() - 1) {
				for (vector<Key>::iterator vi = tokens.begin(); vi != tokens.end(); ++vi) {
					vi->setLetter(' ');
					vi->setUsed(false);
				}
				for (map<char, vector<int>>::iterator mi = letterToKey.begin(); mi != letterToKey.end(); ++mi) {
					mi->second.clear();
				}
				continue;
			}
			checkWord(tokens, letterToKey, "cottoned", 't', -5, 't', -4);

			if (sanityCheck(letterToKey, tokens) && (i) != popu_keys.end() - 1) {
				for (vector<Key>::iterator vi = tokens.begin(); vi != tokens.end(); ++vi) {
					vi->setLetter(' ');
					vi->setUsed(false);
				}
				for (map<char, vector<int>>::iterator mi = letterToKey.begin(); mi != letterToKey.end(); ++mi) {
					mi->second.clear();
				}
				continue;
			}

			checkWord(tokens, letterToKey, "hope", 'p', -1, 'h', -3);

			if (sanityCheck(letterToKey, tokens) && (i) != popu_keys.end() - 1) {
				for (vector<Key>::iterator vi = tokens.begin(); vi != tokens.end(); ++vi) {
					vi->setLetter(' ');
					vi->setUsed(false);
				}
				for (map<char, vector<int>>::iterator mi = letterToKey.begin(); mi != letterToKey.end(); ++mi) {
					mi->second.clear();
				}
				continue;
			}

			checkWord(tokens, letterToKey, "freelancing", 'e', -7, 'e', -8);

			if (sanityCheck(letterToKey, tokens) && (i) != popu_keys.end() - 1) {
				for (vector<Key>::iterator vi = tokens.begin(); vi != tokens.end(); ++vi) {
					vi->setLetter(' ');
					vi->setUsed(false);
				}
				for (map<char, vector<int>>::iterator mi = letterToKey.begin(); mi != letterToKey.end(); ++mi) {
					mi->second.clear();
				}
				continue;
			}

			checkWord(tokens, letterToKey, "violators", 'i', -7, 'v', -8);

			if (sanityCheck(letterToKey, tokens) && (i) != popu_keys.end() - 1) {
				for (vector<Key>::iterator vi = tokens.begin(); vi != tokens.end(); ++vi) {
					vi->setLetter(' ');
					vi->setUsed(false);
				}
				for (map<char, vector<int>>::iterator mi = letterToKey.begin(); mi != letterToKey.end(); ++mi) {
					mi->second.clear();
				}
				continue;
			}

			checkWord(tokens, letterToKey, "jeopardous", 'j', -9, 'e', -8);

			if (sanityCheck(letterToKey, tokens) && (i) != popu_keys.end() - 1) {
				for (vector<Key>::iterator vi = tokens.begin(); vi != tokens.end(); ++vi) {
					vi->setLetter(' ');
					vi->setUsed(false);
				}
				for (map<char, vector<int>>::iterator mi = letterToKey.begin(); mi != letterToKey.end(); ++mi) {
					mi->second.clear();
				}
				continue;
			}
			checkWord(tokens, letterToKey, "sampling", 's', -7, 'a', -6);

			if (sanityCheck(letterToKey, tokens) && (i) != popu_keys.end() - 1) {
				for (vector<Key>::iterator vi = tokens.begin(); vi != tokens.end(); ++vi) {
					vi->setLetter(' ');
					vi->setUsed(false);
				}
				for (map<char, vector<int>>::iterator mi = letterToKey.begin(); mi != letterToKey.end(); ++mi) {
					mi->second.clear();
				}
				continue;
			}

			checkWord(tokens, letterToKey, "energize", 'e', -5, 'r', -4);

			if (sanityCheck(letterToKey, tokens) && (i) != popu_keys.end() - 1) {
				for (vector<Key>::iterator vi = tokens.begin(); vi != tokens.end(); ++vi) {
					vi->setLetter(' ');
					vi->setUsed(false);
				}
				for (map<char, vector<int>>::iterator mi = letterToKey.begin(); mi != letterToKey.end(); ++mi) {
					mi->second.clear();
				}
				continue;
			}

			checkWord(tokens, letterToKey, "stovepipes", 'p', -4, 'p', -2);

			if (sanityCheck(letterToKey, tokens) && (i) != popu_keys.end() - 1) {
				for (vector<Key>::iterator vi = tokens.begin(); vi != tokens.end(); ++vi) {
					vi->setLetter(' ');
					vi->setUsed(false);
				}
				for (map<char, vector<int>>::iterator mi = letterToKey.begin(); mi != letterToKey.end(); ++mi) {
					mi->second.clear();
				}
				continue;
			}

			checkWord(tokens, letterToKey, "expatiations", 'x', -10, 'e', -11);

			if (sanityCheck(letterToKey, tokens) && (i) != popu_keys.end() - 1) {
				for (vector<Key>::iterator vi = tokens.begin(); vi != tokens.end(); ++vi) {
					vi->setLetter(' ');
					vi->setUsed(false);
				}
				for (map<char, vector<int>>::iterator mi = letterToKey.begin(); mi != letterToKey.end(); ++mi) {
					mi->second.clear();
				}
				continue;
			}

			if (sanityCheck(letterToKey, tokens) && (i) != popu_keys.end() - 1) {
				for (vector<Key>::iterator vi = tokens.begin(); vi != tokens.end(); ++vi) {
					vi->setLetter(' ');
					vi->setUsed(false);
				}
				for (map<char, vector<int>>::iterator mi = letterToKey.begin(); mi != letterToKey.end(); ++mi) {
					mi->second.clear();
				}
				continue;
			}
			return tokens;
		}
	}
}

int main(int argc, char* argv[])
{

	if(argc != 3)
	{
		cout<< "usage: "<<argv[0] <<" <1 or 2> <filename>\n";
		exit(1);
	}	
	
	stringstream strVal(argv[1]);
	int test12;
	strVal >> test12;
	if(test12 != 1 && test12 != 2)
	{
		cout<< "Enter only 1 or 2\n";
		exit(1);
	}

	ifstream inFile ;
	inFile.open(argv[2]);
	string ct,s;
	if(!inFile.is_open())
	{
		cout<<"Could not open file\n";
		exit(1);
	}
	else
	{
		while(inFile >> s)
			ct += s;
	}
	
	if(test12 == 1)
	{
		cout<<"Test 1:"<<endl;
		int idx_pt = guessPlainTextOne(ct);
		if(idx_pt != -1)
			cout<<"My Plain test guess is:\n"<<pt[idx_pt]<<endl;
		else
			cout<<"Something is wrong."<<endl;
	}
	else
	{
		cout <<"Test 2:"<< endl;
		vector<Key> decrypted_keys = guessPlainTextTwo(ct);

		cout << "Decrypting Message: " << endl;
		for (vector<Key>::iterator iter = decrypted_keys.begin(); iter != decrypted_keys.end(); ++iter) {
			cout << iter->getLetter();
		}
	}

	
	
	return 0;

}