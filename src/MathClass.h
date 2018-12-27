#include <iostream>
#include <climits>

#define sum(a,b) ((a)+(b))
#define sus(a,b) ((a)-(b))
#define mul(a,b) ((a)*(b))
#define mod(a,b) ((a)%(b))
#define max(a,b) ((a)>(b) ? (a) : (b))
#define min(a,b) ((a)<(b) ? (a) : (b))
#define equ(a,b) ((a)==(b))
#define isInPair(a) (a%2 != 0)
#define isPair(a) (a%2 == 0)

using namespace std; 

class MathClass{

    int exponencial(int a , int b){
        int i =0;
	    int temp =a;
	    while(i < b-1){
		    a = a*temp;
		    i++;
	    }
	return a;
    }

    double division(int a , int b){
        long long int inf = INT_MAX; 
        if(b == 0)
            return inf;
        else 
            return static_cast < double > (a/b) ; 

    }

    long long int factorial(int a){
        int r = 1; 
        for(int i = 1 ; i < a, i++){
            r*=i; 
        }
        return r; 
    }




}; 
