#include<stdio.h>
#define ll long long
#define py printf("yes\n");
#define pn printf("no\n");
#define slld(a) scanf("%lld",&a)
#define slld3(a,b,c) scanf("%lld%lld%lld",&a,&b,&c)

int main()
{
    ll t,c,d,l,i,j;
    slld(t);
    for(i=1;i<=t;i++)
    {
        slld3(c,d,l);
        if(l%4!=0)
        {
            pn; continue;
        }
        l=l/4;
        if(d>l || c+d < l)
        {
            pn; continue;
        }
        if((c+d)==l)
        {
            py; continue;
        }
        if(d==l && 2*d>=c)
        {
            py; continue;
        }
        l=l-d;
        if(c-l <= 2*d)
        {
            py; continue;
        }
        pn;
    }
    return 0;
}