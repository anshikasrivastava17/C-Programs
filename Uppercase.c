/* Convert uppercase string to lowercase */

#include <stdio.h>
int main()
{
    printf("Enter uppercase string\n");
    char ar[50];
    gets(ar);                //inputs string
    for(int i=0;i<ar[i]!='\0';i++)
    {
        if(ar[i]>='A'&& ar[i]<='Z')
        ar[i]=ar[i]+32;     //converts to lowercase
    }
    puts(ar);               //displays string
    return 0;
}
