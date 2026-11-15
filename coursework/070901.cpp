# include <stdio.h>
int main()
{
	int str[10];
	int j;
	int upper=0,lower=0,digit=0,space=0,others=0;
	for (j = 0; j < 10; j++)
	{	
		
		str[j] = getchar();
	}
	for (j = 0; j < 10; j++)
	{	if(str[j]>='a'&&str[j]<='z'){
		lower++;
	}
		else if(str[j]>='A'&&str[j]<='Z'){
			upper++;
		}
		else if(str[j]>='0'&&str[j]<='9'){
			digit++;
		}
		else if(str[j]==' '){
			space++;
		}
		else others++;
		
	}
			printf("大写字母：%d\n小写字母：%d\n数字：%d\n空格：%d\n其它：%d\n", upper, lower, digit, space, others);
	return 0;
}










