#include <iostream>//include library
using namespace std;
bool contains(char* s, char ch)
{
  for (; *s; s++) {
    if (*s == ch)
      return true;  // early exit
  }
  
  return false;
}
int main(){
cout<<"

