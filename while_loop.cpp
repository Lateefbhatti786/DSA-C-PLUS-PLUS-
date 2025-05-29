// #include<iostream>
// using namespace std;

// int main(){
//     int count = 1;
//     while (count<=5){
//         cout <<count << " ";
//         count++;
//     }
//     return 0;
// }

// lets say we have n= 30 , print this 

// #include<iostream>
// using namespace std;

// int main(){
//     char count = 'a';
//     while (count <= 'z'){
//         cout <<count ;
//         count++;
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main(){
//     int n= 10;
//     for (int i = 1 ; i <=n; i+= 2){
//         cout <<i<< " ";
//     }
    
    
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cout << "Enter a number: ";
//     cin >> n;
//     int sum  = 0; 
//     for (int i = 1; i <=n; i++){
//             sum+= i; // This will sum up the numbers from 1 to n
//             if (i == 5){
//                 break;
//             }
//     }
//     cout << sum ;
//     return 0;
// }


// #include<iostream>
// using namespace std;

// int main(){
//     int n= 10 ;
//     int oddsum = 0;
//     for (int i = 1; i<= n ; i++){
//         if(i %2 != 0){
        
//         oddsum+= i; // This will sum up the even numbers from 1 to n
//         }
//     } 
//     cout << oddsum <<endl;
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main(){
//     int n= 10 ;
//     int oddsum = 0;
//     for (int i = 1; i<= n ; i++){
//         if(i %2 == 0){
        
//         oddsum+= i; // This will sum up the even numbers from 1 to n
//         }
//     } 
//     cout << oddsum <<endl;
//     return 0;
// }


// #include<iostream>
// using namespace std;

// int main(){
//     int n= 10 ;
//     int i =1;

//     do {
//         cout << i << " ";
//         i++;
    
//     }
//     while (i <= n); // This will print numbers from 1 to n using a do-while loop
//     cout << endl;
//     return 0;
// }


// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cout << "Enter a number: ";
//     cin >> n;
//     bool isPrime = true;

//     for (int i = 2; i <= n-1; i++){
//         if (n%i == 0) {
//             isPrime = false; // If n is divisible by any number other than 1 and itself, it is not prime
//             break; // No need to check further
//         }
//     }
//     cout  << n << " is" << (isPrime ? " a prime number." : " not a prime number.") << endl;
//     return 0;
// }


#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int m ;
        cout << "Enter the number of stars for row ";
        cin >> m; 

        
    for (int i =1; i<=n ;i++){ //one line for loop
        
        for (int j = 1; j <= m ; j++){
            cout << "*";
        }
        cout << endl; // Print a new line after each row of stars

    }
    return 0;
}