// 10장-17.TEMP-F2.CPP  10.5 template 함수
// template 함수의 instance화 error 예
#include <iostream>
using namespace std;

template <class T> 
T minn ( T ele1, T ele2){
    if ( ele1 < ele2 )
        return ele1;
    else
        return ele2;
}

void main (){
    char c1 = 'W', c2 = 'h' ;
    int num1 = 23, num2 = 67 ;
    long num3 = 10000 ;
    float num4 = 34.23, num5 = 7.77 ;

    cout << "min(<char>, <char>) = "<< minn (c1, c2) << endl;
    cout << "min(<int>, <int>) = "<< minn (num1, num2) << endl;
    cout << minn ( c1, num1 ) << endl ;       
    cout << minn ( num2, num3 ) << endl ;          
    cout << minn ( num3, num4 ) << endl ;        
    cout << "min(<float>, <float>) = "<< minn ( num4, num5 ) << endl ;
	system("pause");
}