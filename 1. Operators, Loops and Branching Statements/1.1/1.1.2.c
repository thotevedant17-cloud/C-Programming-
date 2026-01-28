//Type Content here...
#include<stdio.h>
int main (){int num1,num2;int sum,difference,
		   product,remainder;int quotient;


			// Input two numbers 

			scanf("%d%d",&num1,&num2);


			// Perform arithmatic operations 
			sum = num1+ num2;
			difference = num1- num2 ;
			product = num1 * num2;
			quotient = num1/num2;//Typecasting for division
			
			remainder = num1%num2;
			//Display results 
			printf("%d\n",sum);
			printf("%d\n",difference);
			printf("%d\n",product);
			printf("%d\n",quotient);
			printf("%d\n",remainder);

			return 0;
		   }
