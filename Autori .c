#include<stdio.h>
#include<string.h>

int main()
{
	char ipstr[101],opstr[101],ch[2];
	int i=0,len;

	scanf("%s",ipstr);

	len=strlen(ipstr);
	strcpy(opstr,"\0");
	for(i=0;i<len;i++)
	{
		if(i==0)
		{
			ch[0]=ipstr[i];
			ch[1]='\0';
			strcat(opstr,ch);
		}
		if(ipstr[i]=='-' && i<len-1)
		{
			ch[0]=ipstr[i+1];
			ch[1]='\0';
			strcat(opstr,ch);
		}
	}
	//opstr[]='\0';
	printf("%s\n",opstr);


	return 0;
}
