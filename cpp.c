#include<stdio.h>
int main(){
    int i,s,n,a[100];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d ",&a[i]);
    }
    for(i=0;i<n;i++){
        s+=a[i];
    }
    printf("%d",s);
    return 0;
