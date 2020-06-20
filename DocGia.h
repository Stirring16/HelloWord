#pragma once
#include<iostream>
#include<string>
using namespace std;

class DocGia
{
protected:
	string HoTen;
	string NgayLapThe;
	int SoThangCoHieuLucThe;
public:
	void Nhap();
	void Xuat();

	DocGia();
	~DocGia();

};

