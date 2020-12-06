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

   vector<int> v1 = {1, 2, 3, 4, 5};
   vector<int> v2 = {6, 7, 3, 8, 9};

   // matrix declaration
   Matrix matrixSquared = {{1,1,1},{2,2,2},{3,3,3}};
   Matrix matrixNotSquared = {{1,1,1},{2,2,2},{3,3,3},{4,4,4}};
   Matrix matrixRegu = {{1,1,1},{2,2,2},{3,3,3},{4,4,4}};
   Matrix matrixNotRegu = {{1,1},{2,2,2},{3,3},{4,4,4}};
   Matrix matrixMinCol = {{1,1,1,1},{2,2},{3,3,3,3,3,3},{4,4,4}};
   Matrix matrixSommeLigne = {{1,  2, 6, 3},{6,  3, 8, 3, 5},{64, 2, 8, 0, 53, 4}};
   Matrix matrixSommeMin = {{4,4,4}, {6,7,2}, {17,1}, {8,7},{6,6}};
   Matrix matrixShuffle = {{1,1,1}, {2,2,2}, {3,3,3},{4,4,4}};
   Matrix matrixSort = {{4,4},{2},{5,7,8},{7,9},{3,10}};

   cout << "Operateur (vector)" << endl;
   Operateur(v1);
   cout << endl
        << endl;
   cout << "Operateur (vector1, vector2)" << endl;
   Operateur(v1, v2);
   cout << endl << endl;


   // Boolean test, they should all be true! (so print)
   if (estCarree(matrixSquared))
      cout << "est carree" << endl;
   if (!estCarree(matrixNotSquared))
      cout << "est pas carree" << endl;
   if (estReguliere(matrixRegu))
      cout << "est regu" << endl;
   if (!estReguliere(matrixNotRegu))
      cout << "est pas regu" << endl;

   cout << "minCol (matrixMinCol) :" << endl;
   cout << minCol(matrixMinCol) << endl << endl;

   cout << "sommeLigne(matrixSommeLigne)" << endl;
   vector<int> sum = sommeLigne(matrixSommeLigne);
   for (int i:sum)
      cout << i << " ";

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
   return EXIT_SUCCESS;
}