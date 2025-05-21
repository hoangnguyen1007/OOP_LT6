#pragma once
#include<iostream>
using namespace std;
class Diem
{
private:
	double x, y;
	static int dem;
public:
	friend istream& operator>>(istream& is, Diem& x);
	friend ostream& operator<<(ostream& os, Diem x);
	Diem();
	Diem(double, double);
	void Nhap();
	double KhoangCach(Diem d) const;
	void DiChuyen(int dx, int dy);
	void Xuat() const;
	void setX(double x);
	void setY(double y);
	void setXY(double, double);
	double getX() const;
	double getY() const;
	bool KiemTraTrung(Diem d);
	Diem LayDoiXung();
	static int getSoDiem();
};