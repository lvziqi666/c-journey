# include <stdio.h>
# include <string.h>
# include <stdlib.h>
int main()
{int c;
	scanf("%d",&c);
	int total[100];
	int x[100],y[100];
		char z[100];
	char op=0;
	char firstword[20];
	for(int i=0;i<c;i++){
		scanf("%s",firstword);
	if(firstword[0]=='a'){
		scanf("%d%d",&x[i],&y[i]);
	total[i]=x[i]+y[i];
		z[i]='+';
		op=firstword[0];
	}
		else if(firstword[0]=='b'){
			scanf("%d%d",&x[i],&y[i]);
		total[i]=x[i]-y[i];
		z[i]='-';
		op=firstword[0];
	}
		else if(firstword[0]=='c'){
			scanf("%d%d",&x[i],&y[i]);
		total[i]=x[i]*y[i];
		z[i]='*';
		op=firstword[0];
	}
		else {
			x[i]=atoi(firstword);
			scanf("%d",&y[i]);
			if(op=='a'){
				total[i]=x[i]+y[i];
				z[i]='+';

			}
				else if(op=='b'){
					total[i]=x[i]-y[i];
					z[i]='-';
				}
				else if(op=='c'){
					total[i]=x[i]*y[i];
					z[i]='*';
				}
		}
			}
	for(int i=0;i<c;i++){
		char ans[12]={0};
		int length=0;
		sprintf(ans,"%d%c%d=%d",x[i],z[i],y[i],total[i]);
		printf("%d%c%d=%d ",x[i],z[i],y[i],total[i]);
		printf("\n");
		length=strlen(ans);
		printf("%d",length);
		printf("\n");
	}
	return 0;
	
}
