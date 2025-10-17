// Make a function named char_to_ascii() which will take a character as parameter and it will convert that character to ascii value and return
//  through that function.So, the return type will be int.Now in the main function take a character input and call that function to get the integer
//  value of it and print that in the main function.
#include <stdio.h>
int char_to_ascii(char a)
{
    int ascii = a;
    return ascii;
}

int main()
{
    char a;
    scanf("%c", &a);
    int result = char_to_ascii(a);
    printf("%d", result);
    return 0;
}