/*
  ---------------------------------------------------------------------------
  Fichier     : main.cpp
  Nom du labo : Labo 5 - Vecteurs Matrices
  Auteur(s)   : Grégory Renaud, Aurélien Richard
  Date        : 06.12.2020
  But         : Le programme execute des tests pour la librairie contenant les fonctionnalités suivantes :
                - Affiche un Vecteur au format (v1, v2, ..., vn)
                - Affiche une Matriceau format [(..),(..),(..)]
                - Retourne un booléen indiquantsi la matrice est carrée
                - Retourne un booléen indiquant si la matrice est régulière (toutes les lignes de même taille)
                - Retourne la longueur min des vecteurs d’une matrice
                - Retourne un vecteur contenant la somme des valeurs de chacune des lignes
                - Retour le vecteur d’une matrice dont la somme desvaleurs est la plus faible.
                  Si plusieurs vecteurs présentent la même somme, la fonction retourne celui d’indice le plus faible
                - Mélanger les vecteurs d’une matrice sans altérer les vecteurs.La seed du générateur est basée sur l’heure
                - Trier dans l’ordre croissant une matrice en fonction de l’élément min d’un vecteur.[(4, 4), (1, 3), (2)]=>[(1, 3), (2), (4, 4)]
                - Rend par un paramètrela somme des valeurs de la diagonale «/».Retourne false en cas d’erreur et true si ok
                - Rend dans un paramètre la somme des valeurs de la diagonale «\».false en cas d’erreur et true si ok.

  Compilateur : Mingw-w64
  ---------------------------------------------------------------------------
*/
#include <iostream>
#include "lib.h"
#include <vector>

using namespace std;
using Line = vector<int>;
using Matrix = vector<Line>;

int main() {

   // vector declarations. We are using Line as it is easier to read

   Line line1(3, 1);
   Line line2(3, 2);
   Line line3(3, 3);
   Line line4(3, 4);
   Line line5(4, 4);
   Line line6(4, 3);
   Line line7(4, 4);
   Line line8(5, 8);
   Line line9(3, 9);
   Line line10(2, 10);
   Line line11 = {3, 2, 5};
   Line line12 = {3, 2, 1};
   Line line13 = {4, 3, 7};
   Line line14 = {5, 6, 10};

   // matrix declaration
   Matrix matrixSquared = {line1, line2, line3};
   Matrix matrixNotSquared = {line1, line2, line3, line4};
   Matrix matrixRegu = {line1, line2, line3, line4};
   Matrix matrixNotRegu = {line1, line2, line3, line4, line5};
   Matrix matrixSommeMin = {line4, line5, line6, line7};
   Matrix matrixShuffle = {line8, line9, line10};
   Matrix matrixSort = {line9, line3, line11, line12, line14, line13};

   // Boolean test, they should all be true! (so print)
   if (estCarree(matrixSquared))
      cout << "est carree" << endl;
   if (!estCarree(matrixNotSquared))
      cout << "est pas carree" << endl;
   if (estReguliere(matrixRegu))
      cout << "est regu" << endl;
   if (!estReguliere(matrixNotRegu))
      cout << "est pas regu" << endl;

   // =========================================== VECTSOMMEMIN TEST START ============================================
   // =========================================== EXPECTED RESULT = 4 4 4 ======================================
   cout << "------------ VectSommeMin test ------------" << endl;
   vector<int> vSommeMin = vectSommeMin(matrixSommeMin);
   for (auto i = vSommeMin.begin(); i != vSommeMin.end(); ++i)
      cout << *i << " ";
   cout << endl;
   // =========================================== VECTSOMMEMIN TEST END ============================================

   // =========================================== SHUFFLE TEST START ============================================
   cout << "------------ Shuffle test ------------" << endl;
   cout << "before" << endl << "______" << endl;
   for (const vector<int> &v : matrixShuffle) {
      for (int x : v) cout << x << ' ';
      cout << endl;
   }
   shuffleMatrice(matrixShuffle);
   cout << "after" << endl << "______" << endl;
   for (const vector<int> &v : matrixShuffle) {
      for (int x : v) cout << x << ' ';
      cout << endl;
   }
   // =========================================== SHUFFLE TEST END ============================================

   // =========================================== SORT TEST START ============================================
   cout << "------------ Sort test ------------" << endl;
   cout << "before" << endl << "______" << endl;
   for (const vector<int> &v : matrixSort) {
      for (int x : v) cout << x << ' ';
      cout << endl;
   }
   sortMatrice(matrixSort);
   cout << "after" << endl << "______" << endl;
   for (const vector<int> &v : matrixSort) {
      for (int x : v) cout << x << ' ';
      cout << endl;
   }
   // =========================================== SORT TEST END ============================================


   vector<int> v1 = {1, 2, 3, 4, 5};
   vector<int> v2 = {6, 7, 3, 8, 9};
   vector<vector<int>> v3 = {{1,  2, 6},
                             {6,  3, 8},
                             {64, 2, 8}};

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

   cout << "sommeLigne(vector3)" << endl;
   vector<int> sum = sommeLigne(v3);
   for (int i:sum)
      cout << i << " ";
   cout << endl
   	  << endl;

	cout << "sommeDiagDG(vector3)" << endl;
	int sumDiagDG;
	sommeDiagDG(v3, sumDiagDG);
	cout << sumDiagDG << endl;
	cout << endl
		  << endl;

/*   cout << "sommeDiagGD(vector3)" << endl;
   int sumDiagGD = sommeDiagGD(v3);
   cout << sumDiagGD << endl;
*/
   return EXIT_SUCCESS;
}