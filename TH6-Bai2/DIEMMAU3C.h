#pragma once
#include "DIEM3C.h"
class DIEMMAU3C : public DIEM3C
{
private:
	int r, g, b;
	static int dem;
public:
	~DIEMMAU3C();
	DIEMMAU3C();
	DIEMMAU3C(double);
	DIEMMAU3C(double, double);
	DIEMMAU3C(double, double, double);
	DIEMMAU3C(double, double, double, int);
	DIEMMAU3C(double, double, double, int, int);
	DIEMMAU3C(double, double, double, int, int, int);
	DIEMMAU3C(const DIEMMAU3C&);
	int getR() const;
	int getG() const;
	int getB() const;
	void setR(int);
	void setG(int);
	void setB(int);
	bool Ktra_trung(const DIEMMAU3C&) const;
	void Nhap();
	void Xuat() const;
	friend istream& operator>>(istream&, DIEMMAU3C&);
	friend ostream& operator<<(ostream&, const DIEMMAU3C&);
};

