#include<iostream>
using namespace std;
int main(){
    cout << "Enter a number :" << endl;
    int a;
    cin >> a;
    if(a % 2 == 0){
        cout << "It is an even number" << endl;
    }
    else{
        cout << "It is an odd number ";
    }

    return 0;
}