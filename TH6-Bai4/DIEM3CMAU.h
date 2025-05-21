#pragma once
#include "DIEM3C.h"
#include "MAU.h"
using namespace std;
class DIEM3CMAU : public DIEM3C, public MAU
{
private:
	static int dem;
public:
	~DIEM3CMAU();
	DIEM3CMAU();
	DIEM3CMAU(double);
	DIEM3CMAU(double, double);
	DIEM3CMAU(double, double, double);
	DIEM3CMAU(double, double, double, int);
	DIEM3CMAU(double, double, double, int, int);
	DIEM3CMAU(double, double, double, int, int, int);
	void Nhap();
	void Xuat() const;
	friend istream& operator>>(istream&, DIEM3CMAU&);
	friend ostream& operator<<(ostream&, const DIEM3CMAU&);
	static int getDem();
	bool Ktra_trung(const DIEM3CMAU&);
};

