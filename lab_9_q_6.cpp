//include the library
#include <iostream>
#include <string>
using namespace std;
int countEven(int *a, int b){
	int evencount=0;
	for(int i=0; i<=b; i++){
	if(*(a+i)%2==0){
	evencount++;}
	}
	return evencount-1;
	}

int main(){
int x;
int even;
cout<<"provide size of array"<<endl;
cin>>x;
int arr[x];
cout<<"enter the integer elements in the array"<<endl;
for(int n=0; n<x; n++)
cin>>arr[n];
even = countEven(arr, x);
cout<<"the number of even numbers is "<<even<<endl;
return 0;
}
