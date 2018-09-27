#include "std_lib_facilities.h"

int main()
{
int a=6;
int b=12;

cout<<"regi a = "<<a<<" b = "<<b<<"\n";

a=a^b;
b=a^b;
a=b^a;

cout<<"uj a = "<<a<<" b = "<<b<<"\n";
}
