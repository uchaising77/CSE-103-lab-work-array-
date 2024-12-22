#include <stdio.h>
int main(){

    int x[100],y[100],n,i,j,a=0,b=0,c=0,d=0;
    printf("Enter numbers of quadrants : ");
    scanf("%d",&n);
    for(i=0; i<n; i++){

        printf("Enter X: ");
        scanf("%d",&x[i]);
        printf("Enter Y: ");
        scanf("%d",&y[i]);
    }
    for(j=0; j<n; j++){

        if(x[j]>=1 && y[j]>=1){

            a++;
        }
        if(x[j]>=1 && y[j]<1){

            b++;
        }
        if(x[j]<1 && y[j]<1){

            c++;
        }
        if(x[j]<1 && y[j]>=1){

            d++;
        }
    }
    printf("%d ",a);
    printf("%d ",d);
    printf("%d ",c);
    printf("%d ",b);
    return 0;
}
