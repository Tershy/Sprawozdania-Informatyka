#include <iostream>
using namespace std;

#define PI 3.1415
#define R 5

int main() {
  // Zadanie 1 //
  /*
   int marchewki;
   int _rezystory;
   int __kondensatory;
   int _obwody drukowane; //Niepoprawny. W nazwie zmiennej wystepuje spacja
   int _PlytkiPCB; //Niepoprawny. Zawiera polski znak
   int int; //Niepoprawny. Zawiera slowo kluczowe (typ danych)
   int _Cewki;
  */

  // Zadanie 2 //
  /*
  cout << "Pole kola:" << PI * R * R << endl;
  cout << "Obwod kola:" << 2 * PI * R << endl;

  double r;
  cout << "Podaj promien kuli:" << endl;
  cin >> r;

  cout << "Powierzchnia kuli:" << 4 * PI * r * r << endl;
  cout << "Objetosc kuli:" << 4.0 / 3 * PI * r * r * r << endl;
  */

  // Zadanie 3 //
  /*
   * LITERALY to wartosci wpisane "po prostu" w kodzie, jak 42 lub 3.14 lub 'A'.
   * Nie sa zmienna ani stala, tylko wartoscia, a kompilator je sam przypisuje.
   * Wystepuje 5 rodzajow literalow:
   * 1. Calkowite:
   *
   *  int a = 42   // dziesietny
   *  int b = 042  // osemkowy
   *  int c = 0x2A // szesnastkowy
   *  long long d = 100LL // LL = long long
   *  unsigned int e = 5u // u = unsigned
   *
   * 2. Zmiennoprzecinkowe:
   *
   * double x = 3.1416;     // double
   * float  y = 3.1416f;    // f = float
   * double z = 1.22e11;    // naukowy = 1,22 · 10^11
   *
   * 3. Znakowe:
   *
   * char c = 'A';
   * char nowa_linia = '\n';  // specjalna
   *
   * 4. Lancuchowe:
   *
   * const char* s = "Hello";
   * cout << "Temp";   // literał łańcuchowy
   *
   * 5. Logiczne:
   *
   * bool ok = True
   * bool blad = False
   *
   */

  // Zadanie 4

  // ==================A===================== //

  int a, b;

  cout << "podaj a i b: " << endl;
  cin >> a >> b;

  cout << "a - b: " << a - b << endl;
  cout << "b - a: " << b - a << endl;

  // =================B====================== //

  float x, y;

  cout << "podaj dwie liczby rzeczywiste: " << endl;
  cin >> x >> y;

  cout << "iloczyn jest rowny: " << x * y << endl;

  // ================C======================= //

  float a1, b1;

  cout << "podaj dwie liczby rzeczywiste: " << endl;
  cin >> a1 >> b1;

  cout << "a / b: " << a1 / b1 << endl;
  cout << "b / a: " << b1 / a1 << endl;

  // ===============D======================== //

  int x1, y1;

  cout << "podaj dwie liczby rzeczywiste: " << endl;
  cin >> x1 >> y1;

  cout << "iloraz jest rowny: " << x1 / y1 << endl;

  // ==============E========================= //

  int x2, y2;

  cout << "podaj dwie liczby rzeczywiste:" << endl;
  cin >> x2 >> y2;

  cout << "reszta z dzielenia" << x2 % y2 << endl;

  // ==============F========================= //

  double cale, cm;

  cout << "================================" << endl;
  cout << " PROGRAM: Zamiana cali na centymetry" << endl;
  cout << " AUTOR: Maksymilian" << endl;
  cout << " DATA: 28.10.2026" << endl;
  cout << "================================" << endl;
  cout << endl;

  cout << "Podaj dlugosc wyrazona w calach DL =";
  cin >> cale;

  cm = cale * 2.54;

  cout << "Dlugosc wyrazona w centymetrach to DL=" << cm << endl;

  // ==============G========================= //

  // ==============H========================= //

  // ==============I========================= //

  // ==============J========================= //
}
