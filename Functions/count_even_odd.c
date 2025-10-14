#include<stdio.h>
void count_even_odd(){
    int n;
    scanf("%d", &n);
    int arr[n];
    int eve=0;
    int odd=0;
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
        if(arr[i]%2==0){
            eve++;
        }else{
            odd++;
        }
    }
    printf("%d %d",eve, odd);
}
int main()
{
    count_even_odd();
    return 0;
}