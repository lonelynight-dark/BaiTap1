//Student ID: 19127641
//Name : Tran Trung Hieu
//Class : 19CLC7

/*
	Test case 1
	Input : 6.73	
	Output: 6.5

	Test case 2
	Input :	12.89
	Output:	13.0 


	Test case 3
	Input :	65.13
	Output: 65.0
*/
#include<stdio.h>
#include<math.h>

int main()
{
	float number ;
	//printf("Input a float number : ");scanf_s("%f",&number);

	//Delete part
	number = 65.13;
	
	float result;

	//round(number)
	float x = number - floor(number);
    
    if (x >= 0.75)	result = floor(number) + 1;
    else if (x >= 0.25)	result = floor(number) + 0.5;
    else result = floor(number);

    printf("result : %0.1f",result);

	return 1;
}