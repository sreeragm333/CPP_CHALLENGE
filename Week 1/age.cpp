#include<iostream>
using namespace std;
int main(){
cout << "Enter age of person A, B, C :" << endl;
int a,b,c;
cin >> a >> b >> c;
if(a > b && b > c){
    cout << a << "is the oldest and "<< c << " is the youngest";
}
else if(a > c && c > b){
    cout << a << "is the oldest and "<< b << " is the youngest";
}
else if (b > a && a > c){
    cout << b << "is the oldest and " << c << " is the youngest";
}
else if (b > c && c > a){
    cout << b << "is the oldest and " << a << " is the youngest";
}
else if (c > a && a > b){
    cout << c << "is the oldest and " << b << " is the youngest";
}

else if (c > b && b > a){
    cout << c << "is the oldest and " << a << " is the youngest";
}
return 0;
}
