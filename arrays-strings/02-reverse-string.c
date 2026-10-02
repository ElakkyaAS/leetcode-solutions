#include<stdio.h>
#include<stdlib.h>
void reverseString(char* s, int sSize);
int main(){
    int sSize;
    printf("Enter the string size\n");
    scanf("%d", &sSize);
    char *s = (char*)malloc(sSize*sizeof(char));
    printf("Enter the String\n");
    scanf("%s", s);
    reverseString(s, sSize);
    printf("String after reversing : %s", s);
    return 0;

}
void reverseString(char* s, int sSize){
    int j;
    for(int i=0, j=sSize-1; i<j; i++, j--){
        char temp = s[i];
        s[i]=s[j];
        s[j]=temp;
    }
}