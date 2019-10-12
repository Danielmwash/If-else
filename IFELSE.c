#include <stdio.h>
#include <stdlib.h>

int main()
{int age;
printf("how old are you?\n");
scanf("%d:\n",&age);
if(age>=18)
{
    printf("you can vote!\n");
}
else
{
    printf("you can't vote.your are a minor!\n");
}

    return 0;
}
