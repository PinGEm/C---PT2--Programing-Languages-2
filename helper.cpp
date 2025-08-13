#include "helper.h"
#include <iostream>

	std::string showName(std::string name)
	{
		// CODE
		return "Hello " + name;
	}
	
	int addition_BITWISE(int addened_one, int addend_two)
	{		
		while(addend_two != 0){
			int temp = addened_one;
			addened_one = addened_one ^ addend_two;
			addend_two = (temp & addend_two) << 1;
		}
		
		return addened_one;
		
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
		* 11001 = 25

		** (00101 & 10100)
		* 00101
		* 10100
		* 00100 << 1 
		* 01000 = 8 !!!


		ADDENED_ONE = 25 (11001)
		ADDENED_TWO = 4 (00100)
		======
		25 : 11001
		4 : 01000

		temp = 25 (11001)

		25 ^ 4
		11001
		01000
		11001 = 25

		(00100 & 11001)
		00100
		11001
		00000 << 1
		0

		final output = 25 */
	}