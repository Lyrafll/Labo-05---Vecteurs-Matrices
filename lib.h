/*
  ---------------------------------------------------------------------------
  Fichier     : library.h
  Nom du labo : Labo 5 - Vecteurs Matrices
  Auteur(s)   : Grégory Renaud, Aurélien Richard
  Date        : 06.12.2020
  But         : Contient les signatures des librairies offrant les fonctionnalités
                décrites dans main.cpp

  Remarque(s) : Pas de remarque.

  Compilateur : Mingw-w64
  ---------------------------------------------------------------------------
*/

#include<vector>
#include <numeric>
#include <algorithm>
#include <random>
#include <chrono>

using namespace std;

using Line = vector<int>;
using Matrix = vector<Line>;
//Operateur<<


//Operateur<<

//estCarree
bool estCarree( Matrix& matrix);

//estReguliere
bool estReguliere( Matrix& matrix);

//minCol

//sommeLigne

//vectSommeMin
bool vectSommeMin(Matrix &matrix, Line& vector);

//shuffleMatrice
void shuffleMatrice(Matrix& matrix);

//sortMatrice
void sortMatrice(Matrix& matrix);


//sommeDiagDG

//sommeDiagGD