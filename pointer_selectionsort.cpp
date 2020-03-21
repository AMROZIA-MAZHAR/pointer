#include<iostream>
#include<iomanip>
using namespace std;
void selectionsort(int*,int);
void swap(int*,int*);
void selectionsort(int* ptr,int n){
	for(int j=0; j<n-1; j++) { 
	int min=j;   //outer loop
      for(int k=j+1; k<n; k++) 
	if(ptr[k]<ptr[min])
		min=k;
		swap(&ptr[min],&ptr[j]);
}
}
void swap(int* a,int* b){
	 int temp =*a; 
   *a= *b;
   *b = temp;
}
int main(){
	int  n=10;//size of array
	int arr[n]={5,3,4,2,7,8,1,9,6,11};
	selectionsort(arr,n);
	for(int j=0; j<n; j++) //print out sorted array
    cout << arr[j] <<" ";
    cout << endl;
	return 0;
}
