#include <iostream>
using namespace std;

int main() {

	int sets{ 0 };
	cin >> sets;

	int n{ 0 };

	int nums[10];

	for (int i{ 0 }; i < sets; ++i) {
		for (int j{ 0 }; j < 10; ++j)
			nums[j] = 0;

		

		cin >> n;
		for (int j{ 1 }; j <= n; ++j) {
			int number{ j };

			if (number < 10) {
				nums[number]++;
			}
			else {
				while (number >= 10) {
					nums[number % 10]++;
					number /= 10;
					
				}
				nums[number]++;
			}

		}

		for (int j{ 0 }; j < 10; ++j) {
			if (j != 9)
				cout << nums[j] << " ";
			else
				cout << nums[j];
		}
		cout << endl;

	}


}



/*

	



*/