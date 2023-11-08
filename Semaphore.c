/*Write a program that demonstrates how two processes can share a variable using semaphore */

#include <stdio.h>
int count = 5;

void wait(int *S); // Declaring functions
void signal(int *S);
int p2(int *S); 

void wait(int *S){
    while(*S<=0);
    (*S)--;
}
void signal(int *S)
{
    (*S)++;
}

void p1(int *S){
            wait(S);
            count++;  //critical section
            printf("Count changed by p1 is %d \n ",count);
            signal(S);
                wait(S);
                int p= p2(&S);
                printf("Count changed by p is %d \n",p);
                signal(S);
            
}

int p2(int *S){
   wait(S);
            count--;  //critical section
            printf("Count changed by p2 is %d \n",count);
    signal(S);
    return count;
}


int main(){
    int S=1; //semaphore variable
    p1(&S);
    p2(&S);
}

