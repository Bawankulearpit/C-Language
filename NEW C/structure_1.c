#include<stdio.h>
#include<string.h>

struct employee
{
    int codeno;
    float salary;
};

int main()
{
    struct employee facebook[3];

    facebook[0].codeno = 1;
    facebook[0].salary = 10;
    
    facebook[1].codeno = 2;
    facebook[1].salary = 100;
    
    facebook[2].codeno = 3;
    facebook[2].salary = 1000;

    printf("the code no = %d\n",facebook[0].codeno);
    printf("the code no = %d.1\n",facebook[0].salary);
    
    printf("the code no = %d\n",facebook[1].codeno);
    printf("the code no = %.1f\n",facebook[1].salary);

    printf("the code no = %d\n",facebook[2].codeno);
    printf("the code no = %.1f\n",facebook[2].salary);

    return 0;

}