#include<iostream>
#include"DocGia.h"
#include"DocGiaNguoiLon.h"
#include"DocGiaTreEm.h"
#include"CThuVien.h"

using namespace std;

int main()
{
	CThuVien *x = new CThuVien;
	x->Nhap();
	x->Xuat();
	delete x;

	return 0;
}