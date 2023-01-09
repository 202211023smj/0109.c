#include <stdio.h>

int main(void)
{
	int i = 3000;//정수 변수 i가 선언되고 3000으로 초기화된다.
	int *p=NULL;//포인터를 선언(주소가 0인 NULL값을 저장.)
	
	p=&i;//포인터 p에 변수 i의 주소를 저장한다.
	
	printf("p=%u\n", p);//포인터 p가 가리키는 주소에서 데이터를 읽어온다.
	printf("*i=%u\n\n", &i);//포인터 p가 가리키는 주소에서 데이터를 읽어온다.
	
	printf("i=%d\n", i);//i는 3000이 출력된다.
	printf("*p=%d\n", *p);//*p는 3000이 출력된다.
	
	return 0;
}