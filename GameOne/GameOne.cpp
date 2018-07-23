#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <ctime>
#include <cctype>
using namespace std;

int main()
{
	const int MAX_ERROR = 8;
	vector<string> words;
	words.push_back("Какашка");
	words.push_back("Лапка"); 
	words.push_back("Носок"); 
	words.push_back("Дорога");
	srand(static_cast<unsigned int>(time(0)));
	random_shuffle(words.begin(), words.end());
	const string WordGame = words[0];
	int error = 0;
	string soFar(WordGame.size(), '-');
	string used = "";//відгаданні букви
	cout << "Добро пожаловать в игру Виселица" <<endl;
	while (error < MAX_ERROR && (soFar != WordGame))
	{
		cout << "\nВ тебе залишилось" << (MAX_ERROR - error) << "спроб" << endl;
		cout << "Ти відгадав ці букви слова: " << used << endl;
	}

}