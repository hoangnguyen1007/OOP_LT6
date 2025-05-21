#pragma once
#include "DIEM.h"
#include "MAU.h"
class DIEMMAU : public Diem, public MAU
{
private:
	static int dem;
public:
	~DIEMMAU();
	DIEMMAU();
	DIEMMAU(double);
	DIEMMAU(double, double);
	DIEMMAU(double, double, int);
	DIEMMAU(double, double, int, int);
	DIEMMAU(double, double, int, int, int);
	static int getDem();
	void Nhap();
	void Xuat() const;
	bool Ktra_trung(const DIEMMAU&);
	friend istream& operator>>(istream&, DIEMMAU&);
	friend ostream& operator<<(ostream&, const DIEMMAU&);
};

