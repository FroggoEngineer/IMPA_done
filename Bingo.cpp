/*
Input:
n : number of different Bingo cards
Bingo card: 5x5 int, mid number 0 "free space".



#include <iostream>

using namespace std;

int main() {

	int n{ 0 };

	int* card = new int[25]; //Access: i+j*width; 0 <= i < 5, 0 <= j < 5
	int* numbers = new int[75];
	

	cin >> n;

	

	//Number of games loop
	for (int k{ 0 }; k < n; ++k) {
		bool gotBingo{ false };
		//Bingo card inmatning
		for (int i{ 0 }; i < 25; ++i) {
			if (i != 12)
				cin >> card[i];
			else
				card[i] = 0;
		}
		
		for (int i{ 0 }; i < 75; ++i) {
			cin >> numbers[i];
		}
		
		int bingo[5] = { 0, 0, 1, 0, 0 };

		//The algorithm
		for (int i{ 0 }; i < 75; ++i) {
			int num{ numbers[i] };
			int start;

			if (num <= 15) {
				start = 0;
			}
			else if (num <= 30) {
				start = 1;
			}
			else if (num <= 45) {
				start = 2;
			}
			else if (num <= 60) {
				start = 3;
			}
			else {
				start = 4;
			}

			for (int j{ start }; j < 25; j += 5) {
				if (num == card[j]) {
					card[j] = 0;
					bingo[start]++;
				}
			}

			for (int k{ 0 }; k < 5; ++k) {
				if (bingo[k] == 5) {
					printf("BINGO after %d numbers announced\n", i+1);
					gotBingo = true;
				}
			}

			//Rows, left to right
			if (!gotBingo)
			for (int k{ 0 }; k < 5; ++k) {
				for (int l{ 0 }; l < 5; ++l) {
					if (card[l + k * 5] != 0)
						break;
					else if (l == 4) {
						printf("BINGO after %d numbers announced\n", i + 1);
						gotBingo = true;
					}
				}
			}
			//Left - Right Diagonal
			if (!gotBingo)
			for (int k{ 0 }; k < 25; k += 6) {
				
				if (card[k] != 0)
					break;
				else if (k == 24) {
					printf("BINGO after %d numbers announced\n", i + 1);
					gotBingo = true;
				}
			}

			//Right - Left Diagonal
			if(!gotBingo)
			for (int k{ 20 }; k > 3; k -= 4) {
				if (card[k] != 0)
					break;
				else if (k == 4) {
					printf("BINGO after %d numbers announced\n", i + 1);
					gotBingo = true;
				}
			}

			if (gotBingo)
				break;
		}

	}


}
*/