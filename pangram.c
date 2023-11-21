/* WAP in C program to check if a given string is pangram or not. A pangram is a string 
that has every letter of the English alphabet */

#include<stdio.h>
#include<string.h>
int main(){
    printf("Enter the string\n");
    char ch[100];
    gets(ch);
   for (int i = 0; ch[i]; i++) {  //convert to lowercase
        ch[i] = tolower((unsigned char)ch[i]);
    }
    int len = strlen(ch);
    printf("%s",ch);
    int found;
    for (char i = 'a'; i <= 'z'; i++) {
        found = 0;
        for (int j = 0; j < len; j++) {
            if (ch[j] == i) {
                found = 1;
                break;
            }
        }
        if (found == 0 || i=='z') {
            break;  
        }
    }

    if (found == 1) {
        printf("\nIt is a Pangram.\n");
    } else {
        printf("\nIt is not a Pangram.\n");
    }
    return 0;
}