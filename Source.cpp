#include<iostream>
#include<fstream>
#include<string>
using namespace std;
#include"ValidateBracket.h"

int main() {
	ValidateBracket b;
	int i = 0;
	int j = 0;
	string str;
	ifstream inFile;
	string code[2];
	inFile.open("code.txt");
	while (!inFile.eof())
	{
		getline(inFile, str);
		i++;
		code[0] = code[0] + str;
		while (code[0][j] != NULL)
		{
			code[1] = code[1] + char(i);
			j++;
		}
	}
	inFile.close();
	b.isValid(code);
	system("pause");
	return 0;
}