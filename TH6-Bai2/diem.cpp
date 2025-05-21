#include <iostream>
#include "Diem.h"
using namespace std;
int Diem::dem = 0;
Diem::Diem()
{
	dem++;
}
Diem::Diem(double x, double y)
{
	this->x = x;
	this->y = y;
	dem++;
}
int Diem::getSoDiem()
{
	return dem;
}
void Diem::Nhap()
{
	cout << "Nhap hoanh do: ";
	cin >> x;
	while (cin.fail())
	{
		cin.clear();
		cin.ignore();
		cout << "Khong hop le! Vui long nhap lai!" << endl;
		cin >> x;
	}
	cout << "Nhap tung do: ";
	cin >> y;
	while (cin.fail())
	{
		cin.clear();
		cin.ignore();
		cout << "Khong hop le! Vui long nhap lai!" << endl;
		cin >> y;
	}
}
//Ham xuat thong tin diem duoc nhap
void Diem::Xuat() const
{
	cout << "(" << x << ", " << y << ")";
}
istream& operator>>(istream& is, Diem& x)
{
	x.Nhap();
	return is;
}
ostream& operator<<(ostream& os, Diem x)
{
	x.Xuat();
	return os;
}
//Ham tinh va tra ve khoang cach tu diem this den diem d duoc truyen vao
double Diem::KhoangCach(Diem d) const
{
	return sqrt(pow(x - d.x, 2) + pow(y - d.y, 2));
}
//Ham nhan vao 2 gia tri dx dy de thay doi gia tri cua 1 diem
void Diem::DiChuyen(int dx, int dy)
{
	x += dx;
	y += dy;
}
//Ham getter tra ve gia tri cua toa do x
double Diem::getX() const
{
	return x;
}
//Ham getter tra ve gia tri cua toa do y
double Diem::getY() const
{
	return y;
}
//Ham setter dung de thay doi gia tri cua toa do x
void Diem::setX(double x)
{
	this->x = x;
}
//Ham setter dung de thay doi gia tri cua toa do y
void Diem::setY(double y)
{
	this->y = y;
}
void Diem::setXY(double x, double y)
{
	this->x = x;
	this->y = y;
}
bool Diem::KiemTraTrung(Diem d)
{
	if (x == d.x && y == d.y) return 1;
	return 0;
}
Diem Diem::LayDoiXung()
{
	return Diem(-x == 0 ? x : -x, -y == 0 ? x : -y);
}