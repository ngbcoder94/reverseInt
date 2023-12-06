/*
 * This is a program I am creating that will read in
 * a string and return it in reverse order. 
 *
 * Problem is for a Leet Code submission - Reverse String
*/
#include <iostream>
#include <string>

using namespace std; 

class ReverseString {
    public: 
        int32_t reverseInt(int32_t  num){

            int itr = 1;            //Need to create a counter variable. 
            int32_t finalVal = 0;   //Variable for final integer.

            //While loop to iterate over the given number int by int
            while(num){
                printf("%d", (num %10));    		//Print out the current digit
				finalVal = finalVal * 10 + (num%10);		//Create the new number
                num /= 10;  						//Adjust num accordingly
				itr ++; 							//Increment itr by 1
            }
			printf("%d\n", finalVal);
            return 0;                       //Will eventually return the final num
        }
};
int main(){

    ReverseString obj;

    obj.reverseInt(1234);
    return 0; 
}
