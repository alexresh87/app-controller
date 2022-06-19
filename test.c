#include <stdio.h>
#include <stdlib.h>

typedef struct test_struct{
    int a;
    int b;
    int c;
} s_test;

void main(){
    s_test A = {1, 2, 3};
    s_test B;
    FILE *fd = fopen("struct.txt", "wb+");
    fwrite(&A, sizeof(A), 1, fd);
    fclose(fd);
    fd = fopen("struct.txt", "rb");
    fread(&B, sizeof(B), 1, fd);
    fclose(fd);
    printf("%d %d %d", B.a, B.b, B.c);
    exit(0);
    int *p;
    int a[10], i;
    for(i = 0; i< 10; i++){
        a[i] = i+1;
    }
    p = a;
    for(i=0; i< 10; i++){
        printf("%5d", *p);
        p++;
    }
    
    getchar();
}