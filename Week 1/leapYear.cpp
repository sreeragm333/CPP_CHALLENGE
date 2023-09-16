#include<iostream>
using namespace std;
int main(){
    cout << "Enter year";
    int year;
    cin >> year;
    if(year%400==0){
        cout << "It is leap year";
    }
    else if (year%4==0 && year%100 != 0){
        cout << "It is leap year";
    }
    else{
        cout << "It is not leap year";
    }
    return 0;
}