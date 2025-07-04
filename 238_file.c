// write some data inside file
// "a"  append data insied file not delete  previus data.
#include <stdio.h>
void main()
{
    FILE *ptr;
    char st1[]="hello i am minakshi from hello world institute\n";
    ptr = fopen("kalyani.txt", "a");
    fprintf(ptr,"hello i am kalyani from hello world institute\n");
    fprintf(ptr,st1);
    fclose(ptr);
}