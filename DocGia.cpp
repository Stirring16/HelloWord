#include "DocGia.h"
#include<iostream>
#include<string>

using namespace std;

void DocGia::Nhap()
{
	cout << "\nNhap Ho ten: "; 
	getline(cin, HoTen);
	cout << "\nNhap Ngay lap the: ";
	getline(cin, NgayLapThe);
	cout << "\nNhap so thang co hieu luc the: ";
	cin >> SoThangCoHieuLucThe;
}

void DocGia::Xuat()
{
	cout << "\nHo ten: " << HoTen;
	cout << "\nNgay lap the: " << NgayLapThe;
	cout << "\nSo thang co hieu luc the: " << SoThangCoHieuLucThe;

}

DocGia::DocGia()
{

}

DocGia::~DocGia()
{

}



