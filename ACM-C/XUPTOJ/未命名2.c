#include<stdio.h>
#include<string.h>
int main(){
    int n,i,j;
    scanf("%d",&n);
    char str[n][20];
    for(i=0;i<n;i++)
        scanf("%s",&str[i]);
    for(i=0;i<n-1;i++)
        for(j=i+1;j<n;j++)
        if(strcmp(str[i],str[j])<0){
            strcpy(str[n],str[i]);
            strcpy(str[i],str[j]);
            strcpy(str[j],str[n]);
        }
    for(i=0;i<n;i++)
        printf("%s\n",str[i]);
    return 0;
}
