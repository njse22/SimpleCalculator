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
    public:
        long long int exponencial(int a , int b){
            int i =0;
            int temp =a;
            while(i < b-1){
                a = a*temp;
                i++;
            }
        return a;
        }

        float division(int a , int b){
            long long int inf = INT_MAX; 
            if(b == 0)
                return inf;
            else{
		float c = static_cast <float> (a); 
	    	float d = static_cast <float> (b); 	
                return (c/d) ; 
	    }

        }

        long long int factorial(int a){
            int r = 1; 
            for(int i = 1 ; i < a; i++){
                r*=i; 
            }
            return r; 
        }
	
	float sin(int x){
		long long int cota = 10; 
		int n = 0; 
		float angle = x; 
		for(int i = 0; i < cota ; i++){
			n = i*2+1; 
			if(i%2== 0){
				angle += eDivision( exponencial(x,n)/factorial(n) );
			}else{
				angle -= eDivision( exponencial(x,n)/factorial(n) ); 
			}
		}
		return angle; 
	}

	private: 
		float eDivision(long long int a ,long long int b ){
			long long int inf = INT_MAX;
	        	    if(b == 0)
                		return inf;
            		else{
                		float c = static_cast <float> (a);
                		float d = static_cast <float> (b);
                		return (c/d) ;
            		}
		}


}; 
