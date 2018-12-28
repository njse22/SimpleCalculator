#include <iostream>
#include <iomanip>
#include <string>
#include "MathClass.h"

using namespace std; 

//double division(int a , int b); 

int main(){
    MathClass m{}; 

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
         << "11. to use the factorial operation.\n"
         << "12. to use exponencial operation.\n"<< endl; 
         
        int option{0};
        cin >> option; 
        
        while(option != -1){
            int a{0};
            int b{0};
            if(option == 0){
                cout<< "Choose one operation.\n"
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
                    << "11. to use the factorial operation.\n"
                    << "12. to use exponencial operation.\n"<< endl; 
                    cin >> option; 
            }
           else if(option == 1){
                    cout << "write the first number: "<< endl; 
                    cin >> a ; 
                    cout << "write the second number: " << endl; 
                    cin >> b; 
                    cout << "the result of "<< a << "+" << b << " is: " <<  sum(a,b)
                    << "\ndo you want continue whit the program ?.\n"
                    << " (-1) for exit , (0) for continue" << endl;
                    cin >> option; 
                    
                    
            }else if (option == 2){
                    cout << "write the first number: "<< endl; 
                    cin >> a; 
                    cout << "write the second number: " << endl;
                    cin >> b; 
                    cout << "the result of "<< a << "-" << b << " is: " <<  sus(a,b)
                    << "\ndo you want continue whit the program ?.\n"
                    << " (-1) for exit , (0) for continue" << endl;
                    cin >> option; 
                    
                    
            }else if (option == 3){
                    cout << "write the first number: "<< endl; 
                    cin >> a ; 
                    cout << "write the second number: " << endl;
                    cin >> b; 
                    cout << "the result of "<< a << "x" << b << " is: " <<  mul(a,b)
                    << "\ndo you want continue whit the program ?.\n"
                    << " (-1) for exit , (0) for continue" << endl;
                    cin >> option; 
                    
            }else if(option == 4){
                    cout << "WARNING: if the second number is equals to zero the result is 'infinite'\n"<< endl; 
                    cout << "write the first number: "<< endl; 
                    cin >> a; 
                    cout << "write the second number: " << endl;
                    cin >> b; 
                    cout << "the result of "<< a << "/" << b << " is: " << m.division(a,b) 
                    << "\ndo you want continue whit the program ?.\n"
                    << " (-1) for exit , (0) for continue" << endl;
                    cin >> option; 
                    
            }else if(option == 5){

                    cout << "write the first number: "<< endl; 
                    cin >> a ; 
                    cout << "write the second number: " << endl;
                    cin >> b; 
                    cout << "the result of "<< a << "%" << b << " is: " <<  mod(a,b)
                    << "\n do you want continue whit the program ?.\n"
                    << " (-1) for exit , (0) for continue" << endl;
                    cin >> option;         
            }
            else if(option == 6){
                    cout << "write the first number: "<< endl; 
                    cin >> a ; 
                    cout << "write the second number: " << endl;
                    cin >> b; 
                    cout << "the minimun value between "<< a << " and " << b << " is: " << min(a,b)
                    << "\ndo you want continue whit the program ?.\n"
                    << " (-1) for exit , (0) for continue" << endl;
                    cin >> option; 
            }
            else if (option == 7){
                cout << "write the first number: "<< endl; 
                cin >> a ; 
                cout << "write the second number: " << endl;
                cin >> b; 
                cout << "the maximum value between "<< a << " and " << b << " is: " << max(a,b) 
                << "\ndo you want continue whit the program ?.\n"
                << " (-1) for exit , (0) for continue" << endl;
                cin >> option; 
            }
            else if(option == 8){
                cout << "this option determines if two numbers are equlas\n" << endl; 
                cout << "write the first number: "<< endl; 
                cin >> a ; 
                cout << "write the second number: " << endl;
                cin >> b; 
                string r =equ(a,b) ? "YES" : "NO"; 
                cout << "the numbers are equals ? " << r 
                << "\ndo you want continue whit the program ?.\n"
                << " (-1) for exit , (0) for continue" << endl;
                cin >> option; 

            }else if (option == 9){
                cout << "write the number: "<< endl; 
                cin >> a ; 
                string r = isPair(a) ? "YES" : "NO";
                cout << "the number is pair ? " << r 
                << "\ndo you want continue whit the program ?.\n"
                << " (-1) for exit , (0) for continue" << endl;
                cin >> option; 


            }       
            else if (option == 10){
                cout << "write the number: "<< endl; 
                cin >> a ; 
                string r = isInPair(a) ? "YES" : "NO"; 
                cout << "the number is odd ? " << r 
                << "\ndo you want continue whit the program ?.\n"
                << " (-1) for exit , (0) for continue" << endl;
                cin >> option; 

            } 
            else if(option == 11){
                cout << "this program calculate what is the factorial of one number\n" << endl; 
                cout << "write the first number: "<< endl; 
                cin >> a ; 
                cout << "the factorial of: " << a << " is: " << m.factorial(a)
                << "\ndo you want continue whit the program ?.\n"
                << " (-1) for exit , (0) for continue" << endl;
                cin >> option; 

            } 
            else if(option == 12){
                cout << "this option determines what is the result of a^b\n" << endl; 
                cout << "write the first number (a): "<< endl; 
                cin >> a ; 
                cout << "write the second number(b): " << endl;
                cin >> b; 
                cout << "the resul between "<< a << "^" << b << " is: " << m.exponencial(a,b)
                << "\ndo you want continue whit the program ?.\n"
                << " (-1) for exit , (0) for continue" << endl;
                cin >> option; 

            }
            
        }

    return 0;
}


