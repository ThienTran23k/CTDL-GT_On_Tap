//Nguon : https://blog.luyencode.net/thuat-toan-sap-xep-chen/
// Code from https://nguyenvanhieu.vn

#include <iostream>
using namespace std;
void Insertion_Sort(int a[], int n){
	int pos, i , x;
    //luu giá tr? a[i] tránh b? ghi dè khi d?i ch? các ph?n t?
	for(i=1; i<n; i++){//do?n a[0] dã s?p x?p
		x = a[i]; pos = i-1;
		//tìm v? trí chèn x
		while((pos>=0)&&(a[pos]>x)){
                //k?t h?p d?i ch? các ph?n t? s? d?ng sau x trong danh sách m?i
			a[pos+1] = a[pos];
			pos--;
		}
		a[pos+1] = x;//chèn x vào danh sách
	}
}
int main()
{
	int a[] = {41, 23, 4, 14, 56, 1};
	int n = sizeof(a)/sizeof(a[0]);
	Insertion_Sort(a, n);
	cout<<"Mang sau khi sap xep:"<<endl;
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
}
