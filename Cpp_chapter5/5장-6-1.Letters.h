//5��-6-1.Letters.h   5.5 class �����Ϳ� class �Լ�
using namespace std;
// class Letters�� ����
class Letters { // *class ��ü�� heap������ �����*    *���ú����� stack�� �����*  
private:
    // private ������:
    char ch;//private data member can be accessed within member functions
    static int num;  //  Letters::num <- �̷� �������� ��ü�� ���� ȣ�Ⱑ����, static������ data������ ����Ǳ� ����
public:
    Letters (char c);
    ~Letters ();
    char Value ();    //    *�Լ��� code������ �����*
    static int Number (){//static �Լ��� cpp file�� ������ �� ����
		//cout << ch;//���� Ȯ�� �ʿ�
        return num;
    }
};