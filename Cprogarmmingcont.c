#include <stdio.h>

int main() {
    int sum1=100+50;
    int sub2=sum1-75;
    int mult3=sub2*sum1;
    printf("%d\n", sum1);
    printf("%d\n", sub2);
    printf("%d\n", mult3);

    int x=3;
    int y=2;
    printf("%d\n", x>y);

    int myage=23;
    int votingage=18;

    if (myage >= votingage) {
        printf("old enough to vote");
    } else {
        printf("Not enough to vote");
        
    int day= 6;
    switch (day){
        case 1:
        printf("Monday");
        break;
        case 2:
        printf("Tuesday");
        break;
        case 3:
        printf("Wednesday");
        break;
        case 4:
        printf("Thursday");
        break;
        case 5:
        printf("Friday");
        break;
        case 6:
        printf("Saturday");
        break;
        case 7:
        printf("Sunday");
        break;
    }
    }
    return 0;

}