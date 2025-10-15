#include <iostream>
#include <cstdio>
using namespace std;
int max_of_four(int a , int b, int c, int d )
{
    int max =a; 
    if (b>max){
max = b; 
    }  if (c>max){
        max =c ; 
    } if (d>max){
        max =d; 
    }

    
    return max ; 
}
 ;
/*
Add `int max_of_four(int a, int b, int c, int d)` 
*/
int main() {
    
int a,b,c,d; 
    cin >> a>>b>>c>>d ; 
    cout << max_of_four( a,  b,  c,  d) ;
    return 0;
}


