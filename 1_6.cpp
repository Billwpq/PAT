#include<stdio.h>


char sub[30];
int a[3];
char bs[3]="SB";
char ge[11]="0123456789";

void put1(const char*string){
    while(*string)
        putchar(*string++); 
}

int main(){
    int n=0,i=0;
    scanf("%d",&n);
    while(n){
        a[i]=n%10;
        n=n/10;
        i++;
    }
    i--;
    char * p;
    p=sub;
    while(i>-1){
        if(i){
            for(int j=0;j<a[i];j++){
                *p=bs[i-1];
                p++;
            }
        }
        else{
            for(int j=0;j<a[i];j++){
                *p=ge[j+1];
                p++;
            }
        }
    }
    put1(sub);
    return 0;
}