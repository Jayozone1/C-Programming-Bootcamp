#include <stdio.h>
int main() {    

    int Hour ;
    int Minutes;
    int Seconds;
    int Second;
    

printf("Enter the number of seconds :", Seconds);
scanf("%d", &Seconds);

Hour = Seconds / 3600;
printf("The number of Hours is : %d\n", Hour);
Minutes = (Seconds - Hour * 3600) / 60;
printf("The number of Minutes is : %d\n", Minutes);
Second = ((int)Seconds - 3600) % 60;
printf("The number of seconds is: %d\n", Second);
printf("The time in HH:MM:SS format: %d:%d:%d ", Hour, Minutes, Second);


    
    return 0;
}
