// Petya loves lucky numbers. 
// Everybody knows that lucky numbers are positive integers whose decimal representation contains only the lucky digits 4 and 7. 
// For example, numbers 47, 744, 4 are lucky and 5, 17, 467 are not.

// Petya calls a number almost lucky if it could be evenly divided by some lucky number. 
// Help him find out if the given number n is almost lucky.

#include<stdio.h>
void findAlmostLucky(int n){
    int lucky_numbers[] = {
        4, 7, 44, 47, 74, 77, 
        444, 447, 474, 477, 744, 747, 774, 777
    };
    int count = sizeof(lucky_numbers) / sizeof(lucky_numbers[0]);
    for(int i=0;i<count;i++){
        int lucky = lucky_numbers[i];
        if(lucky>lucky_numbers[i]){
            break;
        }
        if (n % lucky == 0) {
        printf("YES\n");
        return; 
    }
    }
    printf("NO\n");
}
int main()
{
    int n;
    scanf("%d", &n);
    findAlmostLucky(n);
    return 0;
}