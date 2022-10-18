/*David Archer
Word Finder*/

#ifndef WORDCLASS_H
#define WORDCLASS_H
#include<iostream>
#include<fstream>
#include<string>
using namespace std;
#define MAX_SIZE 20
class WordClass
{
public:
	WordClass(string);
	int searchWord(string);
private:
	string words[MAX_SIZE];
	int numWords;
	void sort();
	int binarySearch(string[], int, int, string);
};

#endif // ! WORDCLASS_H