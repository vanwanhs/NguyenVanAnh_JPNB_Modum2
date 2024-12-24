#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
	FILE *fptr;
	fptr = fopen("bt05.txt","w");
	if(fptr == NULL){
		printf("khong tai file");
		return 1;
	} 
	
	int length;
	printf("Moi ban nhap so dong ");
	scanf("%d",&length);
	getchar();
	
	for(int i = 0 ; i<length;i++){
		char str[256];
		printf("nhap noi dung:",i+1);
		fgets(str,sizeof(str),stdin);
		printf(fptr,"%s",str);
	}
	fclose(fptr);
	printf("luu file thanh cong ");
	
	fptr = fopen("bt05.txt","r");
	if(fptr == NULL){
		printf("khong ton tai file bt05.txt!");
		return 1;
	}
	
	printf("\n noi dung trong bt05.txt\n");
	char shope[256];
	while(fgets(shope,sizeof(shope),fptr)!=NULL){
		printf("%s",shope);
	}
	fclose(fptr);
	printf("ok");
    return 0;
}


