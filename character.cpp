#include<iostream>
using namespace std;

int main(){
    char ch;
    cout << "Enter a character: ";
    cin >> ch;
    cout << "You entered: " << ch << endl;
    cout << "ASCII value of '" << ch << "' is: " << int(ch) << endl;


    if (ch>=65 && ch<=90){
        cout << "The character is an uppercase letter." << endl;
    } 
    else  {
        cout << "The character is a lowercase letter." << endl;
   
    }
    return 0; 
}