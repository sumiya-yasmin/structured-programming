//Given multiple lines each line contains a number X which is a password. Print "Wrong" if the password is incorrect otherwise, print "Correct" and terminate the program.
//Note: The "Correct" password is the number 1999.
#include<stdio.h>
int main()
{
    int pass;
    while(scanf("%d", &pass)){
        if(pass == 1999){
           printf("Correct\n");
           break;
        }else{
           printf("Wrong\n"); 
        }
    }
    return 0;
}