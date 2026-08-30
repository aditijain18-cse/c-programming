#include <stdio.h>
int main() {
    int second, minute, hour;
    printf("enter second:");
    scanf("%d", &second);
    minute = second / 60;
    hour = minute / 60;
    printf("minute:%d\n", minute);
    printf("hour:%d\n", hour);
    return 0;
}