#include<iostream>
using namespace std;
int main(){
    cout << "Enter your mark : ";
    int mark;
    cin >> mark;
    switch(mark){
        case 90 ... 100 :
        cout << "Grade is A";
        break;
        case 80 ... 89:
        cout << "Grade is B";
        break;
        case 70 ... 79:
        cout << "Grade is C";
        break;
        case 60 ... 69:
        cout << "Grade is D";
        break;
        case 50 ... 59:
        cout << "Grade is D";
        break;
        default :
        cout << "Failed";
    }
    return 0;
}