//Given the width and the height of a shape determine whether it's for a square or a rectangle?
#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    for(int i=0; i<t;i++){
        int h,w;
        scanf("%d %d", &h,&w);
        if(h==w){
            printf("Square\n");
        }else{
            printf("Rectangle\n");
        }
    }
    return 0;
}