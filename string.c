#include<stdio.h>
#include<string.h>
int main()
{
    char s[1024];
    int n,i,cn=0;
    while(gets(s)){

          if(s==EOF){
            break;
          }
          else{

        n=strlen(s);
        for(i=0;i<n;i++){
            if(s[i] =='"'){
                cn++;
            if(cn%2!=0){
                printf("``");
            }
            else{
               printf("''");
            }
            }
            else{
                printf("%c",s[i]);
            }
        }
          }
        printf("\n");
    }
    return 0;
}
