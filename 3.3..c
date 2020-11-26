#include <stdio.h>
#include <math.h>
int main() {
  int a,y;
float x;
printf("Веддіть число a =");
scanf("%d",&a);
printf("Веддіть число y =");
scanf("%d",&y);

if ((pow(y,2)-2*a) < 0)
{ 
  printf("Неможливо взяти коріть з відємного числа задайте інші числа\n");
}

else{
x = a*sqrt(pow(y,2)-2*a);
printf("f=%f",x);
}
  return 0;
}