#include <stdio.h>

int main()
{
	int numberInput1,numberInput2;
	scanf("%d", &numberInput1);
	scanf("%d", &numberInput2);
    printf("%d + %d = %d\n",numberInput1,numberInput2,numberInput1+numberInput2);
    printf("%d - %d = %d\n",numberInput1,numberInput2,numberInput1-numberInput2);
    printf("%d * %d = %d\n",numberInput1,numberInput2,numberInput1*numberInput2);
    printf("%d / %d = %d\n",numberInput1,numberInput2,numberInput1/numberInput2);
}
