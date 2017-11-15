#include<iostream>
#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>

int main(){
	
	int count=0;
	int total=0;
	int a[100];
	for (int i=0;i<100;i++){
		
		a[i]=i+1;
		
	}
	pid_t p1;
	int array=0;
	fork();
	
	fork();
	if(p1==0){
		for (int j=0;j<25;j++){
		total=total+a[array];
		array++;
		}
		printf("child %d ", total);
	}
	else{
		for(int k=0;k<25;k++){
			total=total+a[array];
			array++;
		}
		printf("parent %d ", total );
		
	}
	
	
	if(p1==0){
		for (int l=0;l<25;l++){
		total=total+a[array];
		array++;
		}
		printf("child_01 %d ", total);
	}
	else{
		for(int m=0;m<25;m++){
			total=total+a[array];
			array++;
		}
		printf("child_02 %d ", total );
		
	}
	
	if(p1==0){
		for (int n=0;n<25;n++){
		total=total+a[array];
		array++;
		}
		printf("child_02 %d ", total);
	}
	else{
		for(int o=0;o<25;o++){
			total=total+a[array];
			array++;
		}
		printf("parent %d ", total );
		
	}
	
	if(p1>0){
		for (int p=0;p<25;p++){
		total=total+a[array];
		array++;
		}
		printf("parent %d ", total);
	}
	else{
		for(int q=0;q<25;q++){
			total=total+a[array];
			array++;
		}
		printf("parent %d ", total );
		
	}	
	
	
	
	
	
	
	
	
	
		printf("Total %d ",total);
		return 0;
}