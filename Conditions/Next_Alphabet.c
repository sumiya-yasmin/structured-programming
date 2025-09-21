//Given a lowercase alphabet character. You have to print the next character in the alphabet.
#include<stdio.h>
int main()
{
    char alp;
    scanf("%c", &alp);
    if(alp=='z'){
       printf("a");  
    }else{
        printf("%c", alp+1);

    }
    return 0;
}