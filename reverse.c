#include<stdio.h>
int main()
{int n;
    printf("ENTER THE NUMBER");
    scanf("%d",&n);
    
    int ekam=n%10;
    int dashak=(n/10)%10;
    int so=(n/100)%10;
    int hajar=(n/1000)%10;
    int lakh=(n/10000)%10;
    
     printf("THE REVERSED NUMBER IS :");
    if(n>=10 && n<100){printf("%d%d",ekam,dashak);}
    if(n>=100 && n<1000){printf("%d%d%d",ekam,dashak,so);}
    if(n>=1000 && n<10000){printf("%d%d%d%d",ekam,dashak,so,hajar);}
    if(n>=10000 && n<100000){printf("%d%d%d%d%d",ekam,dashak,so,hajar,lakh);}
    }
