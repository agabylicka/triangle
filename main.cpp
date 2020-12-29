/*Write a program that will verify whether for the three sides of the triangle (a, b, c) entered by the user.
The program will evaluate, that can build a triangle. */


#include <iostream>
#include <cmath>

using namespace std;


int main()
{
    float liczba1;
    float liczba2;
    float liczba3;
    cout<< "Sprawdz czy z podanych przez Ciebie bokow uda sie zbudowac trojkat." << endl;
    cout<< "Podaj dlugosc pierwszego boku: "<< endl;
    cin>> liczba1;
    cout<< "Podaj dlugosc drugiego boku: "<< endl;
    cin>> liczba2;
    cout<< "Podaj dlugosc trzeciego boku: "<< endl;
    cin>> liczba3;

    if
    ((liczba1==0)||(liczba2==0)||(liczba3==0))
    {
        cout<<  "Nie moze nastapic triangulacja";
    }

    else if
    ((liczba1+liczba2>liczba3)&&(liczba2+liczba3>liczba1)&&(liczba1+liczba3>liczba2))
    {
        cout<< "Mozna zbudowac trojkat z bokow o dlugosci "<< liczba1<<", "<< liczba2<< ", "<< liczba3<<endl;
    }

    else
    {
        cout<< "Nie mozna zbudowac trojkata o podanych dlugosciach bokow ";
    }


    return 0;
}
