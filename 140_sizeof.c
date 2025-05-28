#include<stdio.h>
void main()
{
   char ch=65; // 1 byte
   int a; // 4 byte
   float b;// 4 byte
   double d;// 8 byte
   short int m;// 2 byte
   long long int s; // 8 byte
   printf("value of ch : %d\n",ch);
   printf("address of  ch : %d\n",&ch);
   printf("byte for char : %d\n",sizeof(ch));
   printf("byte for int : %d\n",sizeof(a));
   printf("byte for float : %d\n",sizeof(b));
   printf("byte for double : %d\n",sizeof(d));
   printf("byte for short int : %d\n",sizeof(m));
   printf("byte for long long  int : %d\n",sizeof(s));
}