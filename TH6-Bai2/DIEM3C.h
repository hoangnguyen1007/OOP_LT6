#pragma once
#include "Diem.h"
class DIEM3C : public Diem
{
private:
	double z;
	static int dem;
public:
	~DIEM3C();
	DIEM3C();
	DIEM3C(double x);
	DIEM3C(double, double);
	DIEM3C(double, double, double);
	static int getDem();
	double getZ() const;
	void setZ(double);
	bool ktra_trung(const DIEM3C&) const;
	void DiChuyen(double, double, double);
	double tinh_kc(const DIEM3C&) const;
	DIEM3C Diem_DX();
	double ChuVi(const DIEM3C&, const DIEM3C&) const;
	double DienTich(const DIEM3C&, const DIEM3C&) const;
	void Nhap();
	void Xuat() const;
	friend istream& operator>>(istream&, DIEM3C&);
	friend ostream& operator<<(ostream&, const DIEM3C&);
};

