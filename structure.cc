#include <stdio.h>
struct student 
{
    char name[50]="Surya";
    int roll=21;
    float marks=88.8;
} s;
int main() 
{
    printf("Name:%s \n",s.name);
    printf("Roll number: %d\n", s.roll);
    printf("Marks: %.1f\n", s.marks);
    return 0;
}
