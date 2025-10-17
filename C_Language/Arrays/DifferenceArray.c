//Array A of N size
//copy A in B and sort it in ascending order
//Absolute difference of A and B in C
//Print C
#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arrA[n];
    for(int i=0;i<n;i++){
        scanf("%d", &arrA[i]);
    }
    int arrB[n];
    //copy
   for(int i=0;i<n;i++){
       arrB[i]=arrA[i];
   }
   //sort
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
          if(arrB[j]<arrB[i]){
            int temp=0;
            temp=arrB[i];
            arrB[i]=arrB[j];
            arrB[j]=temp;
          }
        }
   }
 //abs diff
 int arrC[n];
  for(int i=0;i<n;i++){
    int x= arrA[i]-arrB[i];
    if(x<0){
        x=-x;
    }
       arrC[i]=x;
   }

    for(int i=0;i<n;i++){
        printf("%d ", arrC[i]);
    }
    
    return 0;
}