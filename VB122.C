#include<stdio.h>
#include<conio.h>
main()
{
      int a,b,c,d,e;
      clrscr();
      printf("enter the value of a : ");
      scanf("%d",&a);
      a+=5;
      printf("%d\n",a);

      printf("enter the value of b : ");
      scanf("%d",&b);
      b-=5;
      printf("%d\n",b);

      printf("enter the value of c : ");
      scanf("%d",&c);
      c*=5;
      printf("%d\n",c);

      printf("enter the value of d : ");
      scanf("%d",&d);
      d/=5;
      printf("%d\n",d);

      printf("enter the value of e : ");
      scanf("%d",&e);
      e%=5;
      printf("%d\n",e);
      getch();

}