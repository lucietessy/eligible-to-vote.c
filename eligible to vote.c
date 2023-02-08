//eligible to vote
#include<stdio.h>
int main()
{
    int age, citizen;
    printf("enter age and if citizen");
    scanf("%d%d", &age,&citizen);
    if(age>=18, citizen){printf("you can vote");}
    else{printf("cannot vote");}
    return 0;
}
