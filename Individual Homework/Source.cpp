/// ������ ��������� ���� ///

#include <iostream>
#include <math.h>
#include <fstream>
#include <string>
using namespace std;

//������� 1
//int main() {
//	setlocale(0, "RU");
//	long double gyp, kat; cin >> gyp >> kat;
//	cout.precision(4);
//	long double kat2 = sqrt((gyp * gyp) - (kat * kat));
//	cout << "������ ����� = " << kat2 << endl;
//	cout << "������ ��������� ���������� = " << (kat + kat2 - gyp) / 2;
//}

//������� 2
//#define a2 (a*a)
//#define a4 (a2*a2)
//#define a5 (a4*a)
//#define a10 (a5*a5)
//#define a15 (a10*a5)
//int main() {
//	long double a; cin >> a;
//	cout.precision(5);
//	cout << a15;
//}

//������� 3
int main() {
	setlocale(0, "RU");
	//������ 1
	long double b, q; cin >> b >> q;
	long long n; cin >> n;
	cout << "������ 1, �����: " << b*(1- pow(q, n)) / (1-q)<<endl;

	//������ 2
	ifstream infile;
	infile.open("in2.dat", ios::in);

	//��������� ������ �� �����
	infile >> b;
	infile.ignore(10000, ' ');
	infile >> q;
	infile.ignore(10000, ' ');
	infile >> n;
	infile.close();
	cout << "������ 2, �����: " << b * (1 - pow(q, n)) / (1 - q) << endl;

	//������ 3
	infile.open("in3.dat", ios::in);

	//��������� ������ �� �����
	infile >> b;
	infile.ignore(10000, ' ');
	infile >> q;
	infile.ignore(10000, ' ');
	infile >> n;

	//����� ���������� � ���� "out3.data"
	infile.close();
	ofstream outfile;
	outfile.open("out3.dat");
	outfile.clear();
	outfile << "������ 3, �����: " << b * (1 - pow(q, n)) / (1 - q) << endl;
}