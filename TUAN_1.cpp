#include<iostream>
#include<stdio.h>
#include<string.h>

using namespace std;

typedef struct ps
{
	float tu1, tu2, mau1, mau2;
	float tong, tich, hieu, thuong;
};

void nhap(ps &so)
{
	cout<<"Nhap tu so thu nhat: "; 
	cin >> so.tu1;
	cout<<"Nhap mau so thu nhat: ";
	cin >> so.mau1;
	cout<<"Nhap tu so thu hai: "; 
	cin >> so.tu2;
	cout<<"Nhap mau so thu hai: ";
	cin >> so.mau2;
}

/*float tong(ps &so)
{
	so.tong = (so.tu1 * so.mau2 + so.tu2 * so.mau1) / (so.mau1 * so.mau2);
	cout <<"Tong hai phan so la : " << so.tong << endl;
}

float hieu(ps &so)
{
	so.hieu = (so.tu1 * so.mau2 - so.tu2 * so.mau1) / (so.mau1 * so.mau2);
	cout <<"hieu hai phan so la : " << so.hieu << endl;
}

float tich(ps &so)
{
	so.tich = (so.tu1 * so.tu2) / (so.mau1 * so.mau2);
	cout <<"Tich hai phan so la : " << so.tich << endl;
}

float thuong(ps &so)
{
	so.thuong = (so.tu1 * so.mau2) / (so.tu2 * so.mau1);
	cout <<"Thuong hai phan so la : " << so.thuong << endl;
}*/

float tong(ps &so)
{
	
	cout <<"Tong hai phan so la : " << (so.tu1 / so.mau1) + (so.tu2 / so.mau2) << endl;
}

float hieu(ps &so)
{
	cout <<"hieu hai phan so la : " << (so.tu1 / so.mau1) - (so.tu2 / so.mau2) << endl;
}

float tich(ps &so)
{
	cout <<"Tich hai phan so la : " << (so.tu1 / so.mau1) * (so.tu2 / so.mau2) << endl;
}

float thuong(ps &so)
{
	cout <<"Thuong hai phan so la : " << (so.tu1 / so.mau1) / (so.tu2 / so.mau2) << endl;
}

int main()
{
	ps so;
	nhap(so);
	tong(so);
	hieu(so);
	tich(so);
	thuong(so);
	
	return 0;
}
