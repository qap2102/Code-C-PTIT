#include<stdio.h>
#include<math.h>
#include<string.h>
int a[3][2],b[3],i,j,z,s;
int kt;
void swap(int *a,int *b){
    int c=*a;
    *a=*b;
    *b=c;
}
int check(int a,int b,int c,int d,int e,int f){
    if (b==d&&d==f&&a+c+e==b) return 1;
    if (b==d&&a+c==e&&b+f==e) return 1;
    return 0;
}
int main(){
     for(i=0;i<3;++i) scanf("%d%d",&a[i][0],&a[i][1]);
    for(i=0;i<3;++i) b[i]=i;
    while(1){
        kt=0;
        s=check(a[b[0]][0],a[b[0]][1],a[b[1]][0],a[b[1]][1],a[b[2]][0],a[b[2]][1]);
        s+=check(a[b[0]][0],a[b[0]][1],a[b[1]][0],a[b[1]][1],a[b[2]][1],a[b[2]][0]);
        s+=check(a[b[0]][0],a[b[0]][1],a[b[1]][1],a[b[1]][0],a[b[2]][0],a[b[2]][1]);
        s+=check(a[b[0]][0],a[b[0]][1],a[b[1]][1],a[b[1]][0],a[b[2]][1],a[b[2]][0]);
        s+=check(a[b[0]][1],a[b[0]][0],a[b[1]][0],a[b[1]][1],a[b[2]][0],a[b[2]][1]);
        s+=check(a[b[0]][1],a[b[0]][0],a[b[1]][0],a[b[1]][1],a[b[2]][1],a[b[2]][0]);
        s+=check(a[b[0]][1],a[b[0]][0],a[b[1]][1],a[b[1]][0],a[b[2]][0],a[b[2]][1]);
        s+=check(a[b[0]][1],a[b[0]][0],a[b[1]][1],a[b[1]][0],a[b[2]][1],a[b[2]][0]);
        if (s>0) break;
        for(i=2;i>=1;--i)
            if (b[i]>b[i-1]){
                kt=1;
                break;
            }
        if (!kt) break;
        for(j=2;j>=0;--j)
            if (b[i-1]<b[j]){
                swap(&b[i-1],&b[j]);
                break;
            }
        for(j=i;j<2;++j)
            for(z=j+1;z<3;++z)
                if (b[j]>b[z]) swap(&b[j],&b[z]);
    }
    printf("%s",(s>0?"YES":"NO"));
}
