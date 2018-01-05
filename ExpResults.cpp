/*
#include <iostream>
#include <string>
using namespace std;

int main() {
	
	unsigned int cases{ 0 };

	cin >> cases;
	string* input = new string[cases];
	for (int i{ 0 }; i < cases; i++) {
		cin >> input[i];
	}

	for (int i{ 0 }; i < cases; i++) {
		if (input[i].size() <= 2) //pos
			cout << "+" << endl;
		else if (input[i].substr(input[i].size() - 2, 2).compare("35") == 0) //neg
			cout << "-" << endl;
		else if (input[i].front() == '9' && input[i].back() == '4')  //failed
			cout << "*" << endl;
		else
			cout << "?" << endl;
			

	}

	system("pause");

	return 0;
}

*/