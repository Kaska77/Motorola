#include <iostream>
#include <string.h>
#include <Math.h>
using namespace std;

 unsigned int a, b, P ;
 float O;
 int I;


string r, RUN;

int main()
{
cout << " Jezeli chcesz zaczac wpisz RUN"<< endl;
cin >> r;

if(r=="RUN")
    {
       cout << "Jak dlugi ma byc plot, podaj w pelnych metrach" << endl;
       cin >> O;
       I=O;

        if(O>0)
        {
            if(O-I==0)
             {
                b = O/2;
                a = (O-b)/2;
                P = a*b;
                cout << " a = " << a << " b = " << b << endl;
                cout << " Powierzchnia Twojej farmy wyniesie " << P << " metrow kwadratowych "<< endl;
             }
            else
             {
                cout << " Nie podales liczby calkowitej " << endl;
             }
        }
        else
        {
            cout << " Podaj wartosc dodatnia" << endl;
        }
    }

else
       {
           cout << " Nie wpisales RUN"<< endl;

       }

    return 0;
}
