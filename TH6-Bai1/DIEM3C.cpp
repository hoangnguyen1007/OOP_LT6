#include "DIEM3C.h"
#include <cmath>
int DIEM3C::dem = 0;
DIEM3C::~DIEM3C()
{
	cout << "Da huy diem 3 chieu, con lai " << --dem << " diem 3 chieu!" << endl;
}
DIEM3C::DIEM3C() : Diem(0, 0) , z(0)
{
	cout << "Goi ham thiet lap DIEM3C(), co " << ++dem << " diem 3 chieu" << endl;
}
DIEM3C::DIEM3C(double dx) : Diem(dx, 0), z(0)
{
	cout << "Goi ham thiet lap DIEM3C(double), co " << ++dem << " diem 3 chieu" << endl;
}
DIEM3C::DIEM3C(double dx, double dy) : Diem(dx, dy), z(0)
{
	cout << "Goi ham thiet lap DIEM3C(double, double), co " << ++dem << " diem 3 chieu" << endl;
}
DIEM3C::DIEM3C(double x, double y, double z) : Diem(x, y), z(z)
{
	cout << "Goi ham thiet lap DIEM3C(double, double, double), co " << ++dem << " diem 3 chieu" << endl;
}
int DIEM3C::getDem()
{
	return dem;
}
double DIEM3C::getZ() const
{
	return z;
}
void DIEM3C::setZ(double z)
{
	this->z = z;
}
bool DIEM3C::ktra_trung(const DIEM3C& b) const
{
	return this->getX() == b.getX() && this->getY() == b.getY() && this->getZ() == b.getZ();
}
void DIEM3C::DiChuyen(double dx, double dy, double dz)
{
	setX(getX() + dx);
	setY(getY() + dy);
	this->z += dz;
}
double DIEM3C::tinh_kc(const DIEM3C& b) const
{
	return sqrt(pow(getX() - b.getX(), 2) + pow(getY() - b.getY(), 2) + pow(getZ() - b.getZ(), 2));
}
DIEM3C DIEM3C::Diem_DX()
{
	return DIEM3C(-getX(), -getY(), -getZ());
}
double DIEM3C::ChuVi(const DIEM3C& b, const DIEM3C& c) const
{
	double ab = this->KhoangCach(b);
	double ac = this->KhoangCach(c);
	double bc = b.KhoangCach(c);
	return ab + ac + bc;
}
double DIEM3C::DienTich(const DIEM3C& b, const DIEM3C& c) const
{
	double ab = this->KhoangCach(b);
	double ac = this->KhoangCach(c);
	double bc = b.KhoangCach(c);
	double p = (ab + ac + bc) / 2;
	return sqrt(p * (p - ab) * (p - ac) * (p - bc));
}
void DIEM3C::Nhap()
{
	Diem::Nhap();
	cout << "Nhap cao do: ";
	cin >> z;
	while (cin.fail())
	{
		cin.clear();
		cin.ignore();
		cout << "Khong hop le! Vui long nhap lai!" << endl;
		cin >> z;
	}
}
void DIEM3C::Xuat() const
{
	cout << "(" << getX() << ", " << getY() << ", " << z << ")";
}
istream& operator>>(istream& is, DIEM3C& b)
{
	b.Nhap();
	return is;
}
ostream& operator<<(ostream& os, const DIEM3C& b)
{
	b.Xuat();
	return os;
}