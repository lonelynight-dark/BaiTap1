//Student ID: 19127641
//Name : Tran Trung Hieu
//Class : 19CLC7

/*
	Test case 1
	Input :	a = 2,b = -7,c = 5   
	Output: Phuong trinh co nghiem :
			x = 1.58
			x = -1.58
			x = 1.00
			x = -1.00

	Test case 2
	Input :	a = 1,b = -4, c = 4 
	Output: Phuong trinh co 2 nghiem :
			x = 1.41
			x = -1.41

	Test case 3
	Input :	a = 1,b = 4, c = 4 
	Output: Phuong trinh vo nghiem
*/
#include<stdio.h>
#include<math.h>

int main()
{
	float a, b, c;
	// Nhap
	//printf("Input a: ");scanf_s("%f",&a);
	//printf("Input b: ");scanf_s("%f",&b);
	//printf("Input c: ");scanf_s("%f",&c);

	//Phan delete
	a = 1; 
	b = -4;
	c = 4;

	//Giai phuong trinh
	float Delta = (b * b) - 4 * a * c;

	if (Delta < 0) printf("Phuong trinh vo nghiem");
	else if (Delta == 0)
	{
		float x = -b / (2 * a);
		
		if (x < 0) printf("Phuong trinh vo nghiem");
		else if (x == 0) printf("Phuong trinh co 1 nghiem : x = 0.00");
		else printf("Phuong trinh co 2 nghiem :\nx = %0.2f\nx = %0.2f",sqrt(x),sqrt(x) * -1.0);
	}
	else
	{
		float x1 = (- b + sqrt(Delta)) / (2 * a);
		float x2 = (- b - sqrt(Delta)) / (2 * a);
		
		if ((x1 < 0) && (x2 < 0)) printf("Phuong trinh vo nghiem");
		else
		{
			printf("Phuong trinh co nghiem :\n");
			
			if (x1 == 0) printf("x = 0.00\n");
			else if (x1 > 0) printf("x = %0.2f\nx = %0.2f\n",sqrt(x1),sqrt(x1) * -1.0);
			
			if (x2 == 0) printf("x = 0.00\n");
			else if (x2 > 0) printf("x = %0.2f\nx = %0.2f",sqrt(x2),sqrt(x2) * -1.0);
		}
	}
	return 1;
}