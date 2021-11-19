#include <stdio.h>
int main(){
    int sum,y,m,d;
    scanf("%d-%d-%d",&y,&m,&d);
    switch(m){
        
        case 1:sum=0;
        break;

        case 2:sum=31;
        break;

        case 3:sum=59;
        break;

        case 4:sum=90;
        break;

        case 5:sum=120;
        break;

        case 6:sum=151;
        break;

        case 7:sum=181;
        break;

        case 8:sum=212;
        break;

        case 9:sum=243;
        break;

        case 10:sum=273;
        break;

        case 11:sum=304;
        break;

        case 12:sum=334;
        break;
        }
    if(((y%100!=0)&&(y%4==0))||(y%400==0)){
        if(m>2){
            sum=sum+1;
        }
    }
        printf("%d",sum+d);
        return 0;
    }
