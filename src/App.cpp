#include <iostream>
#include <iomanip>
#include "MathClass.h"

using namespace std; 

int main(){
    
    cout << "Welcom to SimpleMath.\n" 
         << "Choose one operation.\n"
         << "1 . add two numbers.\n"
         << "2 . subtract two numbers.\n"
         << "3 . multiply two numbers.\n"
         << "4 . divide two numbers.\n"
         << "5 . get modulo between two numbers.\n"
         << "6 . get minimum between two numbers.\n"
         << "7 . get maximum between two numbers.\n"
         << "8 . compare two numbers.\n"
         << "9 . to determine if one number is pair.\n"
         << "10. to determine if one number is not pair.\n"
         << "11. to use exponencial operation.\n"
         << "12. to use the factorial operation.\n"
         
        int option{0};
        cin >> option; 
        
        while(option != -1){
            
            switch(option){
                case 1: 
                    cout << "write the first number: "<< endl; 
                    int a{0};
                    cin >> a ; 
                    cout << "write the second number: " << endl;
                    int b{0};
                    cin >> b; 
                    cout << "the result of "<< a << "+" << b << " is: " <<  sum(a,b)<< endl;
                    break;  
                case 2: 
                    cout << "write the first number: "<< endl; 
                    int a{0};
                    cin >> a ; 
                    cout << "write the second number: " << endl;
                    int b{0};
                    cin >> b; 
                    cout << "the result of "<< a << "-" << b << " is: " <<  sus(a,b)<< endl;
                    break; 
                case 3: 
                    cout << "write the first number: "<< endl; 
                    int a{0};
                    cin >> a ; 
                    cout << "write the second number: " << endl;
                    int b{0};
                    cin >> b; 
                    cout << "the result of "<< a << "x" << b << " is: " <<  mul(a,b)<< endl;
                    break;   
                case 4: 
                    cout << "WARNING: if the second number is equals to zero the result is 'infinite'\n"<< endl; 
                    cout << "write the first number: "<< endl; 
                    int a{0};
                    cin >> a ; 
                    cout << "write the second number: " << endl;
                    int b{0};
                    cin >> b; 
                    cout << "the result of "<< a << "/" << b << " is: " <<  division(a,b)<< endl;
                    break;  
                case 5:
                    cout << "write the first number: "<< endl; 
                    int a{0};
                    cin >> a ; 
                    cout << "write the second number: " << endl;
                    int b{0};
                    cin >> b; 
                    cout << "the result of "<< a << "%" << b << " is: " <<  mod(a,b)<< endl;
                    break; 
                case 6: 
                    cout << "write the first number: "<< endl; 
                    int a{0};
                    cin >> a ; 
                    cout << "write the second number: " << endl;
                    int b{0};
                    cin >> b; 
                    cout << "the minimun value between "<< a << " and " << b << "is: " << min(a,b) << endl;
                    break;   
                case 7:
                    cout << "write the first number: "<< endl; 
                    int a{0};
                    cin >> a ; 
                    cout << "write the second number: " << endl;
                    int b{0};
                    cin >> b; 
                    cout << "the maximum value between "<< a << " and " << b << "is: " << max(a,b) << endl;
                    break;   
                case 8: 
                    cout << "this option determines if two numbers are equlas\n" << endl; 
                    cout << "write the first number: "<< endl; 
                    int a{0};
                    cin >> a ; 
                    cout << "write the second number: " << endl;
                    int b{0};
                    cin >> b; 
                    cout << "the numbers are equals ? " << equ(a,b) ? "YES" : "NO" << endl; 
                    break;   
                case 9: 
                    cout << "write the number: "<< endl; 
                    int a{0};
                    cin >> a ; 
                    cout << "the number is pair ? " << isPair(a) ? "YES" : "NO" << endl; 
                    break;   
                case 10: 
                    cout << "write the number: "<< endl; 
                    int a{0};
                    cin >> a ; 
                    cout << "the number is odd ? " << isInPair(a) ? "YES" : "NO" << endl; 
                    break;   
                case 11: 
                    cout << "this option determines if two numbers are equlas\n" << endl; 
                    cout << "write the first number: "<< endl; 
                    int a{0};
                    cin >> a ; 
                    cout << "write the second number: " << endl;
                    int b{0};
                    cin >> b; 
                    cout << "the numbers are equals ? " << equ(a,b) ? "YES" : "NO" << endl; 
                    break;
                case 12: 
                    cout << "this option determines what is the result of a^b\n" << endl; 
                    cout << "write the first number (a): "<< endl; 
                    int a{0};
                    cin >> a ; 
                    cout << "write the second number(b): " << endl;
                    int b{0};
                    cin >> b; 
                    cout << "the resul between "<< a << "^" << b << " is: " << max(a,b) << endl;
                    break;







            }




        }
        







    return 0;
}


