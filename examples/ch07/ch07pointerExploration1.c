/*******************
 Understanding pointers

 Add comments to explain the code
**************/

#include <stdio.h>


int main()
{
	// Initalize houseNum
	int houseNum = 13;
	int calcHouseNum1 = 0;
	int calcHouseNum2 = 0;
	int* houseNumPtr = &houseNum; //pointer declaration

	printf("houseNum %d\n", houseNum); // print the value stored in houseNum (13)

	printf("&houseNum %p\n\n", &houseNum); // print the memory address of the variable houseNum

	printf("*houseNumPtr  %d\n", *houseNumPtr); // print the value stored at the memory address given by houseNumPtr

	printf("houseNumPtr %p\n\n", houseNumPtr); //print the memory address stored in houseNumPtr

	printf("&houseNumPtr %p\n\n", &houseNumPtr); // print the memory address of the pointer houseNumPtr, not the value stored in houseNumPtr

	calcHouseNum1 = *houseNumPtr + *houseNumPtr; // calcHouseNum1 is the value of the value stored by the memory address 
	// in the pointer houseNumPtr plus itself
	printf("*houseNumPtr + *houseNumPtr is %d\n\n", calcHouseNum1);

	calcHouseNum2 = 2 * (*houseNumPtr); //calcHouseNum2 is the value of the value stored by the memory address
	// in the pointer houseNumPtr multiplied by 2

	printf("2 * (*houseNumPtr) is %d\n\n", calcHouseNum2);

	printf("\n&*houseNumPtr = %p"
		"\n*&houseNumPtr = %p\n", &*houseNumPtr, *&houseNumPtr); // print the memory address of the integer, whose memory address
	// is stored in the pointer houseNumPtr
	return 0;
}
