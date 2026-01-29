#include <stdio.h>

// Enum to track the type of data stored in the union
enum Type {
    INTEGER,
    FLOATING_POINT
};

// Union definition
union Data {
	int integer;
	float floating_point;
};
struct Value {
enum Type type;
union Data data;
};
// Structure definition to track the type of data stored in the union

int main() {
	struct Value variable1, variable2;
    // Initialize and print the union variables
   variable1.type=INTEGER;
	scanf("%f",&variable1.data.floating_point);
	variable1.data.integer=
(int)variable1.data.floating_point;
	while(getchar()!='\n' && !feof(stdin));
	variable2.type=FLOATING_POINT;
	scanf("%f",&variable2.data.floating_point);
	if(variable1.type==INTEGER)
		printf("%d\n",variable1.data.integer);
	else

printf("%.1f\n",variable2.data.floating_point);
	if(variable2.type==FLOATING_POINT)

		printf("%.1f\n",variable2.data.floating_point);
	else 
		 printf("%d\n",variable2.data.integer);

    // Input for variable1
   
    

    // Clear the input buffer
   
    // Input for variable2
    

    // Print variable1
   
    // Print variable2
   

	return 0;
}
