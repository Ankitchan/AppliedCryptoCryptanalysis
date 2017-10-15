#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <map>
using namespace std;

// Plain Text Dictionary for Test1    
string pt[] = {"dipped ligatured cannier cohabitation cuddling coiffeuses pursuance roper eternizes nullo framable paddlings femur bebop demonstrational tuberculoid theocracy women reappraise oblongatae aphasias loftiness consumptive lip neurasthenically dutchmen grift discredited resourcefulness malfeasants swallowed jogger sayable lewder editorials demimondaine tzaritza arrogations wish indisputable reproduces hygrometries gamuts alight borderlines draggle reconsolidated anemometer rowels staggerers grands nu",
	"rereads predestines equippers cavitation bimolecular lucubrations cabin bettas quiverer prussians cosigner dressier bended dethronement inveigled davenport establish ganges rebroadcast supered bastiles willable abetted motionlessness demonic flatter bunyan securely tippiest tongue aw cotyledonal roomettes underlies miffs inducement overintellectually fertilize spasmodic bacchanal birdbrains decoct snakebite galliard boson headmistress unextended provence weakling pirana fiend lairds argils comma",
	"trawling responsiveness tastiest pulsed restamps telescoping pneuma lampoonist divas theosophists pustules checkrowed compactor conditionals envy hairball footslogs wasteful conjures deadfall stagnantly procure barked balmier bowery vagary beaten capitalized undersized towpath envisages thermoplastic rationalizers professions workbench underarm trudger icicled incisive oilbirds citrins chambrays ungainliness weazands prehardened dims determinants fishskin cleanable henceforward misarranges fine",
	"dean iller playbooks resource anesthetic credibilities nonplus tzetzes incursions stooged envelopments girdling risibility thrum repeaters catheterizing misbestowed cursing malingerers ensconces lippiest accost superannuate slush opinionated rememberer councils mishandling drivels juryless slashers tangent roistering scathing apprenticing fleabite sault achier quantize registrable nobbler sheaf natantly kashmirs dittoes scanned emissivity iodize dually refunded portliest setbacks eureka needines",
	"mammate punners octette asylum nonclinically trotters slant collocation cardiology enchants ledge deregulated bottommost capsulate biotechnologies subtended cloddiest training joneses catafalque fieldmice hostels affect shrimper differentiations metacarpus amebas sweeter shiatsu oncoming tubeless menu professing apostatizing moreover eumorphic casked euphemistically programmability campaniles chickpea inactivates crossing defoggers reassures tableland doze reassembled striate precocious noncomba"
};

int countVal(std::vector<int> v, int val)
{
	int count = 0;
	for(std::vector<int>::iterator it = v.begin(); it != v.end();++it)
	{
		if(*it == val)
			count++;
	}
	return count;
}
bool checkFirstPT(vector<int> tokens)
{
	//Condition for b are 29,95,115,117,139,177,315,385,427 & //count of b should be 9
    	int idxB = tokens[29];
    	if(idxB == tokens[95] && idxB == tokens[115] &&  idxB == tokens[117] && idxB == tokens[139] && idxB == tokens[177] && idxB == tokens[315] && idxB == tokens[385] && idxB== tokens[427] &&  countVal(tokens, idxB) == 9)
    	{
    		
			//Condition of j is 1
			if( countVal(tokens, tokens[304]) == 1)
			{
				
				
				//condition of q is that should occur only once
				if(1)
				{
					//condition for v is it should occour at 215
					
					if( countVal(tokens, tokens[215]) == 1)
					{
						//condition for z is it occurs at 80,351,356 and  std::count is 3
						int idxZ = tokens[80];
						if(idxZ == tokens[351] && idxZ == tokens[356] &&  countVal(tokens, idxZ) == 3)
							return 1;
					}
				}
				
			}
    	
    	}
    	return 0;
}

