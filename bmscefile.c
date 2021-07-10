#include<stdio.h>

int main(){
	FILE *fp;
	char ch;
	
	fp = fopen("BMSCE.txt", "w");
	
	while((ch=getchar()) != EOF){
		fputc(ch,fp);
	}
	
	fclose(fp);
	
	fp = fopen("BMSCE.txt", "r");
	
	while((ch=fgetc(fp)) != EOF){
		printf("%c", ch);
	}
	
	fclose(fp);
	
	return 0;
}