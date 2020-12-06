/*
  ---------------------------------------------------------------------------
  Fichier     : library.cpp
  Nom du labo : Labo 5 - Vecteurs Matrices
  Auteur(s)   : Grégory Renaud, Aurélien Richard
  Date        : 06.12.2020
  But         : Contient les sources de lib.h.

  Compilateur : Mingw-w64
  ---------------------------------------------------------------------------
*/
#include "lib.h"


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
// Returns if the matrix is squared
bool estCarree( Matrix& matrix){
   // if empty, it is squared
   if (matrix.empty())
      return true;

   // var inits
   int matrixSize = matrix.size();
   int vectorSize = matrix[0].size();

   for (auto row = matrix.begin(); row != matrix.end(); row++){
      if(vectorSize != row->size())
         return false;
   }
   if (vectorSize != matrixSize)
      return false;
   return true;
}

// estReguliere
// returns if the matrix is regular
bool estReguliere( Matrix& matrix){
   // if empty, it is regular
   if (matrix.empty())
      return true;
   //var init
   int vectorSize = matrix[0].size();

   for (auto row = matrix.begin(); row != matrix.end(); row++){
      if(vectorSize != row->size()) // if one vector size is not the same as the first, 100% matrix not regu
         return false;
   }
   return true;
}

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
vector<int> sommeLigne(Matrix& matrix){
	vector<int> vectorSum;
	for(auto row = matrix.begin(); row != matrix.end(); row++){
		vectorSum.insert(vectorSum.end(), accumulate(row->begin(), row->end(), 0));
	}
	return vectorSum;
}

// returns the vector that has the smallest sum
vector<int> vectSommeMin(Matrix &matrix) {
   int index, loop = 0;
   int vsum = accumulate(matrix[index].begin(), matrix[index].end(),0); //init value with the first vector
   for (auto row = matrix.begin(); row != matrix.end(); row++){
      if (accumulate(row->begin(), row->end(),0) < vsum){ // replace the smallest sum and index with the current one if sum< previous one
         vsum = accumulate(row->begin(), row->end(),0);
         index = loop;
      }
      loop++;
   }
   return matrix[index];
}

//shuffleMatrice
// shuffle the order of vectors in the matrix
void shuffleMatrice(Matrix& matrix){
   // the seed from time:
   unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();

   // shufflin shufflin
   shuffle (matrix.begin(), matrix.end(), std::default_random_engine(seed));
}

//sortMatrice
// sorts vectors in the matrix by the smallest int in each vector
void sortMatrice(Matrix& matrix){

   vector<int> temp; // temp vector
   int j;
   for(int i = 1; i < matrix.size(); ++i) { // loop through the matrix to get vectors
      temp = matrix[i];
      j = i;
      // orders by comparing each vector smallest element
      while(j >= 1 && *min_element(matrix[j -1].begin(), matrix[j-1].end()) > *min_element(temp.begin(), temp.end())) {
         matrix[j] = matrix[j -1];
         --j;
      }
      matrix[j] = temp;
   }
}

//sommeDiagDG
// returns the sum of the diagonal /
bool sommeDiagDG(Matrix& matrix, int& sum) {

   //if the matrix is not squared
   if (!estCarree(matrix))
      return false;

   for (int i = matrix.size()-1; i >= 0; i--) {
      sum = sum + matrix[i][matrix.size()-1-i];
   }
	return true;
}

//sommeDiagGD
// returns the sum of the diagonal GD
bool sommeDiagGD(Matrix& matrix, int& sum){
	//if the matrix is not squared
	if (!estCarree(matrix))
		return false;

	for(int i = 0; i <= matrix.size()-1; i++){
		sum = sum + matrix[i][i];
	}
	return true;
}


