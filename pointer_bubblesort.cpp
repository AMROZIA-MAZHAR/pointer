#include<iostream>
using namespace std;
void bubblesort(int*,int);

void bubblesort(int* ptr,int n){
	for(int j=0; j<n-1; j++) {    //outer loop
      for(int k=j+1; k<n; k++) {   //inner loop 
  int *numb1=ptr+j, *numb2=ptr+k;
if(*numb1 > *numb2) //if 1st larger than 2nd,
{
int temp = *numb1; 
*numb1 = *numb2;
*numb2 = temp;
}
}
}
}
int main(){
	int n=10; //size of array
	int arr[n]={5,3,4,2,7,15,1,9,6,11};
	bubblesort(arr,n);
	for(int j=0; j<n; j++) //print out sorted array
    cout << arr[j] <<" ";
    cout << endl;
	return 0;
}
