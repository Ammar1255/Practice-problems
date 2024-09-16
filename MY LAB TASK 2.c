#include <stdio.h>
int main (){
	char character;
	printf("Enter the character:");
	scanf("%s", &character);
	
	if(character>= 'a' ||  character>= 'z'){
		printf("Character is a vowel");
	}else{
		printf("Character is a consonant");
	}

	return 0;
}