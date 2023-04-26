//cre: https://codehow.net/de-quy-tuyen-tinh-linear-recursion-trong-c-c++-87.html

#include<iostream>  
using namespace std;

int GiaiThua(int n) {
    if (n == 1)
        return 1;
    else
        return (n * GiaiThua(n - 1));
}

int main()   
{    
    int n;
    cout << "Nhap so nguyen duong n can tinh giai thua ";
    cin >> n;
    cout << "Giai thua cua " << n << " la :  " << GiaiThua(n) << endl;

    return 0;  
}
