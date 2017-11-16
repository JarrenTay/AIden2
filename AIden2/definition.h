#pragma once

#include <string>
#include <unordered_map>
using namespace std;

class Definition {
public:
	static const int DEFAULT_ARRAY_SIZE = 10;
	unordered_map <string, char> partsOfSpeech;
	char getPartOfSpeech();
	string getFunctionality();
	string getConcept(int index);
	string getMood(int index);
	string getModifiers(int index);
	string getFullDef();
private:
	string functionality;
	string concept[DEFAULT_ARRAY_SIZE];
	string mood[DEFAULT_ARRAY_SIZE];
	string modifiers[DEFAULT_ARRAY_SIZE];
	string fullDef;
};