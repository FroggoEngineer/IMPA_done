/* Not finished
#include <iostream>
using namespace std;

int main() {

	
	double probability{ 0.5 };
	unsigned int rounds{ 0 };

	cin >> rounds;

	for (double i{ 2 }; i <= rounds; i++)
		probability += probability*(1.0 / i)*(1.0 / (i + 1));

	cout << probability << endl;

	system("pause");

	return 0;
}
*/