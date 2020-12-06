#include "lib.h"

using namespace std;

int main() {

	vector<int> v1 = {1,2,3,4,5};
	vector<int> v2 = {6,7,3,8,9};
	vector<vector<int>> v3 = {{1,2,6,3},{6,3,8,3,5},{64,2,8,0,53,4}};

	cout << "Operateur (vector)" << endl;
	Operateur(v1);
	cout << endl
		  << endl;

	cout << "Operateur (vector1, vector2)" << endl;
	Operateur(v1, v2);
	cout << endl
		  << endl;

	cout << "minCol (vector3)" << endl;
	int nbr = minCol(v3);
	cout << nbr << endl
					<< endl;

	cout << "sommeLigne" << endl;
	vector<int> vectorSum = sommeLigne(v1, v2);
	for(int i = 0; i < vectorSum.size(); i++){
		cout << vectorSum[i];
	}

   return EXIT_SUCCESS;
}
