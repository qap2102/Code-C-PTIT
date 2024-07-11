#include <stdio.h>

int main(){
	int n,m;scanf("%d%d",&n,&m);
	int c[1001]={0};
	
	while(n--){
	    int x;
		scanf("%d",&x);
	if(c[x]==0)	c[x]+=1;
	}
	while(m--){
	    int x;
		scanf("%d",&x);
	if(c[x]==0||c[x]==1)	c[x]+=2;
	}
	for(int i=0;i<1000;i++){
		if (c[i]==3) printf("%d ",i);
	}
	printf("\n");
	for(int i=0;i<1000;i++){
		if (c[i]==1) printf("%d ",i);
	}
	printf("\n");
	for(int i=0;i<1000;i++){
		if (c[i]==2) printf("%d ",i);
	}
	printf("\n");
	return 0;
	
}
