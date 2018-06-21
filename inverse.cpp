#include <stdio.h>

int main(){
	int num;
	int sum;
	scanf("%d", &num);
	scanf("%d", &sum);
	int sol[num];
	if(num==1){
		sol[0]=sum;
	}
	else if(num%2==0){
		for(int i=0; i<(num-1)/2; i++){
			if(num>sum && sum>=0){
				sol[i] = i+1+sum;
				sol[num-1-i] = -(i+1+sum);
			}
			else if(num>sum && sum<0){
				sol[i] = i+1-sum;
				sol[num-1-i] = -(i+1-sum);
			}
			else if(num<sum){
				sol[i] = i+1;
				sol[num-1-i] = -(i+1);
			}
		}
		sol[(num-1)/2]= 0;
		sol[num/2] = sum;
	}
	else if(num%2==1){
		for(int i=0; i<(num-1)/2; i++){
			if(num>sum && sum>=0){
				sol[i] = i+1+sum;
				sol[num-1-i] = -(i+1+sum);
			}
			else if(num>sum && sum<0){
				sol[i] = i+1-sum;
				sol[num-1-i] = -(i+1-sum);
			}
			else if(num<sum){
				sol[i] = i+1;
				sol[num-1-i] = -(i+1);
			}
		}
		sol[num/2] = sum;
	}
	for(int i=0; i<num; i++){
		if(i==num-1){
			printf("%d", sol[i]);
		}
		else{
			printf("%d ", sol[i]);
		}
	}
}
