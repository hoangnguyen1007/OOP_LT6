#include "DIEMMAU.h"
int DIEMMAU::dem = 0;
DIEMMAU::~DIEMMAU()
{
	cout << "Da huy DIEMMAU, con lai " << --dem << " diem mau"<<endl;
}
DIEMMAU::DIEMMAU() : Diem(0, 0), MAU(0, 0, 0)
{
	cout << "Goi ham khoi tao DIEMMAU(), hien co " << ++dem << " diem mau" << endl;
}
DIEMMAU::DIEMMAU(double x) : Diem(x, 0), MAU(0, 0, 0)
{
	cout << "Goi ham khoi tao DIEMMAU(double), hien co " << ++dem << " diem mau" << endl;
}
DIEMMAU::DIEMMAU(double x, double y) : Diem(x, y), MAU(0, 0, 0)
{
	cout << "Goi ham khoi tao DIEMMAU(double, double), hien co " << ++dem << " diem mau" << endl;
}
DIEMMAU::DIEMMAU(double x, double y, int r) : Diem(x, y), MAU(r, 0, 0)
{
	cout << "Goi ham khoi tao DIEMMAU(double, double, int), hien co " << ++dem << " diem mau" << endl;
}
DIEMMAU::DIEMMAU(double x, double y, int r, int g) : Diem(x, y), MAU(r, g, 0)
{
	cout << "Goi ham khoi tao DIEMMAU(double, double, int, int), hien co " << ++dem << " diem mau" << endl;
}
DIEMMAU::DIEMMAU(double x, double y, int r, int g, int b) : Diem(x, y), MAU(r , g, b)
{
	cout << "Goi ham khoi tao DIEMMAU(double, double, int, int, int), hien co " << ++dem << " diem mau" << endl;
}
int DIEMMAU::getDem()
{
	return dem;
}
void DIEMMAU::Nhap()
{
	Diem::Nhap();
	MAU::Nhap();
}
void DIEMMAU::Xuat() const
{
	Diem::Xuat();
	cout << ", ";
	MAU::Xuat();
}
bool DIEMMAU::Ktra_trung(const DIEMMAU& b)
{
	return getX() == b.getX() && getY() == b.getY() && getR() == b.getR() && getG() == b.getG() && getB() == b.getB();
}
istream& operator>>(istream& is, DIEMMAU& x)
{
	x.Nhap();
	return is;
}
ostream& operator<<(ostream& os, const DIEMMAU& x)
{
	x.Xuat();
	return os;
}