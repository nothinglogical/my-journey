#include<stdio.h>
int main()
{
    
    int a,b,c,d;

    printf("Enter a---\n");
    scanf("%d",&a);

    printf("Enter b---\n");
    scanf("%d",&b);

    printf("Enter c---\n");
    scanf("%d",&c);

    printf("Enter d---\n");
    scanf("%d",&d);

    int x;

    printf("Enter something to start\n");
    scanf("%d",&x);

    printf("sum=%d\n",a+b+c+d);

    printf("sub=%d\n",a-b-c-d);

    printf("multi=%d\n",a*b*c*d);

    printf("div=%d\n",a/b/c/d);

    printf("blender=%d\n",(a+b/c*d-a)+b/c*d-(a+b/c*d-a)+b/c*d-(a+b/c*d-a)+b/c*d-a);

    return 0;
}