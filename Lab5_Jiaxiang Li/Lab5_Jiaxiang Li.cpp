#include<iostream>
#include<string>
#include<vector>

using namespace std;

void cypher(string text, vector<string> upcode, vector<string> lowcode) {
	int num;
	
	cout << "Encoded message: \"";

	for (int i = 0; i < text.length(); i++) { //Run through input string
		if (text[i] >= 65 && text[i] <= 90) { //CAP check
			num = text[i] - 65; //calculate vector element
			cout << upcode[num]; //output vector encoded element
		}
		else if (text[i] >= 97 && text[i] <= 122) { //lower check
			num = text[i] - 97; //calculate vector element
			cout << lowcode[num]; //output vector encoded element
		}
		else { //non-letter check
			cout << text[i]; //output the same symbol
		}
	}

	cout << "\"" << endl;
}

int main()
{
	string text;

	cout << "Input text to cypher: ";
	getline(cin, text); //input string

	vector<string> upcode{ "V", "F", "X", "B", "L", "I", "T", "Z", "J", "R", "P", "H", "D", "K", "N", "O", "W", "S", "G", "U", "Y", "Q", "M", "A", "C", "E" };
	//CAP encoded

	vector<string> lowcode{ "v", "f", "x", "b", "l", "i", "t", "z", "j", "r", "p", "h", "d", "k", "n", "o", "w", "s", "g", "u", "y", "q", "m", "a", "c", "e" };
	//lower encoded

	cypher(text, upcode, lowcode); //cypher

	return 0;
}