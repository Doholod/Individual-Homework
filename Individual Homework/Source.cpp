/// Сделал Черданцев Егор 

#include <iostream>
#include <math.h>
#include <math.h>
using namespace std;

//Задание 1
//int main() {
//	setlocale(0, "RU");
//	long double gyp, kat; cin >> gyp >> kat;
//	cout.precision(4);
//	long double kat2 = sqrt((gyp * gyp) - (kat * kat));
//	cout << "Второй катет = " << kat2 << endl;
//	cout << "Радиус вписанной окружности = " << (kat + kat2 - gyp) / 2;
//}

//Задание 2
#define a2 (a*a)
#define a4 (a2*a2)
#define a5 (a4*a)
#define a10 (a5*a5)
#define a15 (a10*a5)
int main() {
	long double a; cin >> a;
	cout.precision(5);
	cout << a15;
}

//Задание 3
