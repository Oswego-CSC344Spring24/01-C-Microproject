#include <stdio.h>
#include <stdlib.h>
#include<string.h>


/*********************************
 * Don't change the main function
 * *******************************
 */
int main() {
    char * s1 = readFile("input.txt", 0);
    char* e1="My first love\n";

    char * s2 = readFile("input.txt", 1);
    char* e2="CSC344\n";

    char * s3 = readFile("input2.txt", 2);

    char* e3="And on his farm he had some cows\n";

    int result1 = strcmp(s1, e1);
    int result2 = strcmp(s2, e2);
    int result3 = strcmp(s3, e3);

    if (result1==0 && result2==0 && result3 ==0)
        printf("%s", "Congratulations");
    else
        exit(1);

    return 0;
}

