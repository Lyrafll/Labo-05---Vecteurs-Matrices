#include "lib.h"

using namespace std;

//Operateur<<
void Operateur(vector<int> vector){

	int size = vector.size();

	for(int i = 0; i < size; ++i){
		cout << vector[i] << " ";
	}

}

//Operateur<<
void Operateur(vector<int> vector1, vector<int> vector2){

	for(int i = 0; i < vector1.size(); ++i){

		for(int j = 0; j < vector2.size(); ++j){

			cout << "(" << vector1[i] << " " << vector2[j] << ") ";
		}
	}


}

//estCarree

//minCol
int minCol(Matrix& matrix){
	int vsize = matrix[0].size();
	for(auto row = matrix.begin(); row != matrix.end(); row++){
		if(vsize > row->size())
			vsize = row->size();
	}
	return vsize;
}

//sommeLigne
vector<int> sommeLigne(vector<int> vector1, vector<int> vector2){


}

//vectSommeMin

//shuffleMatrice

//sommeDiagDG

//sommeDiagGD