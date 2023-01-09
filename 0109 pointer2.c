#include <stdio.h>
int main(void)
{
	int x=10, y=20;//변수 x,y가 선언되고 10,20으로 초기화한다.
	int *p;//포인터를 선언
	
	p=&x;//포인터 p는 변수 x를 가리킨다.
	printf("p=%d\n", p);//포인터 p가 가리키는 주소의 데이터를 읽는다.
	printf("*p=%d\n\n", *p);//포인터 *p값이 출력된다.
	
	p=&y;//포인터 p는 변수 y를 가리킨다.
	printf("p=%d\n", p);//포인터 p가 가리키는 주소의 데이터를 읽는다.
	printf("*p=%d\n", *p);//포인터 *p값이 출력된다.
	
	return 0;
}