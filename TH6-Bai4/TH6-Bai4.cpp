#include "DIEM3CMAU.h"

using namespace std;
int main()
{
	cout << "So diem mau 3 chieu hien tai la: " << DIEM3CMAU::getDem() << " diem" << endl;
	DIEM3CMAU d1; DIEM3CMAU d2(2); DIEM3CMAU d3(-2, 5); DIEM3CMAU d4(1, 5, -1);
	DIEM3CMAU d5(2, -4, 1, 2); DIEM3CMAU d6(1, -6, 3, 1, 100); DIEM3CMAU d7(1, -3, 6, 200, 3, 50);
	DIEM3CMAU* d8 = new DIEM3CMAU;
	cout << "So diem mau 3 chieu hien tai la: " << DIEM3CMAU::getDem() << " diem" << endl;
	cout << "d1: " << d1 << endl;
	cout << "d2: " << d2 << endl;
	cout << "d3: " << d3 << endl;
	cout << "d4: " << d4 << endl;
	cout << "d5: " << d5 << endl;
	cout << "d6: " << d6 << endl;
	cout << "d7: " << d7 << endl;
	cout << "d8: " << *d8 << endl;
	cout << "Nhap d1 moi: ";
	cin >> d1;
	cout << "Diem d1 moi: " << d1 << endl;
	if (d1.DIEM3C::KiemTraTrung(d7)) cout << "Toa do diem 1 trung voi toa do diem d7"<<endl;
	else cout << "Toa do diem 1 khong trung voi toa do diem d7" << endl;
	if (d1.MAU::KiemTraTrung(d7)) cout << "Mau diem 1 trung voi mau diem d7" << endl;
	else cout << "Mau diem 1 khong trung voi mau diem d7" << endl;
	if (d1.DIEM3CMAU::Ktra_trung(d7)) cout << "Toa do va mau diem 1 trung voi toa do va mau diem d7" << endl;
	else cout << "Toa do va mau diem 1 khong trung voi toa do va mau diem d7" << endl;
	delete d8;
}
