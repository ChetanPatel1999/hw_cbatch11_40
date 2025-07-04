// write some data inside file
//fprintf() :- its used to write data inside file.
#include <stdio.h>
void main()
{
    FILE *ptr;
    char st1[]="hello i am minakshi from hello world institute\n";
    ptr = fopen("kalyani.txt", "w");
    fprintf(ptr,"hello i am kalyani from hello world institute\n");
    fprintf(ptr,st1);
    fclose(ptr);
}