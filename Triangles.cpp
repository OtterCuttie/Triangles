#include <iostream>
using namespace std;

int main() {
	setlocale(0, "");
	int a;
	int b;
	int c;
	cout << "Введите три угла в градусах";
	cin >> a;
	cin >> b;
	cin >> c;
	if (a == b or a == c or c == b){
		cout << "Равнобедренный треуголтник";
	    if (a == b and a == c and b == c) {
		cout << "Равносторонний треугольник";
	    }
	}
	else if (a ==90 or b==90 or c==90) {
		cout << "Прямоугольный треуголтник";
		if (a == b or a == c or c == b) {
			cout << "Равнобедренный треуголтник";
		}
     
	}
    else if (a == b and a == c and b == c) {
			cout << "Равносторонний треугольник";
		}
	else if (a+b+c!=180 ) {
		cout << "Треугольник не получается";
	}
	else if (a <0 or c<0 or b<0) {
		cout << "Треугольник не получается";
	}
	else if (a ==180  or c==180 or b ==180) {
		cout << "Треугольник не получается";
	}
	else if (a > 180 or c > 180 or b > 180) {
		cout << "Треугольник не получается";
	}
	else{
		cout << "Введите нормально числа";
	}
}
