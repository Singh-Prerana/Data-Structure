#include<stdio.h>
void main(){
    int a=400,i;
    unsigned char*P=(unsigned char*)&a;
    for(i=0;i<sizeof(int);i++){
        printf("At %u value is %d\n",P,*P);
        P++;
    }
}