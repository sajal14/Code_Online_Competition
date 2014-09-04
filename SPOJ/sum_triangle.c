#define FOR(q,e)for(q=1;q<=e;q++)
#define M(a,b)(a>b?a:b)
main()
{
    int t,n,m=0,i,j,a[101][101];
    scanf("%d",&t);
    while(t--)
    {
    scanf("%d",&n);
    FOR(i,n)
        FOR(j,i)
        {
            scanf("%d",&a[i][j]);
            (a[i][j]+=M(a[i-1][j],a[i-1][j-1]))>m?m=a[i][j]:m;}
            printf("%d\n",m);
        }
return 0;
}
