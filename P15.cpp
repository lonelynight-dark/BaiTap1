//Student ID: 19127641
//Name : Tran Trung Hieu
//Class : 19CLC7

/*
	Test case 1
	Input :	day = 1, month = 10 , year = 2019
	Output: Tomorrow is : 2 / 10 / 2019

	Test case 2
	Input : day = 31, month = 10 , year = 2020
	Output: Tomorrow is : 1 / 11 / 2020 


	Test case 3
	Input : day = 31, month = 12 , year  = 1999
	Output: Tomorrow is : 1 / 1 / 2000 
*/
#include<stdio.h>

int isLeapYear(int year)
// This function checks whether input-year is leap year. Return 1 if that's true 
{
	if (year % 400 == 0) 
		return 1;
	else if ((year % 4 == 0) && (year % 100 != 0))
			return 1;
			else 
				return 0;

}

int main()
{
	int day, year, month;
	//printf("Input a day :"); scanf_s("%d", &day);
	//printf("Input a month :"); scanf_s("%d", &month);
	//printf("Input a year :"); scanf_s("%d", &year);
 	 
 	// Delete part
 	day = 31;
 	month = 12;
 	year = 1999;

 	//Find the number of day in input-month
 	int days_in_month = 0;
	switch (month)
	{
		case 1:case 3:case 5:case 7:case 8:case 10:case 12:
		days_in_month = 31;
		break;

		case 4:case 6:case 9:case 11:
		days_in_month = 30;
		break;

		case 2:
		days_in_month = 28;
		if (isLeapYear(year) == 1) days_in_month ++;
		break;
	}

	int day_after = day, month_after = month , year_after = year;

	if (day == days_in_month)
	{
		day_after = 1;
		if (month_after == 12)
		{
			month_after = 1;
			year_after ++;
		}
		else month_after ++;
	}
	else day_after ++;

	printf("Tomorrow is : %d / %d / %d \n",day_after,month_after,year_after);

	return 1;
}