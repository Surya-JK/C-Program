#include<stdio.h>
struct car{
    char make[15];
    char model[15];
    int year;
  };
int main()
{
  	struct car s1={"Benz","S Class",2012};
    struct car s2={"BMW","350D",2013};
    printf("Make:%s,Model:%s,year:%d\n",s1.make,s1.model,s1.year);
  	printf("Make:%s,Model:%s,year:%d\n",s2.make,s2.model,s2.year);
    return 0;
}
