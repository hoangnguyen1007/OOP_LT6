#pragma once
#include <iostream>
using namespace std;
class MAU
{
private:
	int r, g, b;
	static int dem;
public:
	MAU();
	MAU(int);
	MAU(int, int);
	MAU(int, int, int);
	void Nhap();
	void Xuat() const;
	int getR() const;
	int getG() const;
	int getB() const;
	static int getDem();
	void setR(int);
	void setG(int);
	void setB(int);
	bool KiemTraTrung(const MAU&);
	friend istream& operator>>(istream&, MAU&);
	friend ostream& operator<<(ostream&, MAU);
};

