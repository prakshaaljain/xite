#include<stdio.h>

int main(int argc, char** argv){
    int a;
    scanf("%d", &a);
    printf("Hello Exciting World! %d\n", a);
    for(int i = 0; i < argc; i++){
        printf("%s\n", argv[i]);
    }
    return 0;
}