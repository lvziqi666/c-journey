#include<stdio.h>
int get_day(int year,int month);
int main()
{
	int day,year,month;
	scanf("%d",&year);
	scanf("%d",&month);
	day=get_day(year,month);
	
	printf("%d\n",day);
	return 0;
}
int get_day(int year,int month)
{
	int total;
	total=0;
	if(year%4==0&&year%100!=0){
		
			if(month==2){
				total=29;
			}
			else if(month<=7){
				if(month%2!=0){
					total=31;
				}
				else total=30;
			}
			else if(month>7){
				if(month%2!=0){
					total=30;
				}
				else total=31;
			}
		
	}
    else	if(year%400==0){
		
		if(month==2){
			total=29;
		}
		else if(month<=7){
			if(month%2!=0){
				total=31;
			}
			else total=30;
		}
		else if(month>7){
			if(month%2!=0){
				total=30;
			}
			else total=31;
		}
		
	}
	else {
		
			if(month==2){
				total=28;
			}
			else if(month<=7){
				if(month%2!=0){
					total=31;
				}
				else total=30;
			}
			else if(month>7){
				if(month%2!=0){
					total=30;
				}
				else total=31;
			}
		
	}
	return total;
	
	
	
}
