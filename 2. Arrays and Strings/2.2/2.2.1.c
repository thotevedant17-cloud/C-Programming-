#include <stdio.h>
#include <string.h>

int main() {
	char str1[100];  // First string
	char str2[100];  // Second string

    fgets(str1,sizeof(str1),stdin);
	//Remove trailing newline if present 
	str1[strcspn(str1,"\n")] = '\0';

	//read second string 
	fgets(str2,sizeof(str2),stdin);
	//Remove trailing newline if present 
	str2[strcspn(str2,"\n")] = '\0';

	//Concatenate using strcat 
	strcat(str1, str2);
    
	// Print the concatenated result
	printf("%s\n", str1);
	
	return 0;
}
