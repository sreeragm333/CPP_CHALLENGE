#include<iostream>
#include <iomanip>
using namespace std;
int main(){
cout << "Enter two numbers to find product : " << endl;
float a ,b,c;
cin >> a ;
cin >> b;
c = a*b;
cout <<fixed<<"Product is" <<  setprecision(3) << c;
return 0;
}