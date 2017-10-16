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

// Keys represent the integer ciphertext
// num is the integer
// used is whether or not it has been deciphered
// letter is the plaintext

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



void decryptWord(vector<Key>::iterator& vi, map<char, vector<int>>& letterToKey, const string& word) {
	int  length = word.size();
	for (int i = -1 * (length + 1); i < 1; ++i) {
		if(i != -1 *(length + 1) && i != 0) {
			(vi + i)->setLetter(word[length + i]);
		}
		Key* keyPointer = &(*(vi + i));
		vector<int>* keys_of_letter = &letterToKey[keyPointer->getLetter()];
		if (find(keys_of_letter->begin(), keys_of_letter->end(), keyPointer->getNum()) == letterToKey[keyPointer->getLetter()].end())
			keys_of_letter->push_back(keyPointer->getNum());
		keyPointer->setUsed(true);
	}

}

vector<Key>& guessPlainTextTwo(string ct)
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
			// Set 'gibbousness in ciphertext
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
					Key* keyPointer = &tokens[*(iter + j)];
					vector<int>* keys_of_letter = &letterToKey[keyPointer->getLetter()];
					if (find(keys_of_letter->begin(), keys_of_letter->end(), keyPointer->getNum()) == letterToKey[keyPointer->getLetter()].end())
						keys_of_letter->push_back(keyPointer->getNum());
					tokens[*(iter + j)].setUsed(true);
				}

			}

			// Set 'briskly' in ciphertext
			for (vector<Key>::iterator iter = tokens.begin(); iter < tokens.end(); ++iter) {
				decryptWord(iter, letterToKey, "brisking");

				if ((iter - 7)->getNum() == *i && !(iter->getUsed())) {
					decryptWord(iter, letterToKey, "brisking");

					/*(iter - 8)->setLetter('b');
					(iter - 7)->setLetter('r');
					(iter - 6)->setLetter('i');
					(iter - 5)->setLetter('s');
					(iter - 4)->setLetter('k');
					(iter - 3)->setLetter('i');
					(iter - 2)->setLetter('n');
					(iter - 1)->setLetter('g');

					for (int j = -9; j < 1; ++j) {
						Key* keyPointer = &(*(iter + j));
						vector<int>* keys_of_letter = &letterToKey[keyPointer->getLetter()];
						if (find(keys_of_letter->begin(), keys_of_letter->end(), keyPointer->getNum()) == letterToKey[keyPointer->getLetter()].end())
							keys_of_letter->push_back(keyPointer->getNum());
						keyPointer->setUsed(true);
					}*/
				}
			}

			for (vector<Key>::iterator iter = tokens.begin(); iter < tokens.end(); ++iter) {
				if ((iter - 2)->getNum() == letterToKey['k'][0] && !(iter->getUsed())) {
					decryptWord(iter, letterToKey, "rankly");
					
					//(iter - 6)->setLetter('r');
					//(iter - 5)->setLetter('a');
					//(iter - 4)->setLetter('n');
					//(iter - 3)->setLetter('k');
					//(iter - 2)->setLetter('l');
					//(iter - 1)->setLetter('y');

					//for (int j = -7; j < 1; ++j) {
					//	//if (keyToLetter[(iter + j)->getNum()] != ' ')
					//	//	keyToLetter[(iter + j)->getNum()] = (iter + j)->getLetter();
					//	Key* keyPointer = &(*(iter + j));
					//	vector<int>* keys_of_letter = &letterToKey[keyPointer->getLetter()];
					//	if (find(keys_of_letter->begin(), keys_of_letter->end(), keyPointer->getNum()) == letterToKey[keyPointer->getLetter()].end())
					//		keys_of_letter->push_back(keyPointer->getNum());
					//	keyPointer->setUsed(true);
					//}
				}
			}

			for (vector<Key>::iterator iter = tokens.begin(); iter < tokens.end(); ++iter) {
				if (((iter - 4)->getNum() == letterToKey['g'][0] || ((iter - 4)->getNum() == letterToKey['g'][1])) && !(iter->getUsed())) { // RISK
					decryptWord(iter, letterToKey, "energize");
																																			
					//(iter - 8)->setLetter('e');
					//(iter - 7)->setLetter('n');
					//(iter - 6)->setLetter('e');
					//(iter - 5)->setLetter('r');
					//(iter - 4)->setLetter('g');
					//(iter - 3)->setLetter('i');
					//(iter - 2)->setLetter('z');
					//(iter - 1)->setLetter('e');

					//for (int j = -9; j < 1; ++j) {
					//	//if (keyToLetter[(iter + j)->getNum()] != ' ')
					//	//	keyToLetter[(iter + j)->getNum()] = (iter + j)->getLetter();
					//	Key* keyPointer = &(*(iter + j));
					//	vector<int>* keys_of_letter = &letterToKey[keyPointer->getLetter()];
					//	if (find(keys_of_letter->begin(), keys_of_letter->end(), keyPointer->getNum()) == letterToKey[keyPointer->getLetter()].end())
					//		keys_of_letter->push_back(keyPointer->getNum());
					//	keyPointer->setUsed(true);
					//}
				}
			}

			for (vector<Key>::iterator iter = tokens.begin(); iter < tokens.end(); ++iter) {
				if (((iter - 6)->getNum() == letterToKey['y'][0] || ((iter - 6)->getNum() == letterToKey['y'][1])) && !(iter->getUsed())) { //RISK
					decryptWord(iter, letterToKey, "nymphal");
																																			
					//(iter - 7)->setLetter('n');
					//(iter - 6)->setLetter('y');
					//(iter - 5)->setLetter('m');
					//(iter - 4)->setLetter('p');
					//(iter - 3)->setLetter('h');
					//(iter - 2)->setLetter('a');
					//(iter - 1)->setLetter('l');

					//for (int j = -8; j < 1; ++j) {
					//	//if (keyToLetter[(iter + j)->getNum()] != ' ')
					//	//	keyToLetter[(iter + j)->getNum()] = (iter + j)->getLetter();
					//	Key* keyPointer = &(*(iter + j));
					//	vector<int>* keys_of_letter = &letterToKey[keyPointer->getLetter()];
					//	if (find(keys_of_letter->begin(), keys_of_letter->end(), keyPointer->getNum()) == letterToKey[keyPointer->getLetter()].end())
					//		keys_of_letter->push_back(keyPointer->getNum());
					//	keyPointer->setUsed(true);
					//}
				}
			}

			for (vector<Key>::iterator iter = tokens.begin(); iter < tokens.end(); ++iter) {
				if (((iter - 5)->getNum() == letterToKey['p'][0] || ((iter - 5)->getNum() == letterToKey['p'][1])) &&
					((iter - 1)->getNum() == letterToKey['g'][0] || ((iter - 1)->getNum() == letterToKey['g'][1])) &&
					!(iter->getUsed())) { //RISK

					decryptWord(iter, letterToKey, "sampling");

					//(iter - 8)->setLetter('s');
					//(iter - 7)->setLetter('a');
					//(iter - 6)->setLetter('m');
					//(iter - 5)->setLetter('p');
					//(iter - 4)->setLetter('l');
					//(iter - 3)->setLetter('i');
					//(iter - 2)->setLetter('n');
					//(iter - 1)->setLetter('g');

					//for (int j = -9; j < 1; ++j) {
					//	//if (keyToLetter[(iter + j)->getNum()] != ' ')
					//	//	keyToLetter[(iter + j)->getNum()] = (iter + j)->getLetter();
					//	Key* keyPointer = &(*(iter + j));
					//	vector<int>* keys_of_letter = &letterToKey[keyPointer->getLetter()];
					//	if (find(keys_of_letter->begin(), keys_of_letter->end(), keyPointer->getNum()) == letterToKey[keyPointer->getLetter()].end())
					//		keys_of_letter->push_back(keyPointer->getNum());
					//	keyPointer->setUsed(true);
					//}
				}
			}

			for (vector<Key>::iterator iter = tokens.begin(); iter < tokens.end(); ++iter) {
				if (((iter - 5)->getNum() == letterToKey['p'][0] || ((iter - 5)->getNum() == letterToKey['p'][1])) &&
					((iter - 3)->getNum() == letterToKey['p'][0] || ((iter - 3)->getNum() == letterToKey['p'][1])) &&
					!(iter->getUsed())) { //RISK
					decryptWord(iter, letterToKey, "stovepipes");

					//(iter - 10)->setLetter('s');
					//(iter - 9)->setLetter('t');
					//(iter - 8)->setLetter('o');
					//(iter - 7)->setLetter('v');
					//(iter - 6)->setLetter('e');
					//(iter - 5)->setLetter('p');
					//(iter - 4)->setLetter('i');
					//(iter - 3)->setLetter('p');
					//(iter - 2)->setLetter('e');
					//(iter - 1)->setLetter('s');

					//for (int j = -11; j < 1; ++j) {
					//	//if (keyToLetter[(iter + j)->getNum()] != ' ')
					//	//	keyToLetter[(iter + j)->getNum()] = (iter + j)->getLetter();
					//	Key* keyPointer = &(*(iter + j));
					//	vector<int>* keys_of_letter = &letterToKey[keyPointer->getLetter()];
					//	if (find(keys_of_letter->begin(), keys_of_letter->end(), keyPointer->getNum()) == letterToKey[keyPointer->getLetter()].end())
					//		keys_of_letter->push_back(keyPointer->getNum());
					//	keyPointer->setUsed(true);
					//}
				}
			}

			for (vector<Key>::iterator iter = tokens.begin(); iter < tokens.end(); ++iter) {
				if (((iter-11)->getNum() == letterToKey['m'][0] || ((iter-11)->getNum() == letterToKey['m'][1])) &&
					((iter-5)->getNum() == letterToKey['g'][0] || ((iter-5)->getNum() == letterToKey['g'][1])) &&
					!(iter->getUsed())) {

					decryptWord(iter, letterToKey, "meaningless");

					//(iter - 11)->setLetter('m');
					//(iter - 10)->setLetter('e');
					//(iter - 9)->setLetter('a');
					//(iter - 8)->setLetter('n');
					//(iter - 7)->setLetter('i');
					//(iter - 6)->setLetter('n');
					//(iter - 5)->setLetter('g');
					//(iter - 4)->setLetter('l');
					//(iter - 3)->setLetter('e');
					//(iter - 2)->setLetter('s');
					//(iter - 1)->setLetter('s');

					//for (int j = -12; j < 1; ++j) {
					//	//if (keyToLetter[(iter + j)->getNum()] != ' ')
					//	//	keyToLetter[(iter + j)->getNum()] = (iter + j)->getLetter();
					//	Key* keyPointer = &(*(iter + j));
					//	vector<int>* keys_of_letter = &letterToKey[keyPointer->getLetter()];
					//	if (find(keys_of_letter->begin(), keys_of_letter->end(), keyPointer->getNum()) == letterToKey[keyPointer->getLetter()].end())
					//		keys_of_letter->push_back(keyPointer->getNum());
					//	keyPointer->setUsed(true);
					//}
				}
			}

			for (vector<Key>::iterator iter = tokens.begin(); iter < tokens.end(); ++iter) {
				if (((iter - 3)->getNum() == letterToKey['l'][0] || ((iter - 3)->getNum() == letterToKey['l'][1]) || ((iter - 3)->getNum() == letterToKey['l'][2])) &&
					((iter - 2)->getNum() == letterToKey['l'][0] || ((iter - 2)->getNum() == letterToKey['l'][1]) || ((iter - 2)->getNum() == letterToKey['l'][2])) &&
					!(iter->getUsed())) {

					decryptWord(iter, letterToKey, "swells");

					//(iter - 6)->setLetter('s');
					//(iter - 5)->setLetter('w');
					//(iter - 4)->setLetter('e');
					//(iter - 3)->setLetter('l');
					//(iter - 2)->setLetter('l');
					//(iter - 1)->setLetter('s');

					//for (int j = -7; j < 1; ++j) {
					//	//if (keyToLetter[(iter + j)->getNum()] != ' ')
					//	//	keyToLetter[(iter + j)->getNum()] = (iter + j)->getLetter();
					//	Key* keyPointer = &(*(iter + j));
					//	vector<int>* keys_of_letter = &letterToKey[keyPointer->getLetter()];
					//	if (find(keys_of_letter->begin(), keys_of_letter->end(), keyPointer->getNum()) == letterToKey[keyPointer->getLetter()].end())
					//		keys_of_letter->push_back(keyPointer->getNum());
					//	keyPointer->setUsed(true);
					//}
				}
			}

			for (vector<Key>::iterator iter = tokens.begin(); iter < tokens.end(); ++iter) {
				if (((iter - 6)->getNum() == letterToKey['l'][0] || ((iter - 6)->getNum() == letterToKey['l'][1]) || ((iter - 6)->getNum() == letterToKey['l'][2])) &&
					(((iter - 1))->getNum() == letterToKey['s'][0] || (((iter - 1))->getNum() == letterToKey['l'][1]) || (((iter - 1))->getNum() == letterToKey['s'][2]) || (((iter - 1))->getNum() == letterToKey['s'][3]) || (((iter - 1))->getNum() == letterToKey['s'][4])) &&
					!(iter->getUsed())) {

					decryptWord(iter, letterToKey, "violators");

					//(iter - 9)->setLetter('v');
					//(iter - 8)->setLetter('i');
					//(iter - 7)->setLetter('o');
					//(iter - 6)->setLetter('l');
					//(iter - 5)->setLetter('a');
					//(iter - 4)->setLetter('t');
					//(iter - 3)->setLetter('o');
					//(iter - 2)->setLetter('r');
					//(iter - 1)->setLetter('s');

					//for (int j = -10; j < 1; ++j) {
					//	//if (keyToLetter[(iter + j)->getNum()] != ' ')
					//	//	keyToLetter[(iter + j)->getNum()] = (iter + j)->getLetter();
					//	Key* keyPointer = &(*(iter + j));
					//	vector<int>* keys_of_letter = &letterToKey[keyPointer->getLetter()];
					//	if (find(keys_of_letter->begin(), keys_of_letter->end(), keyPointer->getNum()) == letterToKey[keyPointer->getLetter()].end())
					//		keys_of_letter->push_back(keyPointer->getNum());
					//	keyPointer->setUsed(true);
					//}
				}
			}

			for (vector<Key>::iterator iter = tokens.begin(); iter < tokens.end(); ++iter) {
				if (((iter - 7)->getNum() == letterToKey['v'][0]) &&
					((iter - 5)->getNum() == letterToKey['s'][0] || ((iter - 5)->getNum() == letterToKey['l'][1]) || ((iter - 5)->getNum() == letterToKey['s'][2]) || ((iter - 5)->getNum() == letterToKey['s'][3]) || ((iter - 5)->getNum() == letterToKey['s'][4])) &&
					!(iter->getUsed())) {

					decryptWord(iter, letterToKey, "travestied");

					//(iter - 10)->setLetter('t');
					//(iter - 9)->setLetter('r');
					//(iter - 8)->setLetter('a');
					//(iter - 7)->setLetter('v');
					//(iter - 6)->setLetter('e');
					//(iter - 5)->setLetter('s');
					//(iter - 4)->setLetter('t');
					//(iter - 3)->setLetter('i');
					//(iter - 2)->setLetter('e');
					//(iter - 1)->setLetter('d');

					//for (int j = -11; j < 1; ++j) {
					//	//if (keyToLetter[(iter + j)->getNum()] != ' ')
					//	//	keyToLetter[(iter + j)->getNum()] = (iter + j)->getLetter();
					//	Key* keyPointer = &(*(iter + j));
					//	vector<int>* keys_of_letter = &letterToKey[keyPointer->getLetter()];
					//	if (find(keys_of_letter->begin(), keys_of_letter->end(), keyPointer->getNum()) == letterToKey[keyPointer->getLetter()].end())
					//		keys_of_letter->push_back(keyPointer->getNum());
					//	keyPointer->setUsed(true);
					//}
				}
			}

			for (vector<Key>::iterator iter = tokens.begin(); iter < tokens.end(); ++iter) {
				if (((iter - 2)->getNum() == letterToKey['l'][0]) || ((iter - 2)->getNum() == letterToKey['l'][1]) || ((iter - 2)->getNum() == letterToKey['l'][2]) &&
					((iter - 5)->getNum() == letterToKey['i'][0] || ((iter - 5)->getNum() == letterToKey['i'][1]) || ((iter - 5)->getNum() == letterToKey['i'][2]) || ((iter - 5)->getNum() == letterToKey['i'][3]) || ((iter - 5)->getNum() == letterToKey['i'][4]) || ((iter - 5)->getNum() == letterToKey['i'][5])) &&
					!(iter->getUsed())) {

					decryptWord(iter, letterToKey, "finale");

					//(iter - 6)->setLetter('f');
					//(iter - 5)->setLetter('i');
					//(iter - 4)->setLetter('n');
					//(iter - 3)->setLetter('a');
					//(iter - 2)->setLetter('l');
					//(iter - 1)->setLetter('e');

					//for (int j = -7; j < 1; ++j) {
					//	//if (keyToLetter[(iter + j)->getNum()] != ' ')
					//	//	keyToLetter[(iter + j)->getNum()] = (iter + j)->getLetter();
					//	Key* keyPointer = &(*(iter + j));
					//	vector<int>* keys_of_letter = &letterToKey[keyPointer->getLetter()];
					//	if (find(keys_of_letter->begin(), keys_of_letter->end(), keyPointer->getNum()) == letterToKey[keyPointer->getLetter()].end())
					//		keys_of_letter->push_back(keyPointer->getNum());
					//	keyPointer->setUsed(true);
					//}
				}
			}

			for (vector<Key>::iterator iter = tokens.begin(); iter < tokens.end(); ++iter) {
				if (((iter - 2)->getNum() == letterToKey['l'][0]) || ((iter - 2)->getNum() == letterToKey['l'][1]) || ((iter - 2)->getNum() == letterToKey['l'][2]) &&
					((iter - 5)->getNum() == letterToKey['i'][0] || ((iter - 5)->getNum() == letterToKey['i'][1]) || ((iter - 5)->getNum() == letterToKey['i'][2]) || ((iter - 5)->getNum() == letterToKey['i'][3]) || ((iter - 5)->getNum() == letterToKey['i'][4]) || ((iter - 5)->getNum() == letterToKey['i'][5])) &&
					!(iter->getUsed())) {

					decryptWord(iter, letterToKey, "dextrins");

					//(iter - 8)->setLetter('d');
					//(iter - 7)->setLetter('e');
					//(iter - 6)->setLetter('x');
					//(iter - 5)->setLetter('t');
					//(iter - 4)->setLetter('r');
					//(iter - 3)->setLetter('i');
					//(iter - 2)->setLetter('n');
					//(iter - 1)->setLetter('s');

					//for (int j = -9; j < 1; ++j) {
					//	//if (keyToLetter[(iter + j)->getNum()] != ' ')
					//	//	keyToLetter[(iter + j)->getNum()] = (iter + j)->getLetter();
					//	Key* keyPointer = &(*(iter + j));
					//	vector<int>* keys_of_letter = &letterToKey[keyPointer->getLetter()];
					//	if (find(keys_of_letter->begin(), keys_of_letter->end(), keyPointer->getNum()) == letterToKey[keyPointer->getLetter()].end())
					//		keys_of_letter->push_back(keyPointer->getNum());
					//	keyPointer->setUsed(true);
					//}
				}
			}

			for (vector<Key>::iterator iter = tokens.begin(); iter < tokens.end(); ++iter) {
				if (iter->getLetter() == ' ' && !((iter + 1)->getUsed())) {
					int length = 4;
					vector<Key>::iterator iter2 = iter + 5; 
					while (iter2->getLetter() != ' ') {
							++length; 
							++iter2;
					}
					switch (length) {
					case 4:
						(iter2 - 4)->setLetter('h');
						(iter2 - 3)->setLetter('o');
						(iter2 - 2)->setLetter('p');
						(iter2 - 1)->setLetter('e');
					case 6:
						(iter2 - 6)->setLetter('n');
						(iter2 - 5)->setLetter('e');
						(iter2 - 4)->setLetter('s');
						(iter2 - 3)->setLetter('t');
						(iter2 - 2)->setLetter('e');
						(iter2 - 1)->setLetter('d');
					case 8:
						(iter2 - 8)->setLetter('c');
						(iter2 - 7)->setLetter('o');
						(iter2 - 6)->setLetter('t');
						(iter2 - 5)->setLetter('t');
						(iter2 - 4)->setLetter('o');
						(iter2 - 3)->setLetter('n');
						(iter2 - 2)->setLetter('e');
						(iter2 - 1)->setLetter('d');
					case 9:
						(iter2 - 9)->setLetter('m');
						(iter2 - 8)->setLetter('a');
						(iter2 - 7)->setLetter('t');
						(iter2 - 6)->setLetter('u');
						(iter2 - 5)->setLetter('r');
						(iter2 - 4)->setLetter('a');
						(iter2 - 3)->setLetter('t');
						(iter2 - 2)->setLetter('e');
						(iter2 - 1)->setLetter('s');
					case 10:
						(iter2 - 10)->setLetter('j');
						(iter2 - 9)->setLetter('e');
						(iter2 - 8)->setLetter('o');
						(iter2 - 7)->setLetter('p');
						(iter2 - 6)->setLetter('a');
						(iter2 - 5)->setLetter('r');
						(iter2 - 4)->setLetter('d');
						(iter2 - 3)->setLetter('o');
						(iter2 - 2)->setLetter('u');
						(iter2 - 1)->setLetter('s');
					case 11:
						(iter2 - 11)->setLetter('f');
						(iter2 - 10)->setLetter('r');
						(iter2 - 9)->setLetter('e');
						(iter2 - 8)->setLetter('e');
						(iter2 - 7)->setLetter('l');
						(iter2 - 6)->setLetter('a');
						(iter2 - 5)->setLetter('n');
						(iter2 - 4)->setLetter('c');
						(iter2 - 3)->setLetter('i');
						(iter2 - 2)->setLetter('n');
						(iter2 - 1)->setLetter('g');
					case 12:
						(iter2 - 12)->setLetter('e');
						(iter2 - 11)->setLetter('x');
						(iter2 - 10)->setLetter('p');
						(iter2 - 9)->setLetter('a');
						(iter2 - 8)->setLetter('t');
						(iter2 - 7)->setLetter('i');
						(iter2 - 6)->setLetter('a');
						(iter2 - 5)->setLetter('t');
						(iter2 - 4)->setLetter('i');
						(iter2 - 3)->setLetter('o');
						(iter2 - 2)->setLetter('n');
						(iter2 - 1)->setLetter('s');
					}
					
				}
				
			}

		}
	
	}
	return tokens;
}


int main()
{
	string ct;
	cout<<"Enter Cipher Text: ";
	cin>>ct;
	int idx_pt = guessPlainTextOne(ct);
	
	cout<<"My Plain test guess is:%s \n"<<pt[idx_pt];
	
		
}