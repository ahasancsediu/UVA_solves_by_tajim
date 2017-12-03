#include<stdio.h>
int main()
{
    double a1,a2,b1,b2,c1,c2,d1,d2,t1,t2;
    while(scanf("%lf %lf %lf %lf %lf %lf %lf %lf",&a1,&a2,&b1,&b2,&c1,&c2,&d1,&d2)==8)
    {
        if(a1==b1 && a2==b2)
        {
            t1=c1+d1-a1;
            t2=c2+d2-a2;
        }
        else if(a1==c1 && a2==c2)
        {
            t1=b1+d1-a1;
            t2=b2+d2-a2;
        }
        else if(a1==d1 && a2==d2)
        {
            t1=c1+b1-a1;
            t2=c2+b2-a2;
        }
        else if(b1==c1 && b2==c2)
        {
            t1=a1+d1-b1;
            t2=a2+d2-b2;
        }
        else if(b1==d1 && b2==d2)
        {
            t1=a1+c1-b1;
            t2=a2+c2-b2;
        }
        else if(c1==d1 && c2==d2)
        {
            t1=b1+a1-c1;
            t2=b2+a2-c2;
        }
        printf("%.3lf %.3lf\n",t1,t2);
    }
    return 0;
}
