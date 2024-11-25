#include <stdio.h>

int main() {
    // Write C code here
    
    int i,j,k;
    int blankspaces;
    int n;
    int currentValue = 1;

    printf("Insert 'n' (number of rows in pyramid): ");
    scanf("%d", &n);

    blankspaces = n-1;
    for(i=1; i<=n; i++)
    {
    
	for(k=blankspaces; k>=1; k--){
	    printf(" ");
	}
    

	for(j=1; j<=i; j++)
	{
	   printf("%d ", currentValue);
	   currentValue+=1;
	}

	printf("\n");
	blankspaces--;
    }
    return 0;
}

