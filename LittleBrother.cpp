/*
#include <iostream>
#include <string>
using namespace std;

int main() {

	int amount{ 0 };

	cin >> amount;

	for (int i{ 0 }; i < amount; ++i) {

		std::string input;

		cin >> input;

		if (input.length() == 5) {
			cout << 3 << endl;
		}
		else {
			int counter{ 0 };

			for (int j{ 0 }; j < 3; ++j) {
				if (input[j] == 'o' || input[j] == 'n' || input[j] == 'e') {
					counter++;
				}
			}

			if (counter >= 2) {
				cout << 1 << endl;
			}
			else
				cout << 2 << endl;

		}


	}



}
*/