#include <stdio.h>
#include <stdlib.h>

int main()
{int i,n,a,b;
    scanf("%d",&n);
      for(i=1;i<=n;i++){
     scanf("%d%d",&a,&b);
     if(a<b)
         {printf("<\n");}
else if (a>b)
          {printf(">\n");}
else if     (a==b)
     {printf("=\n");}}
return 0;
}
