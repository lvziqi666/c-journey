# include <stdio.h>
int main()
{
	float x,y;
	scanf("%f%f",&x,&y);
	if(x>=1&&x<=3&&(x-2)*(x-2)+(y-2)*(y-2)<=1&&y>=0){
			printf("10");
		
	}
	else if(x>=1&&x<=3&&(x-2)*(x-2)+(y-2)*(y-2)>=1&&y>=0){
		printf("0");
	}
		else if(x>=1&&x<=3&&(x-2)*(x-2)+(y+2)*(y+2)<=1&&y<=0){
			printf("10");
			
		}
	else if(x>=1&&x<=3&&(x-2)*(x-2)+(y+2)*(y+2)>=1&&y<=0) {
		printf("0");
	}
	else	if(x>=-3&&x<=-1&&(x+2)*(x+2)+(y-2)*(y-2)<=1&&y>=0){
			printf("10");
			
		}
	else  if(x>=-3&&x<=-1&&(x+2)*(x+2)+(y-2)*(y-2)>=1&&y>=0){
		printf("0");
	}
	else	if(x>=-3&&x<=-1&&(x+2)*(x+2)+(y+2)*(y+2)<=1&&y<=0){
			printf("10");
			
		}
	else if(x>=-3&&x<=-1&&(x+2)*(x+2)+(y+2)*(y+2)>=1&&y<=0) {
		printf("0");
	}
		return 0;
}
