#include "jalali.h"
#include <stdio.h>





void Jalali_to_Gregorian(struct Date JAdate,struct Date *GRdate)
{
	//struct Date Gdate;
	
	GRdate->Year=JAdate.Year+1;
	GRdate->Month=JAdate.Month+1;
	GRdate->Day=JAdate.Day+1;
	
	
}
void Gregorian_to_Jalali(struct Date GRdate,struct Date *JAdate)
{
	//struct Date Jdate;
	
	JAdate->Year=GRdate.Year-1;
	JAdate->Month=GRdate.Month-1;
	JAdate->Day=GRdate.Day-1;
}


