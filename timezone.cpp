#include <stdio.h>

int main(){
	int hr;
	int min;
	char start[4];
	char end[4];
	scanf("%d %d", &hr, &min);
	gets(end);
	gets(start);
	gets(end);
	if(end[0]=='P'){
		if(hr<10){
			printf("%d", 0);
			printf("%d ", hr);
		}
		else{
			printf("%d ", hr);
		}
		if(min<10){
			printf("%d", 0);
			printf("%d", min);
		}
		else{
			printf("%d", min);
		}
	}
	else if(end[0]=='E'){
		hr = (hr+3)%24;
		if(hr<10){
			printf("%d", 0);
			printf("%d ", hr);
		}
		else{
			printf("%d ", hr);
		}
		if(min<10){
			printf("%d", 0);
			printf("%d", min);
		}
		else{
			printf("%d", min);
		}
	}
	else if(end[0]=='G'){
		hr = (hr+8)%24;
		if(hr<10){
			printf("%d", 0);
			printf("%d ", hr);
		}
		else{
			printf("%d ", hr);
		}
		if(min<10){
			printf("%d", 0);
			printf("%d", min);
		}
		else{
			printf("%d", min);
		}
	}
	else if(end[0]=='I'){
		hr = (hr+13+((min+30)/60))%24;
		min = (min+30)%60;
		if(hr<10){
			printf("%d", 0);
			printf("%d ", hr);
		}
		else{
			printf("%d ", hr);
		}
		if(min<10){
			printf("%d", 0);
			printf("%d", min);
		}
		else{
			printf("%d", min);
		}
	}
	else if(end[0]=='N'){
		hr = (hr+13+((min+45)/60))%24;
		min = (min+45)%60;
		if(hr<10){
			printf("%d", 0);
			printf("%d ", hr);
		}
		else{
			printf("%d ", hr);
		}
		if(min<10){
			printf("%d", 0);
			printf("%d", min);
		}
		else{
			printf("%d", min);
		}
	}
	else if(end[0]=='H'){
		hr = (hr+16)%24;
		if(hr<10){
			printf("%d", 0);
			printf("%d ", hr);
		}
		else{
			printf("%d ", hr);
		}
		if(min<10){
			printf("%d", 0);
			printf("%d", min);
		}
		else{
			printf("%d", min);
		}
	}
	else if(end[0]=='J'){
		hr = (hr+17)%24;
		if(hr<10){
			printf("%d", 0);
			printf("%d ", hr);
		}
		else{
			printf("%d ", hr);
		}
		if(min<10){
			printf("%d", 0);
			printf("%d", min);
		}
		else{
			printf("%d", min);
		}
	}
	else if(end[0]=='A'){
		hr = (hr+18+((min+30)/60))%24;
		min = (min+30)%60;
		if(hr<10){
			printf("%d", 0);
			printf("%d ", hr);
		}
		else{
			printf("%d ", hr);
		}
		if(min<10){
			printf("%d", 0);
			printf("%d", min);
		}
		else{
			printf("%d", min);
		}
	}
	else if(end[2]=='T'){
		hr = (hr+1)%24;
		if(hr<10){
			printf("%d", 0);
			printf("%d ", hr);
		}
		else{
			printf("%d ", hr);
		}
		if(min<10){
			printf("%d", 0);
			printf("%d", min);
		}
		else{
			printf("%d", min);
		};
	}
	else if(end[2]=='K'){
		hr = (hr+11)%24;
		if(hr<10){
			printf("%d", 0);
			printf("%d ", hr);
		}
		else{
			printf("%d ", hr);
		}
		if(min<10){
			printf("%d", 0);
			printf("%d", min);
		}
		else{
			printf("%d", min);
		}
	}
}
