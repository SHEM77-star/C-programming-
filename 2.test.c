/*
Name:Shem omondi
Reg no:CT100/G/21307/23
Description:All units this semester
*/

#include<stdio.h>

int main(){
	float Height;
	long long Phonenumber;
	float weight;
	int Age;
	
	printf("Enter your height(in cm):");
	scanf("%f",& Height);
	printf("Enter your Phonenumber:");
	scanf("%lld",&Phonenumber);
	printf("Enter your weight(in kg):");
	scanf("%f",&weight);
	printf("Enter your age(in years):");
	scanf("%d",& Age);
	
	printf("\nMy details:\n");
	printf("Height:%.2f cm\n",Height);
	printf("Phonenumber:%lld\n",Phonenumber);
	printf("Weight:%.2f kg\n",weight);
	printf("Age:%d years\n",Age);
	
	
	return 0;
}
	