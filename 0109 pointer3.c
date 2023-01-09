#include <stdio.h>
int main(void)
{
	int i=10;//변수 i선언되고 10으로 초기화 된다.
	int *p;//포인터*p의 선언
	
	p=&i;//포인터 p가 변수 i를 가리킨다.
	printf("i=%d\n", i);//i의 값을 출력
	
	*p=20;//포인터 p가 가리키는 위치에 20이 저장된다.
	printf("i=%d\n", i);//i의 값을 출력
	
	return 0;
}