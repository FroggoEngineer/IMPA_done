/*
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

bool moduSort(string i, string j) { return (i.compare(j) < 0); }
bool deadSort(string i, string j) { return (i.size() < j.size()); }

int main() {

	int cases{ 0 };
	cin >> cases;
	vector<vector<string>> deadCont;

	for (int i{ 0 }; i < cases; i++) {
		int N, M, E;
		cin >> N >> M >> E;

		vector<string> modu;

		for (int j{ 0 }; j < E; j++) {
			string input;
			cin >> input;
			modu.push_back(input);
		}

		std::sort(modu.begin(), modu.end(), moduSort);

		string* couplings = new string[E];

		vector<string> compareList = modu;
		vector<string> deadLocks;

		for (int j{ 0 }; j < modu.size(); j++) {
			couplings[j] = modu.front();


			for (int k{ 0 }; k < compareList.size(); k++) {

				if (couplings[j].back() == compareList[k].front()) {
					couplings[j].append("-");
					couplings[j] += compareList[k].back();
					compareList.erase(compareList.begin() + k);
					k = -1;
				}

				if (couplings[j].front() == couplings[j].back()) {
					deadLocks.push_back(couplings[j]);
					break;
				}
			}

			for (int k{ 0 }; k < compareList.size(); k++) {
				if (modu.front().back() == compareList[k].front()) {
					break;
				}
				else if (k == (compareList.size() - 1)) {
					modu.erase(modu.begin());
					compareList = modu;
				}

			}
			

		}
		
		if (deadLocks.size() > 0) {
			sort(deadLocks.begin(), deadLocks.end(), deadSort);
			deadCont.push_back(deadLocks);
			*/
			/*
			cout << "YES" << endl;
			for (int j{ 0 }; j < deadLocks.size(); j++)
				cout << deadLocks[j] << endl;
				*/
/*
				
		}
		else {
			//cout << "NO"  << endl;
			deadCont.push_back(vector<string>());
		}
		
		//cout << endl;
	}
	
	for (int i{ 0 }; i < deadCont.size(); i++) {

		if (deadCont[i].size() > 0) {
			cout << "YES" << endl;
			for (int j{ 0 }; j < deadCont[i].size(); j++)
				cout << deadCont[i].at(j) << endl;
		}
		else
			cout << "NO" << endl;
		
		if(i != cases-1)
			cout << endl;
	}
	
	//cout << endl;
	//system("pause");
	return 0;

}

*/
