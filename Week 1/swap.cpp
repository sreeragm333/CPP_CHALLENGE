#include<iostream>
using namespace std;
int main(){
cout << "Enter two numbers to swap : ";
float a ,b,c;
cin >> a;
cin >>b;
c = a ;
a = b;
b = c;
cout << "First number is now : " << a  << endl;
cout << "Second number is now : " << b;
return 0;
}
