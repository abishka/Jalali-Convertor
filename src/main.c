#include <stdio.h>
#include "jalali.h"

int main()
{
	int type;

	printf("please select converter type ( 1 or 2 ) \n");
	printf("1- Gregorian_to_Jalali Enter 1 \n");
	printf("2- Jalali_to_Gregorian Enter 2 \n");
	printf("\n type is : ");

	scanf("%d", &type);

	if (type == 1)
	{
		printf("\n  ");
		printf(" you select Gregorian to Jalali");
	}
	else if (type == 2)
	{
		printf("\n  ");
		printf(" you select Gregorian to Jalali");
	}
	else
	{
		printf("\n  ");
		printf(" not valid ");
	}

	return 0;
}
