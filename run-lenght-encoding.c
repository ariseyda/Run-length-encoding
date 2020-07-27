#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define size 50


/*Run-length encoding is a fast and simple method of encoding strings. 
The basic idea is to represent repeated successive characters as a single count and character. 
For example, the string "AAAABBBCCDAA" would be encoded as "4A3B2C1D2A".
Implement run-length encoding and decoding. 
You can assume the string to be encoded have no digits and consists solely of alphabetic characters. 
You can assume the string to be decoded is valid.*/




int main(){
	
	
	char arr[]="AAAABBBCCDAA";
	
	int len=strlen(arr);
	
    int arr2[len];
    char arr3[len];
    
    int i,count=1,a=0;
    for(i=0;i<len;i++){
    	
    	arr3[a]=arr[i];
    	while(i<len-1&&arr[i]==arr[i+1]){
    		count++;
    		i++;
		}
    	
    	arr2[a]=count;
    	count=1;
    	a++;
    	
    	
    	
	}
    
    for(i=0;i<strlen(arr3);i++){
    	printf("%d%c",arr2[i],arr3[i]);
	}
    

	
	return 0;
}
