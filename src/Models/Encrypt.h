/*
 * Encrypt.h
 *
 *  Created on: 2013-06-18
 *      Author: Rahul
 */

#ifndef ENCRYPT_H_
#define ENCRYPT_H_
#include <vector>
#include <string>

using namespace std;

class encrypt{
public:
	encrypt();
	encrypt(string bits);
	encrypt(string bits, vector<string> decodeFile);

	bool readFile();
	bool writeFile();
	bool generateDecodeFile();

private:
	string mDataBits;
	vector<string> mDecodeFile;
};



#endif /* ENCRYPT_H_ */
