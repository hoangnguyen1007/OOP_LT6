#include "DIEM3C.h"

int main()
{
	cout << "So diem 3 Chieu hien tai la: " << DIEM3C::getDem();
	DIEM3C d1, d2(3), d3(-3, 4), d4(1, 5, -3), *d5 = new DIEM3C;
	cout << "So diem 3 Chieu hien tai la: " << DIEM3C::getDem();
	cout << "d1: " << d1 << endl;
	cout << "d2: " << d2 << endl;
	cout << "d3: " << d3 << endl;
	cout << "d4: " << d4 << endl;
	cout << "d5: " << *d5 << endl;
	cout << "Nhap lai d1 moi: "<<endl;
	cin >> d1;
	cout << "Diem d1 moi: "<<d1<<endl;
	if (d1.KiemTraTrung(d4)) cout << "Diem 1 trung voi diem 4" << endl;
	else cout << "Diem 1 khong trung voi diem 4" << endl;
	cout << "Nhap lan luot dx, dy, dz de di chuyen diem 1: ";
	int x, y, z;
	cin >> x >> y >> z;
	d1.DiChuyen(x, y, z);
	cout << "Diem d1 sau khi di chuyen: " << d1<<endl;
	cout << "Chu vi cua tam giac tao tu ba diem d1, d3, d4 la: " << d1.ChuVi(d3, d4)<<endl;
	cout << "Dien tich cua tam giac tao tu ba diem d1, d3, d4 la: " << d1.DienTich(d3, d4) << endl;
	delete d5;
}