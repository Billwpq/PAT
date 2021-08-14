#include<stdio.h>
#include<string.h>
#define MAXSIZE 100

void checkanswer(char answer[],int n){
    char *p=answer;
    int l=0,m=0,r=0;
    int P_position=-1,T_position=-1;
    int flag=1;
    for(int i=0;i<n;i++){
        if(*p=='A'&&(P_position==-1)&&(T_position==-1)) l++;
        else if(*p=='P'&&(P_position==-1)) P_position=i;
        else if(*p=='T'&&(T_position==-1)) T_position=i;
        else if(*p=='A'&&(P_position>-1)&&(T_position==-1)) m++;
        else if(*p=='A'&&(P_position>-1)&&(T_position>-1)) r++;
        else {flag=0;break;}
        p++;
    }
    if(flag){
        if((P_position<T_position)&&m){
                if(l*m==r) printf("YES");
                else printf("NO");
            }    
        else printf("NO");
    }
    else
        printf("NO");
}

char answer[MAXSIZE+1];
int size=0;
int main(){
    int n=0;
    scanf("%d",&n);
    while(n){
        n--;
        scanf("%s",answer);
        size=strlen(answer);
        checkanswer(answer,size);
        if(n>0) printf("\n");
    }
    return 0;
}