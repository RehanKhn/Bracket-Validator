#include<iostream>
#include<string>
using namespace std;
#include "ValidateBracket.h"



ValidateBracket::ValidateBracket()
{
}

void ValidateBracket::setString(string str) {
	this->str = str;
}
string ValidateBracket::getString() {
	return this->str;
}
void ValidateBracket::isValid(string str[2]) {
	cStack s;
	string brackets[2];
	int i = 0;
	
	while (str[0][i] != NULL)
	{
		if (str[0][i] == '{' || str[0][i] == '}' || str[0][i] == '(' || str[0][i] == ')' || str[0][i] == '[' || str[0][i] == ']')
		{
			brackets[0] = brackets[0] + str[0][i];
			brackets[1] = brackets[1] + str[1][i];
		}
		i++;
	}
	int j = 0;
	while (brackets[0][j] != NULL)
	{
		switch (brackets[0][j])
		{
		case '{':
		case '(':
		case '[':
			s.push(brackets[0][j]);
			break;
		case '}':
			if ((s.stackSize() != 0) && (s.top() == '{'))
			{
				s.pop();
			}
			else
			{
				cout << "Error at: " << (int)brackets[1][j] << endl;
			}
			break;
		case ')':
			if ((s.stackSize() == 0) || (s.top() != '('))
			{
				cout << "Error at: " << (int)brackets[1][j] << endl;
			}
			else
				s.pop();
			break;
		case ']':
			if ((s.stackSize() == 0) || (s.top() != '['))
			{
				cout << "Error at: " << (int)brackets[1][j] << endl;
			}
			else
				s.pop();
			break;
		}

		j++;
	}
	while (s.stackSize() != 0)
	{
		if (s.top() == '{' || s.top() == '(' || s.top() == '[')
			cout << "Closing Bracket of " << (char)s.top() <<" Missing"<< endl;
		s.pop();
	}
}


ValidateBracket::~ValidateBracket()
{
}
