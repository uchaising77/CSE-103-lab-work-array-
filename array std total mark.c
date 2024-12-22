#include<stdio.h>
int main()
{
    int x[100],n,i,k,c=0;
    printf("Input the numbers of students: ");
    scanf("%d",&n);
    for(i=0; i<n; i++){

        printf("Marks: ");
        scanf("%d",&x[i]);
    }
    for(k=0; k<n; k++){

        if(x[k] == 30){

            c++;
        }
    }
    printf("%d student got full marks ",c);
    return 0;
}
