#include<iostream>
using namespace std;
void nhapmangtoanduong(int a[], int n) {
	for (int i = 0; i < n; i++) {
		cout << "Nhap a[" << i << "]: ";
		cin >> a[i];
		while (a[i] < 0) {
			cout << "moi nhap lai a[" << i << "]: ";
			cin >> a[i];
		}
	}
}
void nhapmang(int a[], int n) {
	for (int i = 0; i < n; i++) {
		cout << "Nhap a[" << i << "]: ";
		cin >> a[i];
	}
}
void sapxep(int a[], int n) {
	int k;
	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			if (a[i] < a[j]) {
				k = a[i];
				a[i] = a[j];
				a[j] = k;
			}
		}
	}
	cout << "Mang sau khi sap xep la: ";
}
void Xuat(int a[], int n) {
	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
}
int main() {
	int a[100];
	int n;
	int i, j;
	int menu;
	cout << "Moi ban chon 1 trong cac yeu cau sau: " << endl;
	cout << "1. Nhap vao mot mang toan duong, neu co so am thi yeu cau nhap lai tai vi tri do." << endl;
	cout << "2. Sap xep mang tang dan." << endl;
	cout << "3. Tinh tong cac so am trong mang." << endl;
	cout << "4. Tinh tong cac so nguyen to trong mang." << endl;
	cout << "5. Tach 1 mang A thanh 2 mang, 1 mang toan chan va mot mang toan le." << endl;
	cout << "moi ban chon: ";
	cin >> menu;
	switch (menu) {
	case 1:
	{
		cout << "nhap n: ";
		cin >> n;
		nhapmangtoanduong(a, n);
		break;
	}
	case 2:
	{

	}
	}
	cout << "nhap n: ";
	cin >> n;
	nhapmangtoanduong(a, n);
	sapxep(a, n);
	Xuat(a, n);
}