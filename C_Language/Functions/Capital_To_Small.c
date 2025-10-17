// Question: Make a function named small_to_capital() which will take a small alphabet as a parameter (which is a character) and it will 
// convert that small alphabet to capital alphabet and return through that function. So, the return type will be char. Now in the main function take a character input which will be small 
// alphabets and call that function to get the capital alphabet and print that in the main function.

#include<stdio.h>
char capital_to_small(char a){
//    char cap = a + 32;
char cap = a + ('b'-'B');
   return cap;
}
int main()
{
    char a;
    scanf("%c", &a);
   char res= capital_to_small(a);
   printf("%c", res);
    return 0;
}