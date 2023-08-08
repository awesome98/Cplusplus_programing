// 2��-1 reference.cpp
#include <stdio.h>
#include <stdlib.h>

int main (void){
    int num = 7;
    int &ref = num;
	//int &p;//����, reference ������ �׻� �ʱ�ȭ�ؾ� ��
    printf("num = %d, ref = %d\n", num, ref);
    ref++;
    printf("After ref++, num = %d, ref = %d\n", num, ref);//aliasing
    printf("&num = %p, &ref = %p\n\n", &num, &ref);
    system("pause");
	return 0;
}