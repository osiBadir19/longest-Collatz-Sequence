#include <stdio.h>

// @brief do the even formula for colltaz
long EvenCollatz(long n){
    return n/2;
}
// @brief do the Odd formula for Collatz
long OddCollatz(long n){
    return (3 * n) + 1;
}


int main() {
    // identify variables
    int count = 0, flag = 1, max = 0;
    long number, number2;

    // loop to iterate through numbers from 1 to million
    for (int i = 2; i < 1000000; i++){
        number = i;
        while (flag != 0){
            if (number == 1){    
                count++;
                // if count > max, then we have a new max                                    
                if (count > max){
                    max = count;
                    number2 = i;
                }

                // kill operation
                flag = 0;
            }

            else{
                if (number%2==0)                                
                    number = EvenCollatz(number);
                else    
                    number = OddCollatz(number);
                count++;
            }
        }

        // reset parameters
        flag = 1;
        count = 0;
    }

    printf("the number with longest chain is: %ld\n", number2);

    return 0;       // end code

}
