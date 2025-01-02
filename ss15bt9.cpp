#include<stdio.h>
#include<string.h>
int count=0;
void changeValue(char string[],int size){
	for(int i=count;i<size-1;i++){
		string[i]=string[i+1];
	}
}
int main(){
	char string[]="cuoeeeeng leeeee eeeeeeca eeeeeetim\n";
	int size=strlen(string);
	char c;
	printf("%s",string);
	printf("moi ban nhap chu muon xoa: ");
	scanf("%c",&c);
	for(int i=0;i<size;i++){
		if(string[i]==c){
			count=i;
			changeValue(string,size);
			i=0;
		}
	}
		for(int i=0;i<size;i++){
		printf("%c",string[i]);
	}
}
