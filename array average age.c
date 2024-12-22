#include <stdio.h>
int main(){
int x[100],n,i,j,s,k,c=0;
float avg;
printf("Input the numbers of age: ");
scanf("%d",&n);
for(i=0;i<n;i++){
    printf("Age: ");
    scanf("%d",&x[i]);
}
s=0;
for(j=0;j<n;j++){
    s+=x[j];
}
avg=s/(float)n;
for(k=0;k<n;k++){
    if(x[k]>avg){
        c++;
    }
}
printf("The average age is %f \n",avg);
printf("The number of people older than average age is %d\n",c);
return 0;
}
