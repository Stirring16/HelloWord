#include "CThuVien.h"
#include<iostream>
#include<string>

using namespace std;

void CThuVien::Nhap()
{
	int luachon;
	while (true)
	{
		system("cls");
		cout << "\n\t\t\t==========THU VIEN============";
		cout << "\n\t1. Doc gia tre em ";
		cout << "\n\t2. Doc gia nguoi lon ";
		cout << "\n\t0. Thoat ";
		cout << "\n\n\t Nhap lua chon: ";
		cin >> luachon;
		switch (luachon) {
		case 1:
		{
			DocGiaTreEm x;
			cout << "\n\tNhap thong tin doc gia: ";
			x.Nhap();
			Ds_DocGiaTreEm.push_back(x);
			continue;
		}
		case 2:
		{
			DocGiaNguoiLon x;
			cout << "\n\tNhap thong tin doc gia: ";
			x.Nhap();
			Ds_DocGiaNguoiLon.push_back(x);
			continue;
		}
		

		}
		break;
	}

}

void CThuVien::Xuat()
{
	cout << "\n\tDanh sach doc gia tre em: ";
	for (int i = 0; i < Ds_DocGiaTreEm.size(); i++)
	{
		cout << "\n\n\tThong tin doc gia tre emm thu: ";
		Ds_DocGiaTreEm[i].Xuat();
	}
	cout << "\n\t\tDanh sach doc gia nguoi lon: ";
	for (int i = 0; i < Ds_DocGiaNguoiLon.size(); i++)
	{
		cout << "\n\n\tThong tin doc gia nguoi lon thu: ";
		Ds_DocGiaNguoiLon[i].Xuat();
	}
}

/*float CThuVien::TongTienLamThe()
{

}*/

CThuVien::CThuVien()
{

}
CThuVien::~CThuVien()
{

}