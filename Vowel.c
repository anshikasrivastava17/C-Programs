#include<stdio.h>
int main( )
{
	char character;
	printf("enter any alphabet:");
	scanf("%c",&character);
	switch(character)
	{
		case 'a':
		case 'e':
		case 'i':
		case 'o':                                                      
		case 'u':     //checking for both uppercase and lowercase vowels
		case 'A':
		case 'E':
		case 'I':
		case 'O':
		case 'U':
		     printf("vowel");
			 break;
		default:
		    printf("consonant");
	}
	return 0;
}
