#include<stdio.h>
#include<string.h>
int main(){
    char s1[30];
    char s2[30];
    printf("Enter the s1 = ");
    scanf("%s",&s1);
    printf("Enter the s2 = ");
    scanf("%s",&s2);
    printf("%ld\n",strlen(s1));
    printf("%s\n",strcat(s1,s2));
    printf("%ld\n",strcmp(s1,s2));
    printf("%s\n",strcpy(s1,s2));
    return 0;
}
