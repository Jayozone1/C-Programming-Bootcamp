#include <stdio.h>

void printRectangle(int rows, int columns){
   for (int i = 0; i < rows; i++) {
       for (int j = 0; j < columns; j++) {
        printf("*");
   }
	    
	printf("\n");
   }
}
int main() {
    // Write C code here
    printRectangle(5, 10);

    return 0;
}