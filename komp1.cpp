#include <windows.h>
#include <time.h>
#include <unistd.h>
#include <iostream>
using namespace std;

int main () {
   double x = 0;
   double y = 0;
   double z = 0;
   int choice;
    startkomp:
    system("CLS");
 cout << "--------------------" "\n";
 cout << " KOMPARATOR" "\n";
 cout << "--------------------" "\n";
 cout << "\n";
     cout << "(1) Komparator" "\n";
     cout << "(2) Kalkulacka" "\n";
     cout << "(3) Hadani cisla" "\n";
   cin >> choice;
   switch (choice) {
  case 1:
    system("CLS");
    cout << "Zadejte prvni cislo: ";
    cin >> x; "\n";
    cout << "Zadejte druhe cislo: ";
    cin >> y; "\n";
     if (x>y) { system("CLS");
        cout << x;
        cout << " je vetsi cislo";
        Sleep(2000);
        goto startkomp;
     } if (x<y) { system("CLS");
        cout << y;
        cout << " je vetsi cislo";
        Sleep(2000);
        goto startkomp;
     }
        else { system("CLS");
        cout << "tato cisla jsou si rovny";
        Sleep(2000);
        goto startkomp;
     }
         break;
  case 2:
    system("CLS");
    char znam;
    cout << "Zadejte cislo: ";
    cin >> x; "\n";
    cout << "Zadejte znamenko: ";
    cin >> znam; "\n";
    cout << "Zadejte dalsi cislo: ";
    cin >> y; "\n";
      if (znam == '+') {
        cout << "Vysledek je: ";
        cout << x + y;
        Sleep(2000);
        goto startkomp;
      } else if (znam == '-') {
        cout << "Vysledek je: ";
        cout << x - y;
        Sleep(2000);
        goto startkomp;
      } else if (znam == '*') {
        cout << "Vysledek je: ";
        cout << x * y;
        Sleep(2000);
        goto startkomp;
      } else if (znam == '/') {
        cout << "Vysledek je: ";
        cout << x / y;
        Sleep(2000);
        goto startkomp;
      }
         break;
   case 3:
       system("CLS");
       int guess;
       int secretnum;

       srand(time(NULL));
       secretnum = rand () % 20 + 1;
       do{
       cout << "Hadejte cislo od 1 do 20: ";
       cin >> guess;
       if (guess<secretnum) {
        cout << "random cislo je vetsi nez vase" "\n";
       }else if (guess>secretnum) {
        cout << "random cislo je mensi nez vase" "\n";
       }

       } while (secretnum != guess);
         cout << "Ano, spravne";
          Sleep(3000);
          goto startkomp;
          } //Konec switche



} //konec
