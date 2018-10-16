#include <iostream>
#include <Windows.h>


using namespace std;


class drob {

private: //private, protected, public

	int x;
	int y;

public:
	//конструктор по умолчанию
	drob() {
		x = 0;
		y = 1;
	}

	//конструктор с параметром
	drob(int a, int b) {
		x = a;
		setY(b);
	}
	drob(int a) {
		x = a;
		y = 1;
	}

	//setter - модификатор
	void setX(int a) {
		x = a;
	}

	void setY(int b) {
		(b != 0) ? y = b : y = 1;
	}

	//getter - получатель
	int getX() {
		return x;
	}

	void print() {
		cout << x << " / " << y << " = " << (double)x / y;
	}

	//деструктор может быть всегда один
	~drob() {

	}
};


void main() {	

	/*drob drb(3,2);
	drob d1(14);
	
	d1.print();
	
	drb.print();*/
	//drb.setX(3);

	//if (drb.getX() == 3) drb.setX(4);

	//drb.setY(5);
	cout << endl;
	system("pause");
}