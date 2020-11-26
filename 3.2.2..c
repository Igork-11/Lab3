#include <stdio.h>
#include <string.h>
int main() {
int n = 0;
printf("Веддіть число місяця\n");
scanf("%d",&n);
switch(n)
{
case 1:
printf("Січень\n");
break;
case 2:
printf("Лютий\n");
break;
case 3:
printf("Березень\n");
break;
case 4:
printf("Квітень\n");
break;
case 5:
printf("Травень\n");
break;
case 6:
printf("Червень\n");
break;
case 7:
printf("Липень\n");
break;
case 8:
printf("Серпень\n");
break;
case 9:
printf("вересень\n");
break;
case 10:
printf("Жовтень\n");
break;
case 11:
printf("Листопад\n");
break;
case 12:
printf("Грудень\n");
break;
default:
printf("Ви ввели число більше 12, такого місяця не існує, будь-ласка введіть від 1 до 12 \n");
}
  return 0;
}
