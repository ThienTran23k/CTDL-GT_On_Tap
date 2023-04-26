
#include <iostream>
using namespace std;

void Interchange_Sort(int arr[], int n){
	int i,j;
	for(i=0; i<n-1; i++){
		for(j=i+1; j<n; j++){
			if(arr[i]>arr[j]){
				int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;;
			}
		}
	}
}

int main()
{
	int arr[] = {10,2,15,3,40,20};
	int n = sizeof(arr) / sizeof(arr[0]);
	Interchange_Sort(arr, n);
	cout<<"Mang sau khi sap xep:"<<endl;
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	system("pause");
}

