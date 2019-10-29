#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
{
    srand(static_cast<unsigned int>(time(0)));
    string Kata;
    string AcakKata;
    int i;
    int randIdx1, randIdx2;
    char tmpRand;
    cout << "Masukkan Kata = ";
    cin >> Kata;
    AcakKata = Kata;
    for(i=0;i<Kata.size();i++){
        randIdx1 = rand() % Kata.size() + 0;
        randIdx2 = rand() % Kata.size() + 0;
        tmpRand = AcakKata[randIdx1];
        AcakKata[randIdx1] = AcakKata[randIdx2];
        AcakKata[randIdx2] = tmpRand;
        cout << randIdx1 << " " << randIdx2 << " " << Kata.size();
        cout << " " << AcakKata << endl;
    }
    cout << "Kata = " << Kata << endl;
    cout << "Acak " << AcakKata << endl;
    return 0;
}
