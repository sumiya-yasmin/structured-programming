// Question: Write a function named my_len() which receives a 
// string as a parameter and then counts the length of that
// string and returns that count. Don’t use strlen() function
// to get the length of the string. After receiving that 
// count in the main function print it.
// Note: The string will not have any spaces.


#include<stdio.h>
int my_len(char* s){
    int count=0;
    while(*s != '\0'){
        count++;
        s++;
    }
    return count;
}
int main()
{
    char s[100000+1];
    scanf("%s", s);
 int count = my_len(s);
   printf("%d", count);

    return 0;
}