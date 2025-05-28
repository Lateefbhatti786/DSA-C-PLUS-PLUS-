#include<iostream>
using namespace std;

int main(){
    int a;
    int b;
    cout << "ENTER FIRST NUMBER : ";
    cin >> a;
    cout <<"ENTER SECOND NUMBER : ";
    cin>> b;

    cout << "ENTER FIRST NUMBER : "<<a <<endl;
    cout << "ENTER SECOND NUMBER : "<<b <<endl;

    cout << "Choose an operation : " << endl;
    cout << "1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Division" << endl;

    int choice;
    cout << "Enter your choice (1-4): ";
    cin >> choice;
    if (choice == 1) {
        cout << "result os sum is : " << a+b <<endl;
    }
    else if (choice == 2){
        cout << "result os difference is : " << a-b <<endl;
    }
    else if (choice == 3) {
        cout << "result os multiplication is : " << a*b <<endl;
    }
    else if (choice == 4){
        cout << "result os division is : " << a/b <<endl;
    }
    else {
        cout << "Invalid choice. Please select a valid operation." << endl;
    }
    cout << "Thank you for using the calculator!" << endl;
    cout << "Exiting the program..." << endl;


    return 0;   

    
    
}