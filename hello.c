#include<stdio.h>
int findsplitpoint(int arr[],int n){
    int leftsum = 0;

    for(int i =0;i<n;i++){
        leftsum += arr[i];

        int rightsum =0;
        for(int j =i+1;j<n;j++){
            rightsum += arr[j];

        }
        if(leftsum == rightsum){
            return i+1;
        }
    }
    return -1;
}
void printtwoparts(int arr[],int n){
    int splitpoint = findsplitpoint(arr,n);
    if (splitpoint==-1 || splitpoint == n){
        printf("Not possible.");
        return;
    }
    for(int i =0;i<n;i++){
        if(splitpoint==i){
            printf("First array\n");
            for(int j =0;j<splitpoint;j++){
                printf("%d ",arr[j]);
            }
            printf("\n");
            printf("Second array\n");
            for(int k=n-1;k>=splitpoint;k--){
                printf("%d ",arr[k]);
            }
        }
    }


}
int main(){
    int n;
    printf("input the no. of elements: ");
    scanf("%d",&n);
    int arr[n];
    printf("Input elements: \n");
    for(int i =0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printtwoparts(arr,n);
    return 0;

}