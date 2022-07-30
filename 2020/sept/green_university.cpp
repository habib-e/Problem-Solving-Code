#include<bits/stdc++.h>
using namespace std;
struct student
{
    char Name[50];
    int id;
    float cgpa;
    char dept[59];

} s[10],t;

int main()
{
    int i;
    int n;
    printf("Enter the number of student : ");
    scanf("%d",&n);
    printf("Enter information of students:\n");
    for (i = 0; i < n; ++i)
    {
        printf("Enter id : ");
        scanf("%d",&s[i].id);
        printf("For id number : %d\n", s[i].id);
        printf("Enter name: ");
        scanf("%s", s[i].Name);
        printf("Enter cgpa: ");
        scanf("%f", &s[i].cgpa);
        printf("Enter dept: ");
        scanf("%s", s[i].dept);
    }
    for(i=0; i<n; i++)
    {
        for(int j=0; j<n-1; j++)
        {
            if(s[j].cgpa>s[j+1].cgpa)
            {
                t=s[j];
                s[j]=s[j+1];
                s[j+1]=t;
            }
        }
    }

    for(i=n-1;i>=1;i--)
    {
        printf("\nName : %s\nID : %d\nCGPA : %.1f\n\n",s[i].Name,s[i].id,s[i].cgpa);
    }
    return 0;
}
