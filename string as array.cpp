 #include <stdio.h>
 #include <string.h>
 int main() {
 	char name[]="VIVEK"; 	
 	int i;
	int str= strlen(name);
 	for (i=0; i<str; i++) {
 		printf("%c",name[i]);
	 }
	 return 0;
 }
