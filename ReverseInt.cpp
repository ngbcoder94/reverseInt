/*
 * This is a program I am creating that will read in
 * a string and return it in reverse order. 
 *
 * Problem is for a Leet Code submission - Reverse String
*/
#include <iostream>
#include <stdio.h>
#include <math.h>
#include <string>

using namespace std; 
  
class ReverseInt {
    public: 
        int32_t reverseInt(int32_t  num){
           
            int64_t finalVal = 0;   //Variable for final integer.

            //While loop to iterate over the given number int by int
            while(num){
				int32_t tmp = num % 10;		//Get each individual digit
				finalVal = finalVal * 10 + (num%10);	//Create the new number digit by digit
                num /= 10;  							//Adjust num accordingly
            }

			if(finalVal < -pow(2, 31) || finalVal > (pow(2, 31) - 1)){
				return 0;
			}
			else{
				//printf("%d\n", finalVal);
				return finalVal;
			}
        }
};

/*
 * Creating this main for testing
 * Need to create an object and run some tests w reverseInt()
 */
int main(){

    ReverseInt obj;			//Creating an instance of Reverse

    obj.reverseInt(1234);	//Calling the func with the number 1234
    return 0; 				//Needed for cpp
}
