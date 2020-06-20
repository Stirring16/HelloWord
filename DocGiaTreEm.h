#pragma once
#include<iostream>
#include"DocGia.h"
#include<string>

using namespace std;

class DocGiaTreEm : public DocGia
{
private:
	string NguoiDaiDien;
public:
	void Nhap();
	void Xuat();
	int TienLamThe();

	DocGiaTreEm();
	~DocGiaTreEm();

};

