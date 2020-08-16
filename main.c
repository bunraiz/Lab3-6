#include <stdio.h>
#define pi 3.14159
int main(void)
{
	float R,H,result;
	printf("Enter Your Radius : ");
	scanf("%f",&R);
	printf("Enter Your Height : ");
	scanf("%f",&H);
	result = (2*pi*R)*H+2*(pi*(R*R));
	printf("Your Cylinder Surface Area is : %f",result);
	return 0;
}