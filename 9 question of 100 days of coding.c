#include <stdio.h>
int main(){
    int  simpleinterest, principal, rate, time;
    printf("Enter principal amount: ");
    scanf("%d", &principal);
    printf("Enter rate of interest: "); 
    scanf("%d", &rate);
    printf("Enter time: ");
    scanf("%d", &time);
    simpleinterest = (principal * rate * time) / 100;
    printf("Simple Interest is: %d\n", simpleinterest);
    return 0;
}