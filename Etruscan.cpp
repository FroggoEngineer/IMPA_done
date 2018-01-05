/*
#include <iostream>
#include <list>
#include <cmath>
using namespace std;

int main() {

	int numOfTests{ 0 };


	cin >> numOfTests;
	double* lst = new double[numOfTests];

	for (int j{ 0 }; j < numOfTests; j++) {	
		double numOfWarriors{ 0 };
		cin >> numOfWarriors;
		lst[j] = (sqrt(8 * numOfWarriors + 1) - 1)/2;
	}


	for (int i{ 0 }; i < numOfTests; i++)
		cout << (int)lst[i] << endl;
	
	return 0;
}
*/