#include<stdio.h>
#include<string.h>
struct emp{
    char name[40];
    int age;
    float bs;
};
int main(){
    struct emp e;
    strupr(e.name);
    FILE *a,*b;
    a = fopen("record.txt", "r");
    b = fopen("copy.txt", "w");
    char ch;
    while(1){
        ch = fgetc(a);
        if(ch == EOF){
            break;
        }
        else(fputc(ch,b));
    }
    fclose(a);
    fclose(b);
}