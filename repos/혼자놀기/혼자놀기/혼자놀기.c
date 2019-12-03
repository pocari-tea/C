#include<stdio.h>
/*int main(void)
{
	printf("Hello World\n");
	return 0;
}*/
//주석처리
/*int main(void)
{
	
	printf("Hello, World!\n");
	printf("Hi, Human\n");
	printf("Hi, Computer\n");
}*/
//int 와 %d
/*int main(void)
{
	int a;
	a = 10;
	printf("a 의 값은 : %d \n", a);
	return 0;
}*/
//%o 와 %x
/*int main(void)
{
	int a;
	a = 127;
	printf("a 의 값은 %d 진수로 %o 입니다.\n", 8, a);
	printf("a 의 값은 %d 진수로 %d 입니다.\n", 10, a);
	printf("a 의 값은 %d 진수로 %x 입니다.\n", 16, a);
	return 0;
}*/
//float 와 double //참고로 숫자 마지막에 f를 붙이는것은 float가 제대로 맞다는것을 알릴려고
/*int main(void)
{
	float a = 3.141592f;
	double b = 3.141592;
	printf("a : %f\n", a);
	printf("b : %f\n", b);
	return 0;
}*/
//%.2f와 %5d의 비밀 //%6.3은 전체 자리수를 6자리로 맞추되, 반드시 소수점 이하 3째 자리까지만 표시해라
//%정수는 그만큼 공백을 나타내 준다.
/*int main(void)
{
	float a = 3.141592f;
	double b = 3.141592;
	int c = 123;
	printf("a : %.2f \n", a);
	printf("c : %5d \n", c);
	printf("b : %6.3f \n", b);
	return 0;
}*/
//변수의 자료형
/*int a, b, c, hi;
float d, e, f, bravo;
double g, programming;
long h;
short i;
char j, k, hello, mineral;*/
//변수 선언시 주의해야 할 점
//지금은 변수를 아래에 선언해도 오류가 나지않지만 기본은 아니다!!!(대신 경고가나옴)
/*int main(void)
{
	int a;
	a = 1;
	printf("a 는 :%d", a);
	int b; //오류발생!
	return 0;
}*/
//변수 선언시 주의해야 할 점
/*int main(void)
{
	int a, A; // a 와 A 는 각기 다른 변수
	int 1hi;
	// (오류) 숫자가 앞에 위치할 수 없다.
	int hi123, h123i, h12345324; //숫가작 뒤에 위치하면 괜찮
	int 한글이좋아;//(오류)변수는 오직 알파벳 ,숫자 그리고 _(underscore)로만 이루어져야 합니다.
	int space bar;//(오류) 변수의 이름에 띄어쓰기 안되지만 _로 대체 하십시오
	int space_bar;
	int enum, long, double, int, break//(오류) 지금 나열한 이름은 모두 '예약어'로 c언어에서 이미 쓰이고 있는 것들이다. 파란색으로 뜸
		return 0;
}*/
//산술 연산
/*int main(void)
{
	int a, b;
	a = 10;
	b = 3;
	printf("a + b 는 : %d \n", a + b);
	printf("a - b 는 : %d \n", a - b);
	printf("a * b 는 : %d \n", a * b);
	printf("a / b 는 : %d \n", a / b);
	printf("a%%b 는 : %d \n \n", a % b);//나머지 연산자 %를 표시하려면 %%를 해라

	printf("a / b 는 : %f \n", a / b);//정수데이터를 넣어서 실수형 데이터를 출력시키는 %f를 썻기때문에 오류
	return 0;
}*/
//산술 변환(위에 꺼와 차이점은 b가 double 들어갔다!!)
/*int main(void)
{
	int a;
	double b;

	a = 10;
	b = 3;
	printf("a / b 는 :%f \n", a / b);
	printf("b / a 는 :%f \n", b / a);
	return 0;
}*/
//등호 왼쪽에 있는것은 오른쪽꺼를 대입한다는 뜻 !!
/*int main(void)
{
	int a = 3;
	a = a + 3;
	printf("a 의 값은 :%d \n", a);
	return 0;
}*/
int main(void)
{

}