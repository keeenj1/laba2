#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;


int main() {
	setlocale(LC_ALL, "RU");

	cout << "������� 1" << endl; // ������� 1
	int x, y, z;
	cout << "������� ����� X: "; cin >> x;
	cout << "������� ����� Y: "; cin >> y;
	cout << "������� ����� Z: "; cin >> z;

	if (x % 2 != 0 && y % 2 != 0) {
		cout << "1. condition is true" << endl;
	}
	else {
		cout << "1. condition is false" << endl;
	}
	if ((x < 20 && y>19) || (x > 19 && y < 20)) {
		cout << "2. condition is true" << endl;
	}
	else {
		cout << "2. condition is false" << endl;
	}
	if (x == 0 || y == 0) {
		cout << "3. condition is true" << endl;
	}
	else {
		cout << "3. condition is false" << endl;
	}
	if (x < 0 && y < 0 && z < 0) {
		cout << "4. condition is true" << endl;
	}
	else {
		cout << "4. condition is false" << endl;
	}
	if ((x % 5 == 0 && y % 5 != 0 && z % 5 != 0) || (x % 5 != 0 && y % 5 == 0 && z % 5 != 0) || (x % 5 != 0 && y % 5 != 0 && z % 5 == 0)) {
		cout << "5. condition is true" << endl;
	}
	else {
		cout << "5. condition is false" << endl;
	}
	if (x > 100 || y > 100 || z > 100) {
		cout << "6. condition is true" << endl;
	}
	else {
		cout << "6. condition is false" << endl;
	}

	cout << "������� 2" << endl; // ������� 2
	using byte = unsigned char;
	pair<byte, byte> positionA;
	int x1, y1;
	cout << "������� ������� ����� �: "; cin >> x1 >> y1;
	positionA.first = x1;
	positionA.second = y1;
	while ((x1<1) || (x1>8) || (y1<1) || (y1>9)) {
		cout << "�� ����� �� �������, ������� ���������� ������: "; 
		cin >> x1 >> y1;
		positionA.first = x1;
		positionA.second = y1;
	}
	pair<byte, byte> positionB; 
	int x2, y2;
	cout << "������� ������� ����� B: "; cin >> x2 >> y2;
	positionA.first = x2;
	positionA.second = y2;
	while ((x2 < 1) || (x2 > 8) || (y2 < 1) || (y2 > 9) || (x1==x2 && y1==y2)) {
		cout << "�� ����� �� �������, ������� ���������� ������: ";
		cin >> x2 >> y2;
		positionA.first = x2;
		positionA.second = y2;
	}

	if (((positionA.first == positionB.first) && 1 < positionB.first < 8) || ((positionA.second == positionB.second) && 1 < positionB.second < 8)) {
		cout << "1. ����" << endl;
	}
	else {
		cout << "1. �� ����" << endl;
	}
	if (positionA.first - positionB.first == positionA.second - positionB.second && positionB.first != 1 && positionB.second != 1) {
		cout << "2. ����" << endl;
	}
	else {
		cout << "2. �� ����" << endl;
	}
	if ((-2 < positionA.first - positionB.first < 2) || (-2 < positionA.second - positionB.second < 2)) {
		cout << "3. ����" << endl;
	}
	else {
		cout << "3. �� ����" << endl;
	}
	if ((((positionA.first == positionB.first) && 1 < positionB.first < 8) || ((positionA.second == positionB.second) && 1 < positionB.second < 8)) || (positionA.first - positionB.first == positionA.second - positionB.second && positionB.first != 1 && positionB.second != 1)) {
		cout << "4. ����" << endl;
	}
	else {
		cout << "4. �� ����" << endl;
	}
	if ((abs(positionA.first - positionB.first) == 1) && (positionB.second - positionA.second == 1)) {
		cout << "5. ����" << endl;
	}
	else {
		cout << "5. �� ����" << endl;
	}
	
	//cout << "������� 3" << endl; // ������� 3
	//int n;
	//cout << "1x7=7" << endl; cout << "2x7=14" << endl;cout << "3x7=21" << endl;cout << "4x7=28"<< endl; 
	//cout << "5x7=35" << endl;cout << "6x7=42" << endl;cout << "7x7=49" << endl;cout << "8x7=56" << endl;
	//cout << "9x7=63" << endl;
	//cout << "������� ����� N: "; cin >> n;
	//for (int k = 1;k < 10;k++) {
	//	cout << k << "x" << n << "=" << k * n << endl;
	//}

	//cout << "������� 4" << endl; // ������� 4
	//int p = 1;
	//for (int k = 8;k < 16;k++) {
	//	p = p * k;
	//}
	//cout << p << endl;

	//double u;
	//cout << "������� ����� �: ";cin >> u;
	//for (int f = u+1;f < 21;f++) {
	//	u = u * f;
	//}
	//cout << fixed << setprecision(0) << u << endl;

	//double b;
	//long sum=1;
	//cout << "������� ����� b: "; cin >> b;
	//for (int g = 1;g < b+1;g++) {
	//	sum = sum * g;
	//}
	//cout << fixed << setprecision(0) << sum << endl;

	//long a1, b1;
	//double sum1=1;
	//cout << "������� ����� �: "; cin >> a1;
	//cout << "������� ����� b: "; cin >> b1;
	//while (b1 >= a1) {
	//	sum1 *= a1;
	//	a1 += 1;
	//}
	//cout << sum1 << endl;

	return 0;
}
