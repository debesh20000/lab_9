#include <iostream>//include library
using namespace std;
int myStrLen(char* x) 
{ //start as length 0
        int Str = 0;
        //inclrease charactercount till end is reached
        	for (*x; x++; x != "\0"){
			Str++;}
  
        return Str;
}
int main(){
	cout <<"enter the string of characters"<<endl;
	char a;
	cin >>a;
	
	char* x = &a;
	int y = myStrLen(x);
	cout <<"the length is "<<y<<endl;
return 0;
}
