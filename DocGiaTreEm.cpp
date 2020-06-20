#include "DocGiaTreEm.h"
#include<iostream>
#include<string>
#include<math.h>

using namespace std;

void DocGiaTreEm::Nhap()
{
	
	cout << "\nNhap nguoi dai dien: " << std::flush;
	/*cin.clear(); hello
	cin.sync();*/
	// new line
	cin.ignore();
	getline(cin, NguoiDaiDien);

}

void DocGiaTreEm::Xuat()
{
	cout << "\nNguoi dai dien: " << NguoiDaiDien;
}

int DocGiaTreEm::TienLamThe()
{
	return SoThangCoHieuLucThe * 5000;

}

DocGiaTreEm::DocGiaTreEm()
{


}

DocGiaTreEm::~DocGiaTreEm()
{


}

