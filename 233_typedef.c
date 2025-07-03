// type def :- its used to change data type name temparay in program.
#include <stdio.h>
typedef long long int lli;
typedef long double ld;
struct student_of_10th_class_sectionB
{
    int rno;
    float per;
};
typedef struct student_of_10th_class_sectionB s10b;
void main()
{
    s10b s1;
    lli a;
    double b;
    ld c;
    c = 890;
    printf("size of long long int : %d\n", sizeof(a));
    printf("size of double : %d\n", sizeof(b));
    printf("size of long double : %d\n", sizeof(c));
}