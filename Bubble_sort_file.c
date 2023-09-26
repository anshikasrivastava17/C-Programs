/* Create a file with a list of ‘n’ integers. Read the numbers from the file into an array and sort them in ascending order. [Hint: Bubble Sort algorithm.] */

#include<stdio.h>

int main(void)
 {
                             // creating a FILE variable
  FILE*fptr;
                          
  int num;
  
                            // open the file in write mode
  fptr=fopen("integers", "w");
  
  if (fptr!=NULL) {
    printf("File created successfully!\n");
  }
  else {
    printf("Failed to create the file.\n");
                       // exit status for OS that an error occurred
    return-1;
  }
  
                          // enter integer numbers
  printf("Enter some integer numbers [Enter -1 to exit]: ");
  while (1) {
    scanf("%d", &num);
    if (num!=-1) {
      putw(num, fptr);
    }
    else {
      break;
    }
  }
  
                                             // close connection
  fclose(fptr);
  
                                            // open file for reading
  fptr=fopen("integers", "r");
  
                // array to store the numbers read from the file
    int numbers[100];

                                           // index variable
    int i = 0;

                                        // read numbers from the file
    while ((num = getw(fptr)) != EOF)
    {
        numbers[i] = num;
        i++;
    }

                                            // close connection
    fclose(fptr);

                                      // sort numbers using bubble sort
    int n = i;
    for (int j = 0; j < n - 1; j++)
    {
        for (int k = 0; k < n - j - 1; k++)
        {
            if (numbers[k] > numbers[k + 1])
            {
                int temp = numbers[k];
                numbers[k] = numbers[k + 1];
                numbers[k + 1] = temp;
            }
        }
    }

                                                       // display sorted numbers
    printf("\nSorted numbers:\n");
    for (int j = 0; j < n; j++)
    {
        printf("%d\n", numbers[j]);
    }

    printf("\nEnd of file.\n");

    return 0;
}
