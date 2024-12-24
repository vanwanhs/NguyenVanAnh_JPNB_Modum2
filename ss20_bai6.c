#include <stdio.h>

int main() {
    FILE *file1, *file6;
    char ch;

    
    file1 = fopen("bt01.txt", "r");
    if (file1 == NULL) {
        printf("dell thay file bt01.txt\n");
        return 1; 
    }


    file6 = fopen("bt06.txt", "w");
    if (file6 == NULL) {
        printf("dell thay file bt06.txt\n");
        fclose(file1);  
        return 1;
    }

    while ((ch = fgetc(file1)) != EOF) {
        fputc(ch, file6);
    }

    printf(" sao chep song  bt01.txt sang bt06.txt ok !\n");

  
    fclose(file1);
    fclose(file6);

    return 0;
}

