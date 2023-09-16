#include<iostream>
using namespace std;
int main(){
    cout << "Enter total mark percentage : ";
    int mark;
    cin >> mark;
    if(mark >= 90){
        cout << "Grade is A ";
    }
    else if(mark  >= 80){
        cout << "Grade is B ";
    }
    else if(mark  >= 70){
        cout << "Grade is C ";
    }
    else if(mark  >= 60){
        cout << "Grade is D  ";
    }
    else if(mark  >= 50){
        cout << "Grade is E ";
    }
    else if (mark < 50){
        cout << "Failed";
    }
  
    return 0;
}