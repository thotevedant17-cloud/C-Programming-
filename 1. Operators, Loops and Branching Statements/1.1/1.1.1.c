#include<stdio.h>

int main (){
	int side, area; 
	printf("Side: ");
	scanf("%d",&side);

	//calculate the Area
	area=side*side;

	//output the result
	printf("Area of square: %.d\n",area);
	return 0;
}
