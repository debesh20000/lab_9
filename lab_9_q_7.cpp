#include <iostream>//include library
using namespace std;
//function
double* max(double*arr,int x){
	if(x == 0){
	return NULL;}
	else{
	double *b;
	double max = *arr;
	double *ptr = arr;
	
	b = arr + 1;
	for(int i= 0; i<x; i++){
		if (*b > max){
		max = *b;
		ptr = b;
	}
	b++;
	}
	return ptr;
}
}


int main(){
	int x;    //ask user to define the array
	cout <<"enter the number of terms to be in array"<<endl;
	cin >>x;
	double arr1[x];
	cout <<"enter the numbers now"<<endl;
	for(int n=0;n<x;n++)
	cin >>arr1[n];
	double* d = max(arr1, x);//call function
	
	cout <<"the maximum is "<<*d<<endl;
return 0;
}
