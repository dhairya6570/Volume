#include<stdio.h>

enum week {
	
	Mon=1 , Tue , Wed , Thu , Fri , Sat , Sun 
	
};

int main (){
	
	int i ;
	
	for(i=Mon ; i<=Sun ; i++){
		
		printf("%d  ",i);
		
	}
	
	return 0 ;
}
