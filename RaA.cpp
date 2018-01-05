
/*
#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int numOfTests{ 0 }, expNum{ 0 }, adds{ 0 };
	cin >> numOfTests;
	int* lst = new int[numOfTests];

	for (int j{ 0 }; j < numOfTests; j++)
		cin >> lst[j];
	
	unsigned long int num{ 0 };

	for (int testCase{ 0 }; testCase < numOfTests; testCase++) {

		num = lst[testCase];
		adds = 0;
		//length of num
		expNum = 0;
		int a = num;
		while (a != 0) {
			expNum++;
			a = (int)(a / 10);
		}

		while (true) {

			//Reverse loop
			unsigned long int a{ num }, newNum{ 0 }, b{ 0 };

			for (int i{ expNum }; i > 0; i--) {
				b = a % 10;
				a = (a / 10);
				newNum += (b*pow(10, i - 1));
			}

			//Is palindrome?
			if (num == newNum && adds > 0) {
				cout << adds << " " << num << endl;
				break;
			}

			num += newNum;
			adds++;

			//length of num
			expNum = 0;
			a = num;
			while (a != 0) {
				expNum++;
				a = (int)(a / 10);
			}


			newNum = 0;
			
		}

	}
	//cin >> num;
	return 0;
}

*/