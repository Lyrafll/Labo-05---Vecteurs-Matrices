#include <vector>
#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <numeric>

using namespace std;

using Line = vector<int>;
using Matrix = vector<Line>;

//Operateur<<
void Operateur(vector<int> vector);

//Operateur<<
void Operateur(vector<int> vector1, vector<int> vector2);

//estCarree

//minCol
int minCol(Matrix& matrix);

//sommeLigne
vector<int> sommeLigne(Matrix& matrix);

//vectSommeMin

//shuffleMatrice

//sommeDiagDG

//sommeDiagGD