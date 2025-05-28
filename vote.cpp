#include <iostream>
using namespace std;

int main(){
    string name;
    cout << "ENTER YOUR NAME : ";
    cin >> name;
    cout <<"hello " << name <<endl;
    cout << "Welcome to the voting eligibility check program!" << endl; 


    int age;
    cout<< "ENTER YOUR AGE  TO CHECK ELIGIBILITY: ";
    cin >> age;
    

    if (age>= 18)
    {
        cout <<"Eligible to VOTE" <<endl;

    }
    else {
        cout<< " NOT ELIGIBLE TO VOTE" <<endl;
    }
return 0;

}