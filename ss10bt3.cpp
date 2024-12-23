#include<stdio.h>
int main(){
	int array[]={4,2,6,1,9};
	int n=sizeof(array)/sizeof(array[0]);
	for(int i=0;i<n;i++){
		int key=array[i];
		int j=i-1;
		while(j>=0&&array[j]>key){
			array[j+1]=array[j];
			j=j-1;
		}
		array[j+1]=key;
	}
	printf("array: \n");
	for(int i=0;i<n;i++){
		printf("%d ",array[i]);
	}
	printf("\n");
	return 0;
}
