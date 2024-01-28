#include <stdio.h>
#include <stdlib.h>
#include<string.h>


char* readFile(const char *filename, int index )
{
    int numLines=0;

    FILE *fptr;

    if ((fptr = fopen(filename, "r")) == NULL) {
        printf("%s",filename);
        printf("Error! File cannot be opened.");
        // Program exits if the file pointer returns NULL.
        exit(1);
    }
    fscanf(fptr,"%d",&numLines);

    char *arr[numLines];
    if (index>=numLines)
    {
        printf("OutsideTheArray.");
        exit(1);
    }

    fgetc(fptr);
    for (int i=0;i<numLines&&!feof(fptr);i++) {
        arr[i] = (char *)calloc(100 , sizeof(char));
        fgets(arr[i],100,fptr);
    }

    fclose(fptr);
    return arr[index];

}


int main() {
    char * s1 = readFile("message1.txt", 0);
    char* e1="My first love\n";

    char * s2 = readFile("message1.txt", 1);
    char* e2="CSC344\n";

   // char * s3 = readFile("message2.txt", 2);

   // char* e3="And on his farm he had some cows\n";

    int result1 = strcmp(s1, e1);
    int result2 = strcmp(s2, e2);
   // int result3 = strcmp(s3, e3);

    if (result1==0 && result2==0 )//&& result3 ==0)
        printf("%s", "Congratulations");
    else
        exit(1);

    return 0;
}
