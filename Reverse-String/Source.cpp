#include <iostream>
#include <algorithm>
#include <string>
#include <fstream>
using namespace std;

string yourWord()
{
	cout << "Enter word: ";
	string word;
	getline(cin, word);
	return word;
}

void reverse(string word)
{
	reverse(word.begin(), word.end());
	cout << endl << endl << word << endl;
	ofstream file;
	file.open("reverse.txt");
		file << word;
	file.close();
}

int main()
{
	string word = yourWord();
	reverse(word);
	return 0;

}