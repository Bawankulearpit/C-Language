#include<stdio.h>

struct employee {
    int codeno;
    float salary;
};

int main()
{
    struct employee ol;
    ol.codeno = 7;
    ol.salary = 10000.05;

    printf("the code no = %d\n",ol.codeno);
    printf("the salary is = %d\n",ol.salary);

    return 0;
}