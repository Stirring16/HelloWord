#pragma once
#include<iostream>
#include<vector>
#include"DocGiaNguoiLon.h"
#include"DocGiaTreEm.h"
using namespace std;

class CThuVien
{
private:
	vector<DocGiaTreEm> Ds_DocGiaTreEm;
	vector<DocGiaNguoiLon> Ds_DocGiaNguoiLon;
public:
	void Nhap();
	void Xuat();
	float TongTienLamThe;

	CThuVien();
	~CThuVien();
};

