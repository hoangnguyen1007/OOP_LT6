#include "DIEMMAU3C.h"

int main()
{
	cout << "So diem mau hien tai la " << DIEMMAU3C::getDem();
	DIEMMAU3C d1, d2(5), d3(1, -6), d4(2, -1, 5), d5(1, 6, 1, -1), d6(3, 5, -1, 3, 5), d7(3, 1, 6, 3, 2, 6), * d8 = new DIEMMAU3C;
	cout << "So diem mau hien tai la " << DIEMMAU3C::getDem()<<endl;
	cout << "d1: " << d1 << endl;
	cout << "d2: " << d2 << endl;
	cout << "d3: " << d3 << endl;
	cout << "d4: " << d4 << endl;
	cout << "d5: " << d5 << endl;
	cout << "d6: " << d6 << endl;
	cout << "d7: " << d7 << endl;
	cout << "d8: " << *d8 << endl;
	cout << "Nhap lai diem d1: "<<endl;
	cin >> d1;
	cout << "d1: " << d1<<endl;
	if (d1.DIEMMAU3C::Ktra_trung(d7)) cout << "Mau cua d1 trung voi d7" << endl;
	else cout << "Mau cua d1 khong trung voi d7" << endl;
}