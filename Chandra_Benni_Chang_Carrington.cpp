#include <iostream>
#include <vector>
#include <string>
#include <sstream>
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
				if( countVal(tokens, tokens[215]) == 1)
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
			
			//condtion of q is that it should occur 21,79,32,82,138,148,335,453
			int idxQ = tokens[21];
			int idxArrQ[] = {79,32,82,138,148,335,453};
			for(int i=0;i<sizeof(idxArrQ)/sizeof(idxArrQ[0]);i++)
			{
				if(!(idxQ == idxArrQ[i]))
					return 0;
			}
			if( countVal(tokens, idxQ) == 8)
			{
				//condtion of v is it should occur at 6 times --> CHANGE IT
				if(tokens[128] == tokens[478] &&  countVal(tokens, tokens[128]) == 6)
				{
					//condition of x is it should occur 442
					
					if(  countVal(tokens, tokens[442]) == 1)
					{
						if( countVal(tokens, tokens[360]) == 1)
							return 1;
					}

				}
			}
			
		}
	}
	return 0;
}
int guessPlainText(string ct)
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

int main()
{
	string ct;
	cout<<"Enter Cipher Text: ";
	cin>>ct;
	int idx_pt = guessPlainText(ct);
	
	cout<<"My Plain test guess is:%s \n"<<pt[idx_pt];
	
		
}