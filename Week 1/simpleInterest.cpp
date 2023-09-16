#include<iostream>
using namespace std;
int main(){
cout << "Enter principle amount , interest rate and year:";
int p , r , y ,i;
cin >> p;
cin >> r;
cin >> y;
i = (p*y*r)/100;

cout << "Simple interest is : "<< i;
return 0;

}