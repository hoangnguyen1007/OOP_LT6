#include "DIEMMAU.h"

int main()
{
    cout << "So Diem 2 chieu co mau la: " << DIEMMAU::getDem();
    DIEMMAU d1; DIEMMAU d2(4); DIEMMAU d3(-3, 5); DIEMMAU d4(-1, 5, 3); DIEMMAU d5(4, 2, 1, 6);
    DIEMMAU d6(3, 1, 100, 5, 2); DIEMMAU* d7 = new DIEMMAU;
    cout << "d1: " << d1 << "\n";
    cout << "d2: " << d2 << "\n";
    cout << "d3: " << d3 << "\n";
    cout << "d4: " << d4 << "\n";
    cout << "d5: " << d5 << "\n";
    cout << "d6: " << d6 << "\n";
    cout << "d7: " << *d7 << "\n";
    cout << "Nhap lai toa do va mau cua diem d1: " << endl;
    cin >> d1;
    cout << "d1 moi: " << d1 << endl;
    if (d1.Diem::KiemTraTrung(d6)) cout << "Toa do d1 trung voi toa do d6" << endl;
    cout<< "Toa do d1 khong trung voi toa do d6" << endl;
    if (d1.MAU::KiemTraTrung(d6)) cout << "Mau cua d1 trung voi mau cua d6" << endl;
    cout << "Mau cua d1 khong trung voi mau cua d6" << endl;
    if (d1.DIEMMAU::Ktra_trung(d6)) cout << "Toa do va mau cua d1 trung voi toa do va mau cua  d6" << endl;
    cout << "Toa do va mau cua d1 khong trung voi toa do va mau cua d6" << endl;
    delete d7;
}

