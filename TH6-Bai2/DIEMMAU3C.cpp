#include "DIEMMAU3C.h"
int DIEMMAU3C::dem = 0;

DIEMMAU3C::~DIEMMAU3C()
{
	cout << "Da huy 1 diem mau, con lai " << -dem << " diem" << endl;
}
DIEMMAU3C::DIEMMAU3C() : DIEM3C(), r(0), g(0), b(0)
{
	cout << "Goi ham DIEMMAU3C(), co " << ++dem << " diem" << endl;
}
DIEMMAU3C::DIEMMAU3C(double x) : DIEM3C(x), r(0), b(0), g(0)
{
	cout << "Goi ham DIEMMAU3C(double), co " << ++dem << " diem" << endl;
}
DIEMMAU3C::DIEMMAU3C(double x, double y) : DIEM3C(x, y), r(0), b(0), g(0)
{
	cout << "Goi ham DIEMMAU3C(double, double), co " << ++dem << " diem" << endl;
}
DIEMMAU3C::DIEMMAU3C(double x, double y, double z) : DIEM3C(x, y, z), r(0), b(0), g(0)
{
	cout << "Goi ham DIEMMAU3C(double, double, double), co " << ++dem << " diem" << endl;
}
DIEMMAU3C::DIEMMAU3C(double x, double y, double z, int r) : DIEM3C(x, y, z), r(r), b(0), g(0)
{
	cout << "Goi ham DIEMMAU3C(double, double, double, int), co " << ++dem << " diem" << endl;
}
DIEMMAU3C::DIEMMAU3C(double x, double y, double z, int r, int b) : DIEM3C(x, y, z), r(r), b(b), g(0)
{
	cout << "Goi ham DIEMMAU3C(double, double, double, int, int), co " << ++dem << " diem" << endl;
}
DIEMMAU3C::DIEMMAU3C(double x, double y, double z, int r, int b, int g) : DIEM3C(x, y, z), r(r), b(b), g(g)
{
	cout << "Goi ham DIEMMAU3C(double, double, double, int, int, int), co " << ++dem << " diem" << endl;
}
DIEMMAU3C::DIEMMAU3C(const DIEMMAU3C& k)
{
	setX(k.getX());
	setY(k.getY());
	setZ(k.getZ());
	r = k.r;
	b = k.b;
	g = k.g;
}
int DIEMMAU3C::getR() const
{
	return r;
}
int DIEMMAU3C::getG() const
{
	return g;
}
int DIEMMAU3C::getB() const
{
	return b;
}
void DIEMMAU3C::setR(int r)
{
	if (r < 0 || r > 255)
	{
		this->r = 0;
	}
	else this->r = r;
}
void DIEMMAU3C::setG(int g) 
{
	if (g < 0 || g > 255)
	{
		this->g = 0;
	}
	else this->g = g;
}
void DIEMMAU3C::setB(int b)
{
	if (b < 0 || b > 255)
	{
		this->b = 0;
	}
	else this->b = b;
}
bool DIEMMAU3C::Ktra_trung(const DIEMMAU3C& k) const
{
	return r == k.r && b == k.b && g == k.g;
}
void DIEMMAU3C::Nhap()
{
	DIEM3C::Nhap();
	cout << "Nhap lan luot 3 mau: ";
	cin >> r >> g >> b;
	while (cin.fail() || r < 0 || r > 255 || g < 0 || g >255 || b < 0 || b > 255)
	{
		cin.clear();
		cin.ignore();
		cout << "Khong hop le! Vui long nhao lai RGB trong [0, 255]"<<endl;
		cout << "Nhap lan luot 3 mau: ";
		cin >> r >> g >> b;
	}
}
void DIEMMAU3C::Xuat() const
{
	DIEM3C::Xuat();
	cout << " - Mau RGB: " << r << ", " << g << ", " << b;
}
istream& operator>>(istream& is, DIEMMAU3C& x)
{
	x.Nhap();
	return is;
}
ostream& operator<<(ostream& os, const DIEMMAU3C& x)
{
	x.Xuat();
	return os;
}