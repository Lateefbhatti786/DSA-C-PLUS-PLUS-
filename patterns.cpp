// //square pattern 
// // 1234
// // 1234
// // 1234
// // 1234
// #include <iostream>
// using namespace std;

// int main(){
//     int n = 4 ; // Size of the square pattern
//     for (int i = 1; i<=n ; i++){
//         for(int j = 1; j<=n ; j++){
//             cout << " "<< j; // Print numbers from 1 to n in each row
//         }
    
//     cout << endl; // Move to the next line after printing each row
//     }
//     return 0 ;
// }



// // square pattern 
// // ****
// // ****
// // ****
// // ****

// #include <iostream>
// using namespace std;    
// int main (){
//     int n = 4;
//     for (int i = 1; i<=n; i++){
//         for (int j = 1; j<=n; j++){
//             cout << " *"; // Print '*' in each row
//         }
//         cout << endl; // Move to the next line after printing each row
//     }
// }

// // square pattern
// // ABCD
// // ABCD

// #include <iostream>
// using namespace std;    
// int main (){
//     int n = 4;
//     for (int i = 0; i<n; i++){
//         char ch = 'A'; // Start character for each row
//         for (int j = 0; j<n; j++){
//             cout << ch;
//             ch++;
//         }
        
//         cout << endl; // Move to the next line after printing each row
//     }
// }



// // square pattern
// // 12345...


// #include <iostream>
// using namespace std;    
// int main (){
//     int n = 5;
//     int num =1;
//     for (int i = 1; i<=n; i++){
        
//         for (int j = 1; j<=n; j++){
//             cout << " " << num; // Print numbers in each row
//             num++; // Increment the number for the next column
//         }
//         cout << endl; // Move to the next line after printing each row
//     }
//     return 0 ;
// }



// // square pattern
// // ABC
// // DEF
// // GHI

// #include <iostream>
// using namespace std;    
// int main (){
//     int n = 3;
//     char ch = 'A'; // Start character for each row
//     for (int i = 1; i<=n; i++){
        
//         for (int j = 1; j<=n; j++){
//             cout << " " << ch; // Print numbers in each row
//             ch++; // Increment the number for the next column
//         }
//         cout << endl; // Move to the next line after printing each row
//     }
//     return 0 ;
// }


// //triangle pattern
// // *
// #include <iostream>
// using namespace std;    
// int main (){
//     int n;
//     cout << "Enter the number of rows: ";
//     cin >> n; // Input the number of rows for the pattern
//     for (int i =0; i<n;i++){
//         for (int j = 0 ; j<i+1; j++){
//             cout << " *";// Print '*' in each ro;
//         }
//         cout << endl; // Move to the next line after printing each row
//     }
//     return 0 ;
// }

// //triangle pattern
// // 1
// #include <iostream>
// using namespace std;    
// int main (){
//     int n = 4;
    
//     for (int i = 0; i<n; i++){
//         for (int j = 0 ; j < i+1; j++){
//             cout << (i+1); // Print '*' in each row
            
//         }
//         cout << endl; // Move to the next line after printing each row
//     }
//     return 0 ;
// }


// #include <iostream>
// using namespace std;
// int main() {
//     int n = 4;// Size of the triangle pattern
//     for (int i = 1; i <= n; i++) {
//         for (int j = 1; j <= i; j++) {
//             cout << j << " "; // Print numbers from 1 to i in each row
//         }
//         cout << endl; // Move to the next line after printing each row
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main (){
//     int n= 4;
//     for(int i= 0 ; i <n ; i++){
//         for (int j = i+1; j>0;j--){
//             cout << " " << j; // Print numbers from i+1 to n in each row
//         }
//         cout << endl; // Move to the next line after printing each row
//     }




//     return 0 ;
// }




// #include <iostream>
// using namespace std;
// int main (){

//     int n ;
//     cout << "Enter the number of rows: " ;
//     cin >> n;
//     int num = 1;
//     for (int i = 0; i<n;i++){
//        for (int j = 0 ; j<i+1; j++){
//         cout << num << " ";
//         num++;
       
//         }
//         cout << endl;
//     }

//     return 0 ;
// }



// #include <iostream>
// using namespace std;
// int main (){

//     int n ;
//     cout << "Enter the number of rows: " ;
//     cin >> n;
//     char ch = 'A' ;
//     for (int i = 0; i<n;i++){
//        for (int j = 0 ; j<i+1; j++){
//         cout <<ch<<" ";
//         ch++;
       
//         }
//         cout << endl;
//     }

//     return 0 ;
// }





// #include <iostream>
// using namespace std;
// int main (){

//     int n = 4 ;
//     for (int i = 0 ; i<n ; i++ ){
//         for (int j = 0 ; j<i ; j++){
//             cout << " ";

//         }
//         for (int j = 0 ; j < n-i ; j++ ){
//             cout << i+1;
//         }
//     cout << endl;
    
//     }
    

//     return 0 ;
// }




// #include <iostream>
// using namespace std;
// int main (){

//     int n = 4 ;
//     for (int i = 0 ; i<n ; i++ ){
//         for (int j = 0 ; j<i ; j++){
//             cout << " ";

//         }
//         for (int j = 0 ; j < n-i ; j++ ){
//             cout << i+1 <<" " ;
//         }
//     cout << endl;
    
//     }
    

//     return 0 ;
// }



// #include <iostream>
// using namespace std;
// int main (){
//     int n = 7 ;
//     //outer loop 
//     for (int i = 0 ; i<n ; i++){
//         //spaces print 
//         for (int j = 0; j<n-i-1 ; j++){
//             cout << " " ;
//         }

//         //num 1
//         for (int j = 1 ; j <=i+1; j++ ){
//             cout << j;
//         }

//         //num2 
//         for (int j = i ; j>0 ; j--){
//             cout << j; 
//         }
//         cout<< endl;

       

     
//     }
//     return 0 ;
// }


// hollow diamond pattern 

