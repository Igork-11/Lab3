#include <stdio.h>
#include <math.h>
int main() {
int f, r;
float e;
printf("Веддіть число f =");
scanf("%d",&f);
printf("Веддіть число r =");
scanf("%d",&r);
if(f == 5)
{
  e = 3*f-2*r;
  printf("Виконується перша умова\n%f",e);
}
if(f == 0)
{
  e = sqrt(8*r)/(3*f-6);
  printf("Виконується друга умова\n%f",e);
}
 if(f == -5)
{
  e = f*r-9;
  printf("Виконується третя умова\n%f",e);
}
if (f != 5 && f != 0 && f != -5)
{
  printf("Не виконується ні одна з умов задайте інші числа\n");
}
  return 0;
}