#include<stdio.h>
int main()
{
    FILE *ptr;
    ptr = fopen("emp_info.txt","w");
    int id, salary;
    char name[100];
    int num_of_emp =50;
    while(num_of_emp--)
    {
        scanf("%d %s %d",&id,name,&salary);
        fprintf(ptr,"%d %s %d",id,name,salary);
    }
    fclose(ptr);
    return 0;
}
