/*
Each cube is represented by a struct with a 6-digit array.
Weight is from their position in the block vector.

Each cube has three possible placements:
	front - back	0-1
	left - right	2-3
	top - bottom	4-5



1. Load in blocks
2. Create starting routes
	2.1. 6 routes for all faces
3. Create all possible routes
	3.1. Each starting route goes through the next block
	3.2. Add new routes for each matching face
	3.3. Traverse all blocks
4. Go through all the routes to find the longest route
5. Print out the entire route



#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

	struct block {
		//Order:: front, back, left, right, top and bottom.
		int faces[6];
	};

	struct route {
		int top_face{ 0 };
		int length{ 0 };
	};

	block add;

	route addRoute;
	addRoute.length = 1;

	

	int n{ 0 };

	std::vector<block> blocks;
	std::vector<route> routes;

	while (cin >> n && n != 0) {
		route longest;
		//Add blocks
		cout << "Stuck 1" << endl;
		for (int i{ 0 }; i < n; ++i) {
			
			//Add faces to blocks
			for (int j{ 0 }; j < 6; ++j) {
				cout << "Stuck 2" << endl;
				cin >> add.faces[j];
			}
			blocks.push_back(add);

		}

		cout << "Stuck 3" << endl;
		//create starting routes
		for (int i{ 0 }; i < 6; ++i) {
			if (blocks[blocks.size()-1].faces[i] % 2 == 1) {
				addRoute.top_face = blocks[blocks.size() - 1].faces[i - 1];
			}
			else {
				addRoute.top_face = blocks[blocks.size() - 1].faces[i + 1];
			}
			routes.push_back(addRoute);
		}

		cout << "Stuck 4" << endl;
		//Start with the heaviest block
		for (unsigned int i{ blocks.size() - 1 }; i > 0; --i) {
			
			cout << "Stuck 5" << endl;
			//go through the routes
			int n = routes.size();
			for (int j{ 0 }; j < n; ++j) {
				//Check faces on current block
				cout << "Stuck 6" << endl;
				for (int k{ 0 }; k < 6; ++k) {
					//If a matching face is found, create new route and add it to the vector
					cout << "Stuck 7" << endl;
					if (blocks[i].faces[k] == routes[j].top_face) {
						if (k % 2 == 1)
							addRoute.top_face = blocks[i].faces[k - 1];
						else
							addRoute.top_face = blocks[i].faces[k + 1];

						addRoute.length = routes[j].length + 1;

						routes.push_back(addRoute);

					}
				}

			}
		}


		//Find the longest route
		cout << "Trying to find longest route" << endl;
		std::for_each(routes.begin(), routes.end(), [&](route &r) { if (r.length > longest.length) longest = r; });

		cout << "Longest route: " << longest.length << " : " << longest.top_face << endl;

	}

}

*/