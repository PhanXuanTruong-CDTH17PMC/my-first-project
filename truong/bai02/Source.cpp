#include <iostream>
#include <conio.h>

using namespace std;

struct Sinhvien{
		char maSo[30] ;
		char hoTen[30];
		float toan;
		float li;
		float hoa;
		
};
void nhapSV(Sinhvien &sv)
{
	fflush(stdin);
	cout << " - Nhap ma so sinh vien: ";
	gets_s(sv.maSo);
	fflush(stdin);
	cout << " - Nhap ho & ten: ";
	gets_s(sv.hoTen);
	fflush(stdin);
	do {
		cout << " - Nhap diem toan: ";
		cin >> sv.toan;
	} while (sv.toan < 0 || sv.toan >10);
	do {
		cout << " - Nhap diem Li: ";
		cin >> sv.li;
	} while (sv.li < 0 || sv.li >10);
	do {
		cout << " - Nhap diem hoa: ";
		cin >> sv.hoa;
	} while (sv.hoa < 0 || sv.hoa >10);
}
void xuatSv(Sinhvien &sv)
{
	cout << " - Ma so Sv:" << sv.maSo << endl;
	cout << " - Ho & Ten:" << sv.hoTen << endl;
	cout << " - Diem Toan:" << sv.toan << endl;
	cout << " - Diwm Li:" << sv.li << endl;
	cout << " - Diem Hoa:" << sv.hoa << endl;

}
void nhapDS(Sinhvien ds[], int n)
{
	for (int i = 0; i < n; i++)
	{ 
		cout << " **      Thong tin Sinh vien thu " << i + 1 << ":" << endl;
		nhapSV(ds[i]);
		cout <<endl;
	}
}
void xuatDS(Sinhvien ds[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << " **      Sinh vien thu " << i + 1 << ":" << endl;
		xuatSv(ds[i]);
		cout << endl;
	}
}
float diemTB(Sinhvien sv)
{
	float dtb = 0;
	dtb = (sv.toan + sv.li + sv.hoa) / 3;
	return dtb;
}
float diemTBDS( Sinhvien ds[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << " - SV " << i + 1 << ":  ";
		return  diemTB(ds[i]);
	}
}
void main()
{
	Sinhvien ds[100];
	int n;
	cout << " - Nhap so luong sinh vien: ";
	cin >> n;
	nhapDS(ds, n);
	xuatDS(ds, n);
	cout << " -- Diem trung binh cua Danh sach sinh vien: "<<endl;
	cout << diemTBDS(ds, n) << endl;

	system("pause");
}