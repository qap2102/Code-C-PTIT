#include<stdio.h>
#include<math.h>
int a,b,i,j;
int ucln(int a,int b){
    int r;
    while(b>0){
        r=a%b;
        a=b;
        b=r;
    }
    return a;
}

int main(){
    scanf("%d%d",&a,&b);
    for(i=a;i<b;++i)
        for(j=i+1;j<=b;++j)
            if (ucln(i,j)==1) printf("(%d,%d)\n",i,j);
}
