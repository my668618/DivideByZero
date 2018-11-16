#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    int b;
    int c;
	printf("Enter Two Numbers To Be Divided: \n");
	scanf("%d %d", &a, &b);
	if (b == 0)
    {
        printf("Error! Cannot Divide By Zero.");
    }
    else
    {
        c = a / b;
        printf ("%d", c);
    }
    return 0;
}
