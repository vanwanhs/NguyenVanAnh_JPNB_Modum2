#include<stdio.h>
#include<string.h>
int main(){
	char character[100];
	printf("Moi ban nhap ki tu ");
	fgets(character,100,stdin);
	FILE *fptr;
	fptr = fopen("bt01.txt","w");
	if(fptr == NULL){
		printf("FIle giong\n");
		return 1;
	}
	fprintf(fptr, "%s", character);
	fclose(fptr);
	printf("Da luu vao file bt01.txt\n");
	return 0;
}

