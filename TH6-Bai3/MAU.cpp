#include "MAU.h"
int MAU::dem = 0;
MAU::MAU() : r(0), g(0), b(0)
{
	dem++;
}
MAU::MAU(int r) : r(r), g(0), b(0)
{
	dem++;
}
MAU::MAU(int r, int g) : r(r), g(g), b(0)
{
	dem++;
}
MAU::MAU(int r, int g, int b) : r(r), g(g), b(b)
{
	dem++;
}
void MAU::Nhap()
{
	cout << "Nhap mau RGB [0, 255]: ";
	cin >> r >> g >> b;
	while (cin.fail() || r < 0 || g < 0 || b < 0 || r > 255 || g > 255 | b > 255)
	{
		cin.clear();
		cin.ignore();
		cout << "Khong hop le! Vui long nhap lai!" << endl;
		cout << "Nhap mau RGB [0, 255]: ";
		cin >> r >> g >> b;
	}
}
void MAU::Xuat() const
{
	cout << "Mau RGB: " << r << ", " << g << ", " << b;
}
int MAU::getR() const
{
	return r;
}
int MAU::getG() const
{
	return g;
}
int MAU::getB() const
{
	return b;
}
int MAU::getDem()
{
	return dem;
}
bool MAU::KiemTraTrung(const MAU& k)
{
	return r == k.getR() && g == k.getG() && b == k.getB();
}
void MAU::setR(int r)
{
	this->r = r;
}
void MAU::setG(int g)
{
	this->g = g;
}
void MAU::setB(int b)
{
	this->b = b;
}
istream& operator>>(istream& is, MAU& x)
{
	x.Nhap();
	return is;
}
ostream& operator<<(ostream& os, MAU x)
{
	x.Xuat();
	return os;
}