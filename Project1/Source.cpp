#include <iostream>
#include <Windows.h>


using namespace std;


class drob {

private: //private protected

	int x;
	int y;

public:

	//setter - модификатор
	void setX(int a) {
		x = a;
	}

	void setY(int b) {
		(b != 0)? y = b: y = 1;
	}
	
	//getter - получатель
	int getX() {
		return x;
	}

	void print() {
		cout  << x << " / " << y << " = " << (double)x / y;
	}
};

class _time {

private:

	int h=0,m=0,s=0;

public:

	void setTime(int H, int M, int S) {
		h = H;
		m = M;
		s = S;
	}

	void btnH() {
		(h == 23) ? h = 0 :	h++;
	}
	
	void btnM() {
		if (m == 59) {
			m = 0;
			btnH();

		}
		else 
			m++;
		
	}

	void btnS() {
		if (s == 59) {
			s = 0;
			btnM();
		}
		else
			s++;
	}

	void print() {
		if (h > 23 || h < 0 ) h = 0;
		if (m > 59 || m < 0 ) m = 0;
		if (s > 59 || s < 0 ) s = 0;

		if (h < 10) cout << "0";
		cout << h << ":";

		if (m < 10) cout << "0";
		cout << m << ":";
			
		if (s < 10) cout << "0";
		cout << s << endl;
	}

};


void main() {
	int n;
	_time T;

	T.setTime(23, 59, 40);
	T.print();

	
	while (true)
	{
		
		/*cout << "1 - h\n2 - m\n3 - s: ";
		cin >> n;

		switch (n)
		{
		case 1: T.btnH();
			break;
		case 2: T.btnM();
			break;
		case 3: T.btnS();
			break;
		}*/
		system("cls");
		T.print();
		T.btnS();
		Sleep(1000);
	}

	

	

	/*drob drb;
	
	drb.setX(3);

	if (drb.getX() == 3) drb.setX(4);

	drb.setY(5);
	drb.print();*/


	system("pause");
}