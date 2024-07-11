#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){
    int t;
    scanf("%d",&t);
    getchar();
    for(int j=1;j<=t;j++){
        
        char s1[201],s2[21],s3[201];
        gets(s1);
        gets(s2);
        strcpy(s3,s1);
        for(int i=0;i<strlen(s1);i++){
            s1[i]= tolower(s1[i]);
        }
        for(int i=0;i<strlen(s2);i++){
            s2[i]=tolower(s2[i]);
        }
        // printf("%s\n",s1);
        // printf("%s\n",s2);
        // printf("%s\n",s3);
        char a[100][100];
        int n=0;
        char *token=strtok(s1," ");
        while(token!=NULL){
            strcpy(a[n],token);
            n++;
            token=strtok(NULL," ");
        }
        char b[100][100];
        int m=0;
        char *token2=strtok(s3," ");
        while(token2!=NULL){
            strcpy(b[m],token2);
            m++;
            token2=strtok(NULL," ");
        }
        int k=0;
        printf("Test %d: ",j);
        for(int i=0;i<n;i++){
            if(strcmp(a[i],s2)!=0) printf("%s ",b[i]);
        }
        printf("\n");
        
    }

}
/*
2
Abc ddd abdc aaa bbb abc ddD XY
aBc
ACHDNC XXXX YYYY ABC ABC XXXX
XxXx
*/
