#include "DocGiaNguoiLon.h"
#include<iostream>
#include<string>
#include<math.h>

using namespace std;

void DocGiaNguoiLon::Nhap()
{
	cout << "\nNhap CMND: ";
	cin.ignore();
	getline(cin, CMND);
}

void DocGiaNguoiLon::Xuat()
{
	cout << "\nCMND: " << CMND;
}

int DocGiaNguoiLon::TienLamThe()
{
	return SoThangCoHieuLucThe * 10000;
}

DocGiaNguoiLon::DocGiaNguoiLon()
{


}

DocGiaNguoiLon::~DocGiaNguoiLon()
{

}	
