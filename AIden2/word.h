#pragma once

#include <string>

using namespace std;

class Word
{
public:
	static const int DEFAULT_ARRAY_SIZE = 10;
	
	int getLength();
	char getPartsSpeech(int index);
	string getConcept(int index);
	string getMood(int index);
	string getModifiers(int index);
	string getFunction();
	string getFullDef();
private:
	int length;
	char partsSpeechPoss[DEFAULT_ARRAY_SIZE];
	string concept[DEFAULT_ARRAY_SIZE];
	string mood[DEFAULT_ARRAY_SIZE];
	string modifiers[DEFAULT_ARRAY_SIZE];
	string function;
	string fullDef;
};