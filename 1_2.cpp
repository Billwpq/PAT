#include<stdio.h>

void print_pinyin(int n){
    switch(n){
            case 0:printf("ling");break;
            case 1:printf("yi");break;
            case 2:printf("er");break;
            case 3:printf("san");break;
            case 4:printf("si");break;
            case 5:printf("wu");break;
            case 6:printf("liu");break;
            case 7:printf("qi");break;
            case 8:printf("ba");break;
            case 9:printf("jiu");break;
    }
}

int get_sum(char*p){
    int sum=0;
    while(*p!='\0'){
        switch(*p){
            case '0':sum+=0;break;
            case '1':sum+=1;break;
            case '2':sum+=2;break;
            case '3':sum+=3;break;
            case '4':sum+=4;break;
            case '5':sum+=5;break;
            case '6':sum+=6;break;
            case '7':sum+=7;break;
            case '8':sum+=8;break;
            case '9':sum+=9;break;
        }
        p++;
    }
    return sum;
}

int main(){
    char num[101];int sum=0;
    int a[3];
    scanf("%s",num);
    sum=get_sum(num);
    for(int i=0;i<3;i++){
        a[i]=sum%10;
        sum=sum/10;
    }
    for(int j=2;j>=0;j--){
        print_pinyin(a[j]);
        if(j) printf(" ");
    }
    return 0;
}