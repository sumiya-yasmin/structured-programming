#include<stdio.h>
int main()
{
    char s[10000];
    scanf("%s", s);
    int len = strlen(s);
    int cap=0,sml=0,dig=0;
    for(int i=0;i<len;i++){
         if(s[i]>='a' && s[i]<='z'){
          sml++;
         }else if(s[i]>='A' && s[i]<='Z'){
            cap++;
         }else if(s[i]>='0' && s[i]<='9'){
            dig++;
         }
    }
    printf("%d %d %d", cap, sml, dig);
    return 0;
}