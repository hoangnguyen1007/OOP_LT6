#include "DIEM3CMAU.h"
int DIEM3CMAU::dem = 0;
DIEM3CMAU::~DIEM3CMAU()
{
	cout << "Da huy 1 diem mau ba chieu, con lai " << --dem << " diem" << endl;
}
DIEM3CMAU::DIEM3CMAU() : DIEM3C(0, 0, 0), MAU(0, 0, 0)
{
	cout << "Goi ham khoi tao DIEM3CMAU(), co " << ++dem << " diem" << endl;
}
DIEM3CMAU::DIEM3CMAU(double x) : DIEM3C(x, 0, 0), MAU(0, 0, 0)
{
	cout << "Goi ham khoi tao DIEM3CMAU(double), co " << ++dem << " diem" << endl;
}
DIEM3CMAU::DIEM3CMAU(double x, double y) : DIEM3C(x, y, 0), MAU(0, 0, 0)
{
	cout << "Goi ham khoi tao DIEM3CMAU(double, double), co " << ++dem << " diem" << endl;
}
DIEM3CMAU::DIEM3CMAU(double x, double y, double z) : DIEM3C(x, y, z), MAU(0, 0, 0)
{
	cout << "Goi ham khoi tao DIEM3CMAU(double, double, double), co " << ++dem << " diem" << endl;
}
DIEM3CMAU::DIEM3CMAU(double x, double y, double z, int r) : DIEM3C(x, y, z), MAU(r, 0, 0)
{
	cout << "Goi ham khoi tao DIEM3CMAU(double, double, double, int), co " << ++dem << " diem" << endl;
}
DIEM3CMAU::DIEM3CMAU(double x, double y, double z, int r, int b) : DIEM3C(x, y, z), MAU(r, b, 0)
{
	cout << "Goi ham khoi tao DIEM3CMAU(double, double, double, int, int), co " << ++dem << " diem" << endl;
}
DIEM3CMAU::DIEM3CMAU(double x, double y, double z, int r, int b, int g) : DIEM3C(x, y, z), MAU(r, b, g)
{
	cout << "Goi ham khoi tao DIEM3CMAU(double, double, double, int, int, int), co " << ++dem << " diem" << endl;
}
void DIEM3CMAU::Nhap()
{
	DIEM3C::Nhap();
	MAU::Nhap();
}
void DIEM3CMAU::Xuat() const
{
	DIEM3C::Xuat();
	cout << ", ";
	MAU::Xuat();
}
istream& operator>>(istream& is, DIEM3CMAU& x)
{
	x.Nhap();
	return is;
}
ostream& operator<<(ostream& os, const DIEM3CMAU& x)
{
	x.Xuat();
	return os;
}
int DIEM3CMAU::getDem()
{
	return dem;
}
bool DIEM3CMAU::Ktra_trung(const DIEM3CMAU& k)
{
	return this->getX() == k.getX() && this->getY() == k.getY() && this->getZ() == k.getZ() && this->getR() == k.getR() && this->getG() == k.getG() && this->getB() == k.getB();
}
