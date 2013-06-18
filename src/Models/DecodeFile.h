/*
 * DecodeFile.h
 *
 *  Created on: 2013-06-18
 *      Author: Rahul
 */

#ifndef DECODEFILE_H_
#define DECODEFILE_H_
#include <CustomIncludes.h>
using namespace std;

class decodeFile{
public:
	decodeFile();
	decodeFile(string file);
	void generateRandom();
	vector<vector<string>> fromFile(fstream::__iostream_type stream);
	vector<vector<string>> getDecodeFile();

private:
	//Find a way to keep numbers and letters togather
	char mLetters[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
	int mNumbers[26];
	string mPassPhrase;

	void fillBlanks();
	void shuffle();
	void setDecodeFile();
	void assignNumbers();
	void swapLetters(int firstPos, int secondPos);
};

//vector<vector<string>> decodeFile::getDecodeFile(){
//	return mDecodeFile;
//}

void decodeFile::generateRandom(){

	//shuffle mLetters
	shuffle();
	//Assign random numbers to each letters

}

void decodeFile::shuffle(){
	srand(time(NULL));
	int randomNumberOne, randomNumberTwo;

	for (int i = 0; i < 1000; i++){
		randomNumberOne = rand() % 26;
		randomNumberTwo = rand() % 26;
		swap (randomNumberOne, randomNumberTwo);
	}
}

void decodeFile::swapLetters(int firstPos, int secondPos){
	char temp = mLetters[firstPos];
	mLetters[firstPos] = mLetters[secondPos];
	mLetters[secondPos] = temp;
}

void decodeFile::setDecodeFile(){
	for (int i = 0; i < 26; i++){
		srand(time(NULL));
		mNumbers[i] = rand() % 26;
	}
}

void decodeFile::assignNumbers(){

}

#endif /* DECODEFILE_H_ */
