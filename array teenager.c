#include<stdio.h>
int main(){
    int x[100],n,i,k,c=0;
    printf("Enter the number of students:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("Age:");
        scanf("%d",&x[i]);
    }
    for(k=0;k<n;k++){
        if(x[k]<18){
            c++;
        }
    }
    printf("The number of teenager is %d",c);
    return 0;

}
