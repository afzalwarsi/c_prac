#include <stdio.h> 
#include <string.h> 
#include <stdlib.h> 
  
int main() { 
    char *str1 = "hello"; 
    char *str2 = " "; 
    char *str3 = "world"; 
     
    char *ptr = NULL; 
  
    ptr =str1;
    // end code 1 
    printf("%s\n", ptr);	// expected output : hello 
     
    char *p = (char *) malloc((strlen(str1)+strlen(str2)+strlen(str3))*sizeof(char));
    strcpy(p,str1);
    strcpy(p+strlen(str1),str2);
    strcpy(p+strlen(str1)+strlen(str2),str3);
    ptr=p;
    printf("%s\n", ptr);	// expected output : hello world 
    return 0; 
}