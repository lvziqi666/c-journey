#include<stdio.h>
int get_day(int year,int mon,int day);
int main()
{
	int day,year,mon;
	int total;
	scanf("%d",&year);
	scanf("%d",&mon);
	scanf("%d",&day);
	
		
	if(mon<=0||mon>12||day<=0||day>31){
		printf("错误日期");
		return 0;
	}
	else	if(year%4!=0&&year%100==0&&day==29){
	
			printf("错误日期");
		return 0;
	}
	else if(year%400!=0&&day==29){
		
			printf("错误日期");
			return 0;
		
	}
	else
	{total=get_day(year,mon,day);
	printf("第%d天\n",total);
	}
	return 0;
}
int get_day(int year,int mon,int day)
{
	int total;
	total=0;


			for(int i=1;i<mon;i++){
	
	if(year%4==0&&year%100!=0){
	
			if(i==2){
				
				total+=29;
			}
			else if(i<=7){
				if(i%2!=0){
					total+=31;
				}
				else total+=30;
			}
			else if(i>7){
				if(i%2!=0){
					total+=30;
				}
				else total+=31;
			}
	
		}
	     	else	if(year%400==0){
			
			if(i==2){
				total+=29;
			}
			else if(i<=7){
				if(i%2!=0){
					total+=31;
				}
				else total+=30;
			}
			else if(i>7){
				if(i%2!=0){
					total+=30;
				}
				else total+=31;
			}
		}
		else {
			
			if(i==2){
				total+=28;
				
			}
			else if(i<=7){
				if(i%2!=0){
					total+=31;
				}
				else total+=30;
			}
			else if(i>7){
				if(i%2!=0){
					total+=30;
				}
				else total+=31;
			
			}
				
		}

	
	
	}
		total+=day;
		return total;
}
	

