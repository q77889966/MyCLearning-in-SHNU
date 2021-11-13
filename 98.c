#include <stdio.h>
int main(){
    int a[20];
    int i,c,j;
    int aws[10];
    for(j=0;j<=9;j++){
        aws[j]=0;
    }
    for(i=0;i<=19;i++){
    scanf_s("%d",&a[i]);   
    
    
    if(a[i]<150){
        c=1;
    }
    else if(a[i]>=150&&a[i]<=154){
            c=2;
    }
    else if(a[i]>=155&&a[i]<=159){
            c=3;
        }
    else if(a[i]>=160&&a[i]<=164){
            c=4;
        }
    else if(a[i]>=165&&a[i]<=169){
            c=5;
        }
    else if(a[i]>=170&&a[i]<=174){
            c=6;
        }
    else if(a[i]>=175&&a[i]<=179){
            c=7;
        }
    else if(a[i]>=180&&a[i]<=184){
            c=8;
        }
    else if(a[i]>=185&&a[i]<=189){
            c=9;
        }
    else{
            c=10;
        }
    switch(c){
        case 1:aws[0]++;
            break;
        case 2:aws[1]++;
            break;
        case 3:aws[2]++;
            break;
        case 4:aws[3]++;
            break;
        case 5:aws[4]++;
            break;
        case 6:aws[5]++;
            break;
        case 7:aws[6]++;
            break;
        case 8:aws[7]++;
            break;
        case 9:aws[8]++;
            break;
        case 10:aws[9]++;
            break;
        }
   }
    int k;
    for(k=0;k<=9;k++){
        printf("%d %d\n",k+1,aws[k]);
    }
return 0;
}
