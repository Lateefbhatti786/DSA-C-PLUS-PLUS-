// #include<iostream>
// using namespace std;


// //function define 
// void printHello(){
//     cout<< "hello \n" ;
// }

// //mainfunction

// int main(){
//     //function call or invoke 
//     printHello();
//     return 0 ;
// }


// 1. print sum of two numbers 

// #include<iostream>
// using namespace std;


// //function define 

// // sum of 2 numbers 
// int sum(int a , int b ){
//     int s =a+b;
//     return s;
// }

// // 2.  min of two numbers 

// int min(int a , int b ){ //parameters
//     if(a<b){
//         return a;
        
//     }
//     else {
//         return b ; 
       
//     }
// }

// //mainfunction

// int main(){
//     cout << min(10,5) <<endl;//arguments 
//     return 0 ;
// }


// question : calculate sum of numbers from 1 to N 

//  #include<iostream>
// using namespace std;

// int sumN(int n ){
//     int sum = 0;
//     for (int i = 0 ; i<=n; i++){
//         sum +=i ;
//     }

//     return sum ;  
// }

// int main (){
//     int n ;
//     cout << "Enter the number : " ;
//     cin >> n ;
//     cout << "sum from 1 to " << n << " is : " << sumN(n)<<endl ;
//     return 0 ;

// }



// QUESTION : FIND THE MINIMUM NUMBER OUT OF N NUMBERS 
// #include<iostream>
// using namespace std ;

// int minN(int n){
//     int minNum;
//     cout << "Enter the number:  ";
//     cin >> minNum;
    
//     for (int i = 1; i<=n;i++){
//         int num ;
//         cout <<" enter the number " << i << " : " ;
//         cin >> num ;
//         if(num < minNum){
//             minNum = num ;
//         }

//     }
//     return minNum;
// }

// int main (){
//     int n ; 
//     cout << "How many numbers : ";
//     cin >> n;
//     cout << "Minimum number is : "<< minN(n)<< endl ;
//     return 0 ;
// }



//CALCULATE N FACTORIAL 

// #include<iostream>
// using namespace std;

// int factorialN (int n ){
//     int fact = 1;
//     for (int i =1; i<=n ; i++){
//         fact*=i;
//     }
//     return fact ; 

// }

// int main (){
//     int n;
//     cout<< "Enter the number for calculating factorial : ";
//     cin>> n;
//     cout << "Factorial of " << n << " is : "<< factorialN (n) <<endl;
//     return 0 ; 
// }


//CALCULATE SUM OF DIGITS OF NUMBER 


// #include<iostream>
// using namespace std;

// int sumOfDigits (int num ){
//     int digitsum = 0 ;
//     while (num > 0 ){
//         int lastdigit = num%10;
//         num = num/10;
//         digitsum+=lastdigit;
//     } 
//     return digitsum;
// }

// int main (){
//     int num ;
//     cout << "ENTER THE NUMBER TO CALCULTE SUM OF ITS DIGITS : ";
//     cin>> num;
//     cout<< "SUM OF DIGITS OF " <<num << " IS : " <<sumOfDigits(num)<< endl;
//     return 0;
// }


// CALCULATE nCr BINOMAIL COEEFICIANT FOR n AND r

#include<iostream>
using namespace std;

int factorial(int n ){
    int fact = 1;
    for (int i = 1 ; i <=n ; i ++){
        fact*=i;
    }
    return fact;

}

int nCr(int n , int r ){
    int fact_n = factorial(n);
    int fact_r = factorial(r);
    int fact_n_r = factorial(n-r);

    return fact_n / (fact_r * fact_n_r);
}

int main(){
    int n;
    cout << "Enter the value of n : " ;
    cin>> n;
    
    int r;
    cout <<"Enter the value of r : ";
    cin>> r;
    
    cout<<"Binomial Coefficiant for "<< n << " and "<< r << " is "<<nCr(n,r)<<endl;

    return 0;


}