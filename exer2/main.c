#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>
#include<string.h>
int main(void)
{
float n1=8, n2=9, n3=7, n4=4, n5=5,n6=6, somam, media3;
 printf("\n\n A media dos numeros 8, 9 e 7 e = %2.2f\n\n",float((n1+n2+n3))/3 );
 printf("\n\n A media dos numeros 4, 5 e 6 e = %2.2f\n\n",float((n4+n5+n6))/3 );
 somam=((n1+n2+n3)/3)+((n4+n5+n6)/3);
 printf("\n\n A soma das duas medias e = %2.2f\n\n",somam );
 media3=(((n1+n2+n3)/3)+((n4+n5+n6)/3))/2;
 printf("\n\n A media das medias e = %2.2f\n\n",media3);
 printf("\n\n");
 system("pause");
 return (0);
}
