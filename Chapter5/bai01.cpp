#include <stdio.h>
#include <cstring>


int getLength(char a[]){
	int length = 0;
	while(a[length] != '\0') length ++;
	
	return length;
}

int main(){
	char s[100]; // -> bao hieu
	
	printf("Nhap vao chuoi s: ");
	gets(s);
	
	printf("Chuoi nhap vao la: %s\n",s); // == puts(s); // s = string // c = char = character
	printf("Do dai chuoi la: %d\n",getLength(s));
	
	for(int i = 0; i < strlen(s); i ++){
		printf("%c ",s[i]);	
	}
	
	printf("\n");
	for(int i = 0; i < strlen(s); i ++){
		printf("%d ",(int)s[i]);	
	}
	
	
	
}
