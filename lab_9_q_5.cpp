//include the library
#include <iostream>
#include <string>
using namespace std;
int main(){
char s[10]="abcde";
char* cptr;
//Required code
for (cptr = s; *cptr !='\0'; cptr++);// cptr is taken to the end of string s
cptr--;// reversing order of characters
while (cptr >=s)//printing characters in reverse order
cout<<*cptr--;
cout<<endl;
return 0;
}
