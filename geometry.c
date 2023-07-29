#include<stdio.h>
int main ()
{
  int X,Y,Z;

///data input 
  printf("Enter x = \n");
  scanf("%d",&X);

  printf("Enter Y = \n");
  scanf("%d",&Y);

  printf("Enter Z = \n");
  scanf("%d",&Z);

///role indification
  printf("let X , Y and Z be Length , Width and height respectively .\n");

///square
  printf("Area of a square = %d\n",X*X);
  printf("Perimeter of a square - %d\n",4*X);

///rectangle
  printf("Area of a rectangle = %d\n",Y*Z);
  printf("Perimeter of a rectangle = %d\n",2*(Y+Z));

///cube 
  printf("Area of a cube = %d\n",6*(X*X));
  printf("Volume of a cube = %d\n",X*X*X);

///cuboid
  printf("Area of a cuboid = %d\n",2*(X*Z+Y*Z+Z*X));
  printf("Volume of a cuboid = %d\n",X*Y*Z);

printf("THANKS\n");

///rusult 
return 0;
}