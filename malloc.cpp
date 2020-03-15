#include <stdio.h>
#include <stdlib.h>

//What are we doing here? Please explain as a comment. 
void ec327_lab6() {

	int *stay_safe = new int(20);
	return;
}

//What is wrong here?
int main(){
  	int counter;
  	int *ptr;

	// malloc? 
  	for (counter=0; counter < 13; counter++){
  		ptr = (int *)malloc(sizeof(int) * 47);
  	}
	ec327_lab6();	
  	free(ptr);
  	return 0;
}
