#include<iostream>
using namespace std;
int main(){
    cout << "Enter two numbers to compare : ";
    int a ,b;
    cin >> a >> b;
    if(a > b){
        cout << a << "is larger";
    }
    else if (b > a){
        cout << b <<" is larger";
    }
    else{
        cout << "Both numbers are equal";
    }
    return 0;
}
