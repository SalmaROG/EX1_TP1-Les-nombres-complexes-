#include "Complexe.h"
#include <iostream>
using namespace std;

int main()
{
    Complex* z1 = new Complex(2, 3);
    Complex* z2 = new Complex(4, 5);
    Complex* z3;
    Complex* z4;
    Complex* z5;
    Complex* z6;
    Complex* z7;
    z3 = *z1 + *z2;
    z4 = *z1 + 4;
    z5 = *z1 * *z2;
    z6 = *z1 * 2;
    z7 = *z1 / *z2;

    z1->Afficher();
    z2->Afficher();
    z3->Afficher();
    z4->Afficher();
    z5->Afficher();
    z6->Afficher();
    z7->Afficher();
    double m = 0;
    m = (*z1).Module();
    cout << "le module est :" << m << endl;
    delete z1;
    delete z2;
    delete z3;
    delete z4;
    delete z5;
    delete z6;
    delete z7;

    return 0;
}



