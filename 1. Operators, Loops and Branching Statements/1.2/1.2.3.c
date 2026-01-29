#include<stdio.h> //For print() and scanf()
#include<math.h> //For sqrt()function
int main(){
	double a,b,c;
	double discriminant,root1,root2,realPart,imagPart;
	printf("Enter coefficients a, b and c: ");
	scanf("%lf %lf %lf",&a, &b,&c);
	discriminant = b*b - 4*
		a*c;
	if (discriminant > 0){
		root1 = (-b+ sqrt(discriminant))/(2*a); //First root
		root2 = (-b - sqrt(discriminant))/(2*a); //Second root 
		printf("root1 = %.2lf and root2 = %.2lf\n",root1,root2);
	}
	
		else if (discriminant == 0){
			root1=-b/(2*a);//Both roots are equal 
			 printf("root1 = root2 = %.2lf\n", root1); //Display root 
	}
	
	else{
		realPart=-b/(2*a);
		imagPart = sqrt(-discriminant)/(2*a);
		
		printf("root1 = %.2lf+%.2lfi and root2 = %.2lf-%.2lfi\n",realPart,imagPart,realPart,imagPart);
		
	}
	 return 0; 
}
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
		
