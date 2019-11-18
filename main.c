#include <stdio.h>
#include <stdlib.h>

int plus(int a, int b) { return a + b; }
int minus(int a, int b) { return a - b; }
int multiply(int a, int b) { return a * b; }
int divided(int a, int b) { return a / b; }

int (*p[4])(int, int);

int main(int argc, char* argv[])
{
	
	p[0]=plus;
	p[1]=minus;
	p[2]=multiply;
	p[3]=divided;	

	int val;
	int a, c;
	char b;
	printf("key a Function \nEX: 1 + 1\n");
	scanf("%i %c %i", &a, &b, &c);
	
	//IF ELSE IF
	if (b == '+')
		val = (*p[0])(a, c);		
	else if (b == '-')
		val = (*p[1])(a, c);
	else if (b == '*')
		val = (*p[2])(a, c);
	else if (b == '/')
		val = (*p[3])(a, c);
	printf("%d %c %d = %d\n", a, b, c, val);
}
