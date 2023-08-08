//5장-6-1.Letters.h   5.5 class 데이터와 class 함수
using namespace std;
// class Letters의 정의
class Letters { // *class 객체는 heap영역에 저장됨*    *로컬변수는 stack에 저장됨*  
private:
    // private 데이터:
    char ch;//private data member can be accessed within member functions
    static int num;  //  Letters::num <- 이런 형식으로 객체가 없이 호출가능함, static변수는 data영역에 저장되기 때문
public:
    Letters (char c);
    ~Letters ();
    char Value ();    //    *함수는 code영역에 저장됨*
    static int Number (){//static 함수는 cpp file에 정의할 수 없다
		//cout << ch;//오류 확인 필요
        return num;
    }
};