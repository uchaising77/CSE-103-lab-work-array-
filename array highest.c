#include <stdio.h>
int main(){
int x[100],n,i,j,c=0,highest,k;
for(i=0;i<7;i++){
    printf("Temperature: ");
    scanf("%d",&x[i]);
}
highest=0;
for(j=0;j<7;j++){
    if(x[j]>highest){
       highest= x[j];
    }
}
for(k=0;k<7;k++){
    if(x[k]==highest){
        c++;
    }
}
printf("%d is the highest temp and its in %d days",highest,c);
return 0;
}
