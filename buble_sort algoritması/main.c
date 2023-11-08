#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,j;
    int gecici;
    printf("dizinin eleman sayiyi giriniz:\n");
    scanf("%d",&n);
    int dizi[n];
    printf("dizi elemanlari:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d\n",&dizi[i]);
    }
    printf("dizi elemanlari:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",dizi[i]);
    }



    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(dizi[j]>dizi[j+1])
            {
                gecici=dizi[j];
                dizi[j]=dizi[j+1];
                dizi[j+1]=gecici;
            }
        }
    }
    printf("siralanmis dizi elemanlari:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",dizi[i]);
    }


    return 0;
}
