/*		ASCII			Diff
k = h	107 -> 104		-3
[ = o	91 -> 111		20
r = w	114 -> 119		5

d = a	100 -> 97		-3
y = r   121 -> 114		-7
t = e	116 -> 101		-15

I = y	73 -> 121		48
[ = o	91 -> 111		20
o = u	111 -> 117		6

Thought it meant alphabet but it meant keyboard.
Uses US style keyboard.




#include <iostream>
#include <string>

using namespace std;

int main() {
	//US keyboard Top left to bottom right
	const char usBoard[] = "`1234567890-=qwertyuiop[]\\asdfghjkl;'zxcvbnm,./";

	string line;
	char c;

	std::getline(cin, line);



			for (int j{ 0 }; j < line.length(); ++j) {
				for (int i{ 0 }; i < 48; ++i) {

					if (line[j] == ' ') {
						cout << " ";
						break;
					}
					else if (tolower(line[j]) == usBoard[i]) {
						cout << usBoard[i - 2];
					}
				}
			}
			

	

	return 0;

}
*/