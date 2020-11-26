#include <stdio.h>
#include <math.h>
int main() 
{
int x1,x2,x3,y1,y2,y3;
printf("Веддіть число x1 =");
scanf("%d",&x1);
printf("Веддіть число y1 =");
scanf("%d",&y1);
printf("Веддіть число x2 =");
scanf("%d",&x2);
printf("Веддіть число y2 =");
scanf("%d",&y2);
printf("Веддіть число x3 =");
scanf("%d",&x3);
printf("Веддіть число y3 =");
scanf("%d",&y3);
if(y1 == y2 && y1 == y3)
{
  printf("Всі точки лежать на одній прямій");
}
else if(y2 == y1 && y2 == y3)
{
  printf("Всі три точки лежать на одній прямій");
}
else if(y3 == y1 && y3 == y2)
{
  printf("Всі три точки лежать на одній прямій");
}
else if(x1 == x2 && x1 == x3)
{
  printf("Всі точки лежать на одній прямій");
}
else if(x2 == x1 && x2 == x3)
{
  printf("Всі точки лежать на одній прямій");
}else if(x3 == x1 && x3 == x2)
{
  printf("Всі точки лежать на одній прямій");
}
else
{
  printf("Точки не лежать на одній прямій задайте інші кординати :)");
}
  return 0;
}
