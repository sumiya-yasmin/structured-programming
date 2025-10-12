// Given three numbers A, B, C. Print these numbers in ascending
//  order followed by a blank line and then the values in the 
//  sequence as they were read.
#include<stdio.h>
int sortNumbers(int x,int y,int z){
    int temp;
   if(x>y){
     temp=x;
     x=y;
     y=temp;
   }
   if(y>z){
    temp=y;
    y=z;
    z=temp;
   }
   if(x>y){
     temp=x;
     x=y;
     y=temp;
   }
    printf("%d\n%d\n%d\n",x,y,z);
    return 0;
}
int main()
{
    int x,y,z;
    scanf("%d %d %d", &x,&y,&z);
    sortNumbers(x,y,z);
    printf("\n");
    printf("%d\n%d\n%d\n", x,y,z);
    return 0;
}