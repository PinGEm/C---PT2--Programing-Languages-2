#include "helper.h" // include the helper header file so we can start implementing code into it.
#include <iostream> // include iostream to include all the input and output streams

	// This class is used to implement all the functions defined within "helper.h".

	std::string showName(std::string name) //  implement the function in the "helper.h" file.
	{ // start of the function
		return "Hello " + name; // we will return with a string value of ("Hello" + name). for example if the name passed was "Marcus", we would return with a string value of ("Hello Marcus"). 
	 // end of the function
	
	int addition_BITWISE(int addened_one, int addend_two) //  implement the function in the "helper.h" file.
	{ // start of the function
		while(addend_two != 0){ // WHILE ADDEND_TWO is not equal to zero, we will keep doing the encased lines of code until it is.
			int temp = addened_one; // we will create a temporary integer and then we'll assign it with the value of addend_one.
			addened_one = addened_one ^ addend_two; // we will look for the differences in bits between addend_one & addend_two. please check the binary process for further details.
			addend_two = (temp & addend_two) << 1; // we will look for the similiarities in bits in terms if they both have 1, afterwards we will shift the bits to the left by 1. please check the binary process for further details.
		} // END OF THE WHILE LOOP, IF BY THE END ADDEND_TWO IS NOT EQUAL TO 0, KEEP REPEATING.
		
		return addened_one; // by the end of the while loop, we will then return the addened_one, which is the sum of the two values.
		
	 /* ====BINARY PROCESS====
		5 - 0101
		8 - 1000
		13 - 1101
		----
		CREATE A TEMPORARY VALUE TO BE STORED FIRST:
		** temp = 5 (0101)
		CHECK FOR DIFFERENCES IN BITS: IF THERE IS SET TO 1, IF SAME SET TO 0.
		** addened_one = 5 ^ 8
		* 5^8:
		* 0101
		* 1000
		addened_one = 13 (1101)
		CHECK FOR SIMILARITY IN BITS IN TERMS OF 1: IF THERE IS SET TO 1, IF NOT SET TO 0. THEN SHIFT THE BITS BY 1.
		** addened_two = (0101 & 1000) << 1 
		* (0101 & 1000)
		* 0000 --- There are no bits with '1' at the same bit location.
		* 0000 << 1 -> 00000
		
		
		====ANOTHER EXAMPLE====
		** 20 ^ 5
		* 10100
		* 00101
		* 10001 = 17

		** (00101 & 10100)
		* 00101
		* 10100
		* 00100 << 1 
		* 01000 = 8 !!!


		ADDENED_ONE = 17 (10001)
		ADDENED_TWO = 8 (01000)
		======
		** 17 ^ 8
		* 10001
		* 01000
		* 11001 = 25 !
		
		** (01000 & 10001)
		* 01000
		* 10001
		* 00000 -> no bits are the same number "1" at the same location.
		* 00000 << 1
		* 00000

		final output = 25 */
	} // end of the function