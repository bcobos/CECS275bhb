#pragma once
/* Header file for Dictionary class */
#include <vector>
#include <string>
#include <iostream>
#include <fstream>

using std::vector;
using std::string;
using std::ifstream;

class Dictionary { 
private:
	//Member Variables:
	static vector<string> wordList;
	static unsigned int wordListSize;

	//Private Member Functions: 
	static int locateStart(string, int, int, bool);

public:
	//Public Member Functions:
	static int locateStart(string, bool);
	static int getDictionarySize();
	static int initialize();

}; //end of Dictionary class declarations