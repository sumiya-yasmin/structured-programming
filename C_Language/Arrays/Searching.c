// Given a number N and an array A of N numbers. Determine if the number X exists in array A or not and print its position (0-index).
#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        
        scanf("%d", &arr[i]);
    }
    int x;
    scanf("%d", &x);
    int found=0;
    for (int i = 0; i < n; i++)
    {

        if (x == arr[i])
        {
            printf("%d", i);
            found =1;
            break;
        }
    }
    if(found==0){
       printf("-1"); 
    }
    return 0;
}