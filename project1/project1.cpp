#include <iostream>
#include "Complex.h"
using namespace std;
int main()
{
    Complex c1(4, 3);
    Complex c2(1,-2);

    // Affichage des nombres complexes
    c1.afficher();
    c2.afficher();

    // Module
    cout << "Module de c1 : " << c1.module() << endl;

    // Conjugué
    Complex conj_c1 = c1.conjugue();
    cout << "Conjugué de c1 : ";
    conj_c1.afficher();

    // Addition et soustraction
    Complex c3 = c1 + c2;
    cout << "c1 + c2 = ";
    c3.afficher();

    Complex c4 = c1 - c2;
    cout << "c1 - c2 = ";
    c4.afficher();

    // Multiplication et division
    Complex c5 = c1 * c2;
    cout << "c1 * c2 = ";
    c5.afficher();

    Complex c6 = c1 / c2;
    cout << "c1 / c2 = ";
    c6.afficher();

    // Complexe + double et double + Complexe
    Complex c7 = c1 + 2.0;
    cout << "c1 + 2.0 = ";
    c7.afficher();

    Complex c8 = 2.0 + c1;
    cout << "2.0 + c1 = ";
    c8.afficher();

    // Comparaison d'égalité
    cout << "Est-ce que c1 == c2 ? " << (c1 == c2 ? "Oui" : "Non") << endl;

    return 0;
}

