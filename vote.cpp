#include <iostream>
using namespace std;

int main(){
    int age;
    cout<< "ENTER YOUR AGE : ";
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