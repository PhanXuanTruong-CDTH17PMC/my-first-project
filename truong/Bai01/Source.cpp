#include <iostream>
#include <conio.h>
using namespace std;
void nhapMang(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << " - Nhap phan tu thu " << i + 1 << ":" << endl;
		cin >> a[i];
	}
}
void xuatMang(int a[], int n)
{
	cout << " Danh sach cac phan tu:  ";
	for (int i = 0; i < n; i++)
	{
		cout << a[i]<<"\t";
	}
}
int tongMang(int a[],int n)
{
	int Tong = 0;
	for (int i = 0; i < n; i++)
	{
	
		Tong += a[i];
	}
	return Tong;
}
int tongCacSoChan(int a[], int n)
{
	int Tong = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] % 2 == 0)
		{
			Tong += a[i];
		}
	}
	return Tong;
}
bool kiemTraSNT(int n)
{
	int dem = 0;
	for (int i = 1; i <= n; i++)
	{
		if (n % i == 0)
		{
			dem++;
		}
	}
	if (dem == 2)
	{
		return true;
	}
	else
	{
		return false;
	}
}
int demSNT(int a[], int n)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
	{
		if (kiemTraSNT(a[i]))
		{
			dem++;
		}
	}
	return dem;
}
int tongSNT(int a[], int n)
{
	int tong = 0;
	for (int i = 0; i < n; i++)
	{
		if (kiemTraSNT(a[i]))
		{
			tong += a[i];
		}
	}
	return tong;
}
int minMang(int a[], int n)
{
	int min = 0;
	for (int i = 0; i < n; i++)
	{
		if (min >= a[i])
		{
			min = a[i];
		}
	}
	return min;

}
int mmaxMang(int a[], int n)
{
	int max = 0;
	for (int i = 0; i < n; i++)
	{
		if (max <= a[i])
		{
			max = a[i];
		}
	}
	return max;

}
void   main()
{
	int n;
	int a[100];
	cout << "Nhap so luong phan tu n: " <<endl;
	cin >>n;
	nhapMang(a, n);
	xuatMang(a, n);
	cout << endl;
	cout << " Tong cac phan tu: "<<tongMang(a, n)<<endl;
	cout << " Tong cac phan tu so chan terong Mang: " << tongCacSoChan(a, n) << endl;
	cout << " So luong so nguyebn to trong Mang: " << demSNT(a, n) << endl;
	cout << " Tong cac so nguyen to: " << tongSNT(a, n) << endl;
	cout << " Gia tri nho nhat: " << minMang(a, n) << endl;
	cout << " Gia tri lon nhat: " << mmaxMang(a, n) << endl;


	

	system("pause");
}