#include<stdio.h>
int main()

{
    char firstname[20], lastname[20];
    int bir_year;

    printf("Input your first name : ");
    scanf("%s",firstname);

    printf("Input your last name : ");
    scanf("%s",lastname);

    printf("Type your birthday date : ");
    scanf("%d",&bir_year);

    printf("%s %s %d\n",firstname,lastname,bir_year);

    return 0;
}