bool checkSecondPT(vector<int> tokens)
{
	//condition of b are it should occur on 41,57,68,72,116,160,175,193,207,212,250,373,383,387,406,420
	int idxArrB[] = {57,68,72,116,160,175,193,207,212,250,373,383,387,406,420};
	int idxB = tokens[41];
	for(int i=0;i<sizeof(idxArrB)/sizeof(idxArrB[0]);i++)
	{
		if(!(idxB == tokens[i]))
			return 0;
	}
	if( countVal(tokens, idxB) == 16)
	{
		//condition of k is it should occour at 404,462
		int idxK = tokens[404];
		if(idxK == tokens[462] &&  countVal(tokens, idxK) == 2)
		{
			
			//condtion of q is that it should occur 21,79
			int idxQ = tokens[21];
			if (idxQ == tokens[79] && countVal(tokens, idxK) == 2)
			{
				//condtion of v is it should occur at 6 times --> CHANGE IT
				int idxArrV[] = {82, 138, 148, 335, 453};
				int idxV = tokens[32];
				for (int i = 0; i<sizeof(idxArrV) / sizeof(idxArrV[0]); i++)
				{
					if (!(idxV == tokens[i]))
						return 0;
				}
				if (countVal(tokens, idxV) == 6)
				{
					//condition of x is it should occur 442
					
					if(  countVal(tokens, tokens[442]) == 1)
					{
						//condition of z is it should occur 360
						if( countVal(tokens, tokens[360]) == 1)
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
	int idxArrB[] = {211, 218, 226, 240, 332, 375, 393, 466};
	int idxB = tokens[150];
	for (int i = 0; i<sizeof(idxArrB) / sizeof(idxArrB[0]); i++)
	{
		if (!(idxB == tokens[i]))
			return 0;
	}
	if (countVal(tokens, idxB) == 9)
	{
		//condition of k is it should occour at 111, 214, 331, 456
		int idxK = tokens[214, 331, 456];
		if (idxK == tokens[111] && countVal(tokens, idxK) == 4)
		{

			//condtion of j is that it should occur 177
			if (countVal(tokens, tokens[177]) == 1)
			{
				//condtion of v is it should occur at 17, 81, 143, 233, 280, 369 
				int idxArrV[] = { 81, 143, 233, 280, 369 };
				int idxV = tokens[17];
				for (int i = 0; i<sizeof(idxArrV) / sizeof(idxArrV[0]); i++)
				{
					if (!(idxV == tokens[i]))
						return 0;
				}
				if (countVal(tokens, idxV) == 6)
				{
					//condition of x is it should never occur

					if (1)
					{
						//condition of z is it should occur 255, 266, 311, 415
						int idxZ = tokens[255];
						if (idxZ == tokens[266] && idxZ == tokens[311] && idxZ == tokens[415] && countVal(tokens, idxZ) == 4)
							return 1;
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
	for (int i = 0; i<sizeof(idxArrB) / sizeof(idxArrB[0]); i++)
	{
		if (!(idxB == tokens[i]))
			return 0;
	}
	if (countVal(tokens, idxB) == 10)
	{
		//condition of k is it should occour at 18, 407, 482, 489
		int idxK = tokens[407, 482, 489];
		if (idxK == tokens[18] && countVal(tokens, idxK) == 4)
		{

			//condtion of q is that it should never occur
			if (1)
			{
				//condtion of v is it should occur at 17, 81, 143, 233, 280, 369
				int idxArrV[] = { 81, 143, 233, 280, 369 };
				int idxV = tokens[17];
				for (int i = 0; i<sizeof(idxArrV) / sizeof(idxArrV[0]); i++)
				{
					if (!(idxV == tokens[i]))
						return 0;
				}
				if (countVal(tokens, idxV) == 6)
				{
					//condition of j is it should occur 282

					if (countVal(tokens, tokens[282]) == 1)
					{
						//condition of z is it should occur 64, 67, 148, 369, 447
						int idxArrZ[] = { 67, 148, 369, 447 };
						int idxZ = tokens[64];
						for (int i = 0; i<sizeof(idxArrZ) / sizeof(idxArrZ[0]); i++)
						{
							if (!(idxZ == tokens[i]))
								return 0;
						}
						if (countVal(tokens, idxZ) == 5)
							return 1;
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
	for (int i = 0; i<sizeof(idxArrB) / sizeof(idxArrB[0]); i++)
	{
		if (!(idxB == tokens[i]))
			return 0;
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
				int idxArrV[] = { 441 };
				int idxV = tokens[332];
				for (int i = 0; i<sizeof(idxArrV) / sizeof(idxArrV[0]); i++)
				{
					if (!(idxV == tokens[i]))
						return 0;
				}
				if (countVal(tokens, idxV) == 2)
				{
					//condition of j is it should occur 176

					if (countVal(tokens, tokens[176]) == 1)
					{
						//condition of z is it should occur 332, 458
						int idxZ = tokens[332];
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
    	/*else if(checkThirdPT(tokens))
    		return 2;
    	else if(checkFourthPT(tokens))
    		return 3;
    	else if(checkFifthPT(tokens))
    		return 4;*/
    	//else
    		//return 5;
    }
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

class Key {
public:
	Key(int aNum): num(aNum), used(false), letter(' ') {}

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

class Info {
	Info(int aNum, int numOccur, int index) : num(aNum), occurences(numOccur), index(index) {}

	int getNum() {
		return num;
	}

	bool getOccur() {
		return occurences;
	}

	char getIndex() {
		return index;
	}

private:
	int num;
	int occurences;
	int index;
};

void decryptKey(vector<Key>& text, int aKey,  char letter) {
	for (vector<Key>::iterator it = text.begin(); it != text.end(); ++it) {
		if (it->getNum == aKey) {
			it->setLetter(letter);
			it->setUsed(true);
		}
	}
}

int charToInt(char c) {
	return (int)c - 96;
}

int guessPlainTextTwo(string ct)
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
	if (tokens.size() >= 500)
	{
		int prev = -1;
		map<int, int> key_pairs_occ;
		map<int, vector<int>> key_pairs_index;
		vector<int> popu_keys;

		for (int i = 0; i < tokens.size(); ++i) {
			
			if (prev == tokens[i].getNum()) {			// Finds pairs of same keys
				key_pairs_occ[prev]++;
				key_pairs_index[prev].push_back(i - 1);
			}
			int occurences = 0;
			for (map<int, int>::iterator it = key_pairs_occ.begin(); it != key_pairs_occ.end(); ++it) {		// Finds the most popular pair of same keys
				if (it->second > occurences) {
					occurences = it->second;
					popu_keys.clear();
				}
				if (it->second == occurences) {
					popu_keys.push_back(it->first);
				}
			}

		}
		// Looping through possible pairs to be 'b'
		for (vector<int>::iterator i = popu_keys.begin(); i != popu_keys.end(); ++i) { 
			//keyToLetter[*i] = 'b';
			// Set 'gibbousness in ciphertex
			for (vector<int>::iterator iter = key_pairs_index[*i].begin(); iter != key_pairs_index[*i].end(); ++iter) {
				tokens[*(iter - 2)].setLetter('g');
				tokens[*(iter - 1)].setLetter('i');
				tokens[*(iter)].setLetter('b');
				tokens[*(iter + 1)].setLetter('b');
				tokens[*(iter + 2)].setLetter('o');
				tokens[*(iter + 3)].setLetter('u');
				tokens[*(iter + 4)].setLetter('s');
				tokens[*(iter + 5)].setLetter('n');
				tokens[*(iter + 6)].setLetter('e');
				tokens[*(iter + 7)].setLetter('s');
				tokens[*(iter + 8)].setLetter('s');


				for (int j = -3; j < 9; ++j) {
					//keyToLetter[tokens[*(iter + j)].getNum()] = tokens[*(iter + j)].getLetter();
					Key* keyPointer = &tokens[*(iter + j)];
					vector<int>* keys_of_letter = &letterToKey[keyPointer->getLetter()];
					if (find(keys_of_letter->begin(), keys_of_letter->end(), keyPointer->getNum()) == letterToKey[keyPointer->getLetter()].end())
						keys_of_letter->push_back(keyPointer->getNum());
					tokens[*(iter + j)].setUsed(true);
				}

			}

			// Set 'briskly' in ciphertext
			for (vector<Key>::iterator iter = tokens.begin(); iter < tokens.end(); ++iter) {
				if ((iter - 7)->getNum() == *i && !(iter->getUsed())) {
					tokens[(iter - 8)->getNum()].setLetter('b');
					tokens[(iter - 7)->getNum()].setLetter('r');
					tokens[(iter - 6)->getNum()].setLetter('i');
					tokens[(iter - 5)->getNum()].setLetter('s');
					tokens[(iter - 4)->getNum()].setLetter('k');
					tokens[(iter - 3)->getNum()].setLetter('i');
					tokens[(iter - 2)->getNum()].setLetter('n');
					tokens[(iter - 1)->getNum()].setLetter('g');

					for (int j = -9; j < 1; ++j) {
						//if (keyToLetter[(iter + j)->getNum()] == ' ')
						//	keyToLetter[(iter + j)->getNum()] = (iter + j)->getLetter();
						Key* keyPointer = &(*(iter + j));
						vector<int>* keys_of_letter = &letterToKey[keyPointer->getLetter()];
						if (find(keys_of_letter->begin(), keys_of_letter->end(), keyPointer->getNum()) == letterToKey[keyPointer->getLetter()].end())
							keys_of_letter->push_back(keyPointer->getNum());
						keyPointer->setUsed(true);
					}
				}
			}

			for (vector<Key>::iterator iter = tokens.begin(); iter < tokens.end(); ++iter) {
				if ((iter - 2)->getNum() == letterToKey['k'][0] && !(iter->getUsed())) {
					tokens[(iter - 6)->getNum()].setLetter('r');
					tokens[(iter - 5)->getNum()].setLetter('a');
					tokens[(iter - 4)->getNum()].setLetter('n');
					tokens[(iter - 3)->getNum()].setLetter('k');
					tokens[(iter - 2)->getNum()].setLetter('l');
					tokens[(iter - 1)->getNum()].setLetter('y');

					for (int j = -7; j < 1; ++j) {
						//if (keyToLetter[(iter + j)->getNum()] != ' ')
						//	keyToLetter[(iter + j)->getNum()] = (iter + j)->getLetter();
						Key* keyPointer = &(*(iter + j));
						vector<int>* keys_of_letter = &letterToKey[keyPointer->getLetter()];
						if (find(keys_of_letter->begin(), keys_of_letter->end(), keyPointer->getNum()) == letterToKey[keyPointer->getLetter()].end())
							keys_of_letter->push_back(keyPointer->getNum());
						keyPointer->setUsed(true);
					}
				}
			}

			for (vector<Key>::iterator iter = tokens.begin(); iter < tokens.end(); ++iter) {
				if (((iter - 4)->getNum() == letterToKey['g'][0] || ((iter - 4)->getNum() == letterToKey['g'][1])) && !(iter->getUsed())) { // RISK
					tokens[(iter - 8)->getNum()].setLetter('e');
					tokens[(iter - 7)->getNum()].setLetter('n');
					tokens[(iter - 6)->getNum()].setLetter('e');
					tokens[(iter - 5)->getNum()].setLetter('r');
					tokens[(iter - 4)->getNum()].setLetter('g');
					tokens[(iter - 3)->getNum()].setLetter('i');
					tokens[(iter - 2)->getNum()].setLetter('z');
					tokens[(iter - 1)->getNum()].setLetter('e');

					for (int j = -9; j < 1; ++j) {
						//if (keyToLetter[(iter + j)->getNum()] != ' ')
						//	keyToLetter[(iter + j)->getNum()] = (iter + j)->getLetter();
						Key* keyPointer = &(*(iter + j));
						vector<int>* keys_of_letter = &letterToKey[keyPointer->getLetter()];
						if (find(keys_of_letter->begin(), keys_of_letter->end(), keyPointer->getNum()) == letterToKey[keyPointer->getLetter()].end())
							keys_of_letter->push_back(keyPointer->getNum());
						keyPointer->setUsed(true);
					}
				}
			}

			for (vector<Key>::iterator iter = tokens.begin(); iter < tokens.end(); ++iter) {
				if (((iter - 6)->getNum() == letterToKey['y'][0] || ((iter - 6)->getNum() == letterToKey['y'][1])) && !(iter->getUsed())) { //RISK
					tokens[(iter - 7)->getNum()].setLetter('n');
					tokens[(iter - 6)->getNum()].setLetter('y');
					tokens[(iter - 5)->getNum()].setLetter('m');
					tokens[(iter - 4)->getNum()].setLetter('p');
					tokens[(iter - 3)->getNum()].setLetter('h');
					tokens[(iter - 2)->getNum()].setLetter('a');
					tokens[(iter - 1)->getNum()].setLetter('l');

					for (int j = -8; j < 1; ++j) {
						//if (keyToLetter[(iter + j)->getNum()] != ' ')
						//	keyToLetter[(iter + j)->getNum()] = (iter + j)->getLetter();
						Key* keyPointer = &(*(iter + j));
						vector<int>* keys_of_letter = &letterToKey[keyPointer->getLetter()];
						if (find(keys_of_letter->begin(), keys_of_letter->end(), keyPointer->getNum()) == letterToKey[keyPointer->getLetter()].end())
							keys_of_letter->push_back(keyPointer->getNum());
						keyPointer->setUsed(true);
					}
				}
			}

			for (vector<Key>::iterator iter = tokens.begin(); iter < tokens.end(); ++iter) {
				if (((iter - 5)->getNum() == letterToKey['p'][0] || ((iter - 5)->getNum() == letterToKey['p'][1])) &&
					((iter - 1)->getNum() == letterToKey['g'][0] || ((iter - 1)->getNum() == letterToKey['g'][1])) &&
					!(iter->getUsed())) { //RISK

					tokens[(iter - 8)->getNum()].setLetter('s');
					tokens[(iter - 7)->getNum()].setLetter('a');
					tokens[(iter - 6)->getNum()].setLetter('m');
					tokens[(iter - 5)->getNum()].setLetter('p');
					tokens[(iter - 4)->getNum()].setLetter('l');
					tokens[(iter - 3)->getNum()].setLetter('i');
					tokens[(iter - 2)->getNum()].setLetter('n');
					tokens[(iter - 1)->getNum()].setLetter('g');

					for (int j = -9; j < 1; ++j) {
						//if (keyToLetter[(iter + j)->getNum()] != ' ')
						//	keyToLetter[(iter + j)->getNum()] = (iter + j)->getLetter();
						Key* keyPointer = &(*(iter + j));
						vector<int>* keys_of_letter = &letterToKey[keyPointer->getLetter()];
						if (find(keys_of_letter->begin(), keys_of_letter->end(), keyPointer->getNum()) == letterToKey[keyPointer->getLetter()].end())
							keys_of_letter->push_back(keyPointer->getNum());
						keyPointer->setUsed(true);
					}
				}
			}

			for (vector<Key>::iterator iter = tokens.begin(); iter < tokens.end(); ++iter) {
				if (((iter - 5)->getNum() == letterToKey['p'][0] || ((iter - 5)->getNum() == letterToKey['p'][1])) &&
					((iter - 3)->getNum() == letterToKey['p'][0] || ((iter - 3)->getNum() == letterToKey['p'][1])) &&
					!(iter->getUsed())) { //RISK

					tokens[(iter - 10)->getNum()].setLetter('s');
					tokens[(iter - 9)->getNum()].setLetter('t');
					tokens[(iter - 8)->getNum()].setLetter('o');
					tokens[(iter - 7)->getNum()].setLetter('v');
					tokens[(iter - 6)->getNum()].setLetter('e');
					tokens[(iter - 5)->getNum()].setLetter('p');
					tokens[(iter - 4)->getNum()].setLetter('i');
					tokens[(iter - 3)->getNum()].setLetter('p');
					tokens[(iter - 2)->getNum()].setLetter('e');
					tokens[(iter - 1)->getNum()].setLetter('s');

					for (int j = -11; j < 1; ++j) {
						//if (keyToLetter[(iter + j)->getNum()] != ' ')
						//	keyToLetter[(iter + j)->getNum()] = (iter + j)->getLetter();
						Key* keyPointer = &(*(iter + j));
						vector<int>* keys_of_letter = &letterToKey[keyPointer->getLetter()];
						if (find(keys_of_letter->begin(), keys_of_letter->end(), keyPointer->getNum()) == letterToKey[keyPointer->getLetter()].end())
							keys_of_letter->push_back(keyPointer->getNum());
						keyPointer->setUsed(true);
					}
				}
			}

			for (vector<Key>::iterator iter = tokens.begin(); iter < tokens.end(); ++iter) {
				if (((iter-11)->getNum() == letterToKey['m'][0] || ((iter-11)->getNum() == letterToKey['m'][1])) &&
					((iter-5)->getNum() == letterToKey['g'][0] || ((iter-5)->getNum() == letterToKey['g'][1])) &&
					!(iter->getUsed())) {

					tokens[(iter - 11)->getNum()].setLetter('m');
					tokens[(iter - 10)->getNum()].setLetter('e');
					tokens[(iter - 9)->getNum()].setLetter('a');
					tokens[(iter - 8)->getNum()].setLetter('n');
					tokens[(iter - 7)->getNum()].setLetter('i');
					tokens[(iter - 6)->getNum()].setLetter('n');
					tokens[(iter - 5)->getNum()].setLetter('g');
					tokens[(iter - 4)->getNum()].setLetter('l');
					tokens[(iter - 3)->getNum()].setLetter('e');
					tokens[(iter - 2)->getNum()].setLetter('s');
					tokens[(iter - 1)->getNum()].setLetter('s');

					for (int j = -12; j < 1; ++j) {
						//if (keyToLetter[(iter + j)->getNum()] != ' ')
						//	keyToLetter[(iter + j)->getNum()] = (iter + j)->getLetter();
						Key* keyPointer = &(*(iter + j));
						vector<int>* keys_of_letter = &letterToKey[keyPointer->getLetter()];
						if (find(keys_of_letter->begin(), keys_of_letter->end(), keyPointer->getNum()) == letterToKey[keyPointer->getLetter()].end())
							keys_of_letter->push_back(keyPointer->getNum());
						keyPointer->setUsed(true);
					}
				}
			}

			for (vector<Key>::iterator iter = tokens.begin(); iter < tokens.end(); ++iter) {
				if (((iter - 3)->getNum() == letterToKey['l'][0] || ((iter - 3)->getNum() == letterToKey['l'][1]) || ((iter - 3)->getNum() == letterToKey['l'][2])) &&
					((iter - 2)->getNum() == letterToKey['l'][0] || ((iter - 2)->getNum() == letterToKey['l'][1]) || ((iter - 2)->getNum() == letterToKey['l'][2])) &&
					!(iter->getUsed())) {

					tokens[(iter - 6)->getNum()].setLetter('s');
					tokens[(iter - 5)->getNum()].setLetter('w');
					tokens[(iter - 4)->getNum()].setLetter('e');
					tokens[(iter - 3)->getNum()].setLetter('l');
					tokens[(iter - 2)->getNum()].setLetter('l');
					tokens[(iter - 1)->getNum()].setLetter('s');

					for (int j = -7; j < 1; ++j) {
						//if (keyToLetter[(iter + j)->getNum()] != ' ')
						//	keyToLetter[(iter + j)->getNum()] = (iter + j)->getLetter();
						Key* keyPointer = &(*(iter + j));
						vector<int>* keys_of_letter = &letterToKey[keyPointer->getLetter()];
						if (find(keys_of_letter->begin(), keys_of_letter->end(), keyPointer->getNum()) == letterToKey[keyPointer->getLetter()].end())
							keys_of_letter->push_back(keyPointer->getNum());
						keyPointer->setUsed(true);
					}
				}
			}

			for (vector<Key>::iterator iter = tokens.begin(); iter < tokens.end(); ++iter) {
				if (((iter - 6)->getNum() == letterToKey['l'][0] || ((iter - 6)->getNum() == letterToKey['l'][1]) || ((iter - 6)->getNum() == letterToKey['l'][2])) &&
					(((iter - 1))->getNum() == letterToKey['s'][0] || (((iter - 1))->getNum() == letterToKey['l'][1]) || (((iter - 1))->getNum() == letterToKey['s'][2]) || (((iter - 1))->getNum() == letterToKey['s'][3]) || (((iter - 1))->getNum() == letterToKey['s'][4])) &&
					!(iter->getUsed())) {

					tokens[(iter - 9)->getNum()].setLetter('v');
					tokens[(iter - 8)->getNum()].setLetter('i');
					tokens[(iter - 7)->getNum()].setLetter('o');
					tokens[(iter - 6)->getNum()].setLetter('l');
					tokens[(iter - 5)->getNum()].setLetter('a');
					tokens[(iter - 4)->getNum()].setLetter('t');
					tokens[(iter - 3)->getNum()].setLetter('o');
					tokens[(iter - 2)->getNum()].setLetter('r');
					tokens[(iter - 1)->getNum()].setLetter('s');

					for (int j = -10; j < 1; ++j) {
						//if (keyToLetter[(iter + j)->getNum()] != ' ')
						//	keyToLetter[(iter + j)->getNum()] = (iter + j)->getLetter();
						Key* keyPointer = &(*(iter + j));
						vector<int>* keys_of_letter = &letterToKey[keyPointer->getLetter()];
						if (find(keys_of_letter->begin(), keys_of_letter->end(), keyPointer->getNum()) == letterToKey[keyPointer->getLetter()].end())
							keys_of_letter->push_back(keyPointer->getNum());
						keyPointer->setUsed(true);
					}
				}
			}

			for (vector<Key>::iterator iter = tokens.begin(); iter < tokens.end(); ++iter) {
				if (((iter - 7)->getNum() == letterToKey['v'][0]) &&
					((iter - 5)->getNum() == letterToKey['s'][0] || ((iter - 5)->getNum() == letterToKey['l'][1]) || ((iter - 5)->getNum() == letterToKey['s'][2]) || ((iter - 5)->getNum() == letterToKey['s'][3]) || ((iter - 5)->getNum() == letterToKey['s'][4])) &&
					!(iter->getUsed())) {

					tokens[(iter - 10)->getNum()].setLetter('t');
					tokens[(iter - 9)->getNum()].setLetter('r');
					tokens[(iter - 8)->getNum()].setLetter('a');
					tokens[(iter - 7)->getNum()].setLetter('v');
					tokens[(iter - 6)->getNum()].setLetter('e');
					tokens[(iter - 5)->getNum()].setLetter('s');
					tokens[(iter - 4)->getNum()].setLetter('t');
					tokens[(iter - 3)->getNum()].setLetter('i');
					tokens[(iter - 2)->getNum()].setLetter('e');
					tokens[(iter - 1)->getNum()].setLetter('d');

					for (int j = -11; j < 1; ++j) {
						//if (keyToLetter[(iter + j)->getNum()] != ' ')
						//	keyToLetter[(iter + j)->getNum()] = (iter + j)->getLetter();
						Key* keyPointer = &(*(iter + j));
						vector<int>* keys_of_letter = &letterToKey[keyPointer->getLetter()];
						if (find(keys_of_letter->begin(), keys_of_letter->end(), keyPointer->getNum()) == letterToKey[keyPointer->getLetter()].end())
							keys_of_letter->push_back(keyPointer->getNum());
						keyPointer->setUsed(true);
					}
				}
			}

			for (vector<Key>::iterator iter = tokens.begin(); iter < tokens.end(); ++iter) {
				if (((iter - 2)->getNum() == letterToKey['l'][0]) || ((iter - 2)->getNum() == letterToKey['l'][1]) || ((iter - 2)->getNum() == letterToKey['l'][2]) &&
					((iter - 5)->getNum() == letterToKey['i'][0] || ((iter - 5)->getNum() == letterToKey['i'][1]) || ((iter - 5)->getNum() == letterToKey['i'][2]) || ((iter - 5)->getNum() == letterToKey['i'][3]) || ((iter - 5)->getNum() == letterToKey['i'][4]) || ((iter - 5)->getNum() == letterToKey['i'][5])) &&
					!(iter->getUsed())) {

					tokens[(iter - 6)->getNum()].setLetter('f');
					tokens[(iter - 5)->getNum()].setLetter('i');
					tokens[(iter - 4)->getNum()].setLetter('n');
					tokens[(iter - 3)->getNum()].setLetter('a');
					tokens[(iter - 2)->getNum()].setLetter('l');
					tokens[(iter - 1)->getNum()].setLetter('e');

					for (int j = -7; j < 1; ++j) {
						//if (keyToLetter[(iter + j)->getNum()] != ' ')
						//	keyToLetter[(iter + j)->getNum()] = (iter + j)->getLetter();
						Key* keyPointer = &(*(iter + j));
						vector<int>* keys_of_letter = &letterToKey[keyPointer->getLetter()];
						if (find(keys_of_letter->begin(), keys_of_letter->end(), keyPointer->getNum()) == letterToKey[keyPointer->getLetter()].end())
							keys_of_letter->push_back(keyPointer->getNum());
						keyPointer->setUsed(true);
					}
				}
			}

			for (vector<Key>::iterator iter = tokens.begin(); iter < tokens.end(); ++iter) {
				if (((iter - 2)->getNum() == letterToKey['l'][0]) || ((iter - 2)->getNum() == letterToKey['l'][1]) || ((iter - 2)->getNum() == letterToKey['l'][2]) &&
					((iter - 5)->getNum() == letterToKey['i'][0] || ((iter - 5)->getNum() == letterToKey['i'][1]) || ((iter - 5)->getNum() == letterToKey['i'][2]) || ((iter - 5)->getNum() == letterToKey['i'][3]) || ((iter - 5)->getNum() == letterToKey['i'][4]) || ((iter - 5)->getNum() == letterToKey['i'][5])) &&
					!(iter->getUsed())) {

					tokens[(iter - 8)->getNum()].setLetter('d');
					tokens[(iter - 7)->getNum()].setLetter('e');
					tokens[(iter - 6)->getNum()].setLetter('x');
					tokens[(iter - 5)->getNum()].setLetter('t');
					tokens[(iter - 4)->getNum()].setLetter('r');
					tokens[(iter - 3)->getNum()].setLetter('i');
					tokens[(iter - 2)->getNum()].setLetter('n');
					tokens[(iter - 1)->getNum()].setLetter('s');

					for (int j = -9; j < 1; ++j) {
						//if (keyToLetter[(iter + j)->getNum()] != ' ')
						//	keyToLetter[(iter + j)->getNum()] = (iter + j)->getLetter();
						Key* keyPointer = &(*(iter + j));
						vector<int>* keys_of_letter = &letterToKey[keyPointer->getLetter()];
						if (find(keys_of_letter->begin(), keys_of_letter->end(), keyPointer->getNum()) == letterToKey[keyPointer->getLetter()].end())
							keys_of_letter->push_back(keyPointer->getNum());
						keyPointer->setUsed(true);
					}
				}
			}

			for (vector<Key>::iterator iter = tokens.begin(); iter < tokens.end(); ++iter) {
				for (vector<Key>::iterator iter2 = iter; iter2 < tokens.end(); ++iter) {
			
			}

		}
		
	}
}


int main()
{
	string ct;
	cout<<"Enter Cipher Text: ";
	cin>>ct;
	int idx_pt = guessPlainTextOne(ct);
	
	cout<<"My Plain test guess is:%s \n"<<pt[idx_pt];
	
		
}