#include<iostream>
using namespace std;

//При учете, что отрицательный опыт тоже опыт все корректно

void main() {
	setlocale(LC_ALL, "rus");

	int sk;

	cout << "Введите число очков опыта: ";
	cin >> sk;
	cout << "-----Считаем-----" << endl;

	if (sk < 1000) {
		cout << "Ваш уровень: 1"  << endl;
	}
	else if (sk < 2500) {
		cout << "Ваш уровень: 2" << endl;
	}
	else if (sk < 5000) {
		cout << "Ваш уровень: 3" << endl;
	}
	else {
		cout << "Ваш уровень: 4" << endl;

	}

}