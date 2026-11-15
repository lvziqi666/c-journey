# include <stdio.h>
# include <string.h>
int main()
{
	int q;
	scanf("%d",&q);
	getchar();
	int panduan;
	char a[10000];
		char result[10000];
	gets(a);
		strcpy(result, a);	
	for(int i=1;i<=q;i++){
		scanf("%d",&panduan);
		getchar();
		if(panduan==1){
			char b[10000];
			gets(b);
			strcat(result, b);
			for(int cnt=0;result[cnt]!='\0';cnt++){
				printf("%c",result[cnt]);
			}
				printf("\n");
		}
		
		else if(panduan==2){
			char c[10000];
			int chushi=0;
			int qishi,jieshu;
			scanf("%d%d",&qishi,&jieshu);
			for(int o=qishi;o<qishi+jieshu;o++){
				c[chushi]=result[o];
				chushi++;
			}
			c[chushi]='\0';
		strcpy(result, c);	
		for(int cnt=0;result[cnt]!='\0';cnt++){
			printf("%c",result[cnt]);
		}	
			printf("\n");
		}
	
		else if(panduan==3){
			int difang;
			scanf("%d",&difang);
			getchar();
			char xin[10000];
			gets(xin);
			char diyibufen[10000],dierbufen[10000];
			int jishu=0;
			for(jishu=0;jishu<difang;jishu++){
				diyibufen[jishu]=result[jishu];
			}
			diyibufen[jishu]='\0';
			int diern=0;
			for(int jishu=difang;result[jishu]!='\0';jishu++){
				dierbufen[diern]=result[jishu];
				diern++;
			}
			dierbufen[diern]='\0';
			strcpy(result, diyibufen);
			strcat(result, xin);
			strcat(result, dierbufen);
			for(int cnt=0;result[cnt]!='\0';cnt++){
				printf("%c",result[cnt]);
			}
			printf("\n");
		}
		else if(panduan==4){
			char mubiao[10000];
			gets(mubiao);
			char *p=strstr(result,mubiao);
			if(p!=NULL){
				printf("%lld\n",p-result);
			}
			else printf("-1\n");
		}
	}
}
