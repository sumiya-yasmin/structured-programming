// You will be given a matrix of size NXM. 
// You need to tell if it is a Jadu Matrix or not.
// Note: A magic Matrix is a square matrix 
// where the values of the primary diagonal and secondary diagonal are 1.
//  Rest of the cells will contain only 0;
#include<stdio.h>
#include<stdbool.h>
int main()
{
    int r,c;
    scanf("%d %d", &r,&c);
    if(r!=c){
        printf("NO");
        return 0;
    }
    int arr[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d", &arr[i][j]);
        }
    }
    bool is_magic=true;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            bool is_diagonal = i==j || i+j==r-1;
            if(is_diagonal){
                if(arr[i][j]!=1){
              is_magic=false;
            }
            }else{
                if(arr[i][j]!=0){
                    is_magic=false;
                }
            }
        }
        }
        if(is_magic){
            printf("YES");
        }else{
            printf("NO"); 
        }
        return 0;
    }
    