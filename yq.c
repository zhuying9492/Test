#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_LINE 1024
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int i=0;
	FILE *fp,*fp1;
	char strline[MAX_LINE];
	if((fp = fopen("yq_in.txt","r") )== NULL)//打开文件yq_in 
	{
		printf("Open falied!\n");
		return -1;
	 }
	 if((fp1 = fopen("yq1_out.txt","w") )== NULL)
	{
		printf("Open falied\n");
		return -1; 
	 }  	
	 char strline1[MAX_LINE-7];
	char ch[7],ch1[7];
	 while(!feof(fp))
	 {
	 	
	 	fgets(strline,MAX_LINE,fp);
		strncpy(ch,strline,7);
	 	if((strcmp(ch,ch1))!=0)
	 	{	if(i!=0){
		 	printf("\n");
		 	fprintf(fp1,"\n");
		 }
	 		printf("%s\n",ch);
	 		fprintf(fp1,"%s\n",ch);
	 		strcpy(ch1,ch);
		}
		int len = strlen(strline);
			for(i=0;i<len;i++)
			{
				strline1[i]=strline[i+7];
			}
		fprintf(fp1,"%s",strline1);
		printf("%s",strline1);
	 } 
	 fclose(fp);
	fclose(fp);
} 
