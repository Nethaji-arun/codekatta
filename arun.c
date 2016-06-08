#include <stdio.h>
#include<string.h>
int main() {
               char a[20],b[20];
               int i,count=0,t;
               gets(a);
              for(i=0;a[i]!='\0';i++)
              {
                  count=count+1;
              }
              printf("%d",count);
              printf("\n");
              t=count;
              for(i=0;i<count;i++)
              {
                  b[i]=a[t-1];
                  --t;
              }
              for(i=0;i<count;i++)
              {
                  printf("%c",b[i]);
              }

	return 0;
}

