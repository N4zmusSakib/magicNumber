#include<stdio.h>
int main()
{
    int a[500][500],n,i,j,l,r,c,nr,nc,x;
    for(x=0;;x++)
    {
        printf("Enter size of the matrix: ");
        scanf("%d",&n);
        if(n==0)
            break;
        r=0;
        c=n/2;
        l=n-1;

        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                a[i][j]=0;
            }
        }

        a[r][c]=1;

        for(i=2;i<=n*n;i++)
        {
            if(r==0)
                nr=l;
            else
                nr=r-1;
            if(c==l)
                nc=0;
            else
                nc=c+1;
            if(a[nr][nc]>0)
            {
                if(r>=l)
                {
                    nr=0;
                }
                else
                {
                    nr=r+1;
                    nc=c;
                }
            }
            a[nr][nc]=i;
            r=nr;
            c=nc;
        }
        printf("\n");
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                printf("%2d  ",a[i][j]);
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}
