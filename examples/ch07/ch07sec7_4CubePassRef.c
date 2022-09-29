// Passing Primitive Data Types and pointers
//Add comments to explain the code

#include <stdio.h>	
#include <stdlib.h>

//function prototypes
int cubePass1(int number);
int cubePass2(int* numberPtr);

int main(void) {

	int numberMain = 5;
	int result = 0;

	printf("In main before cubePass1  numberMain = %d\n", numberMain);
	printf("&numberMain = %p\n", &numberMain);
	result = cubePass1(numberMain);
	printf("In main after cubePass1  numberMain = %d\n", numberMain);
	printf("Result = %d\n", result);
	printf("\nIn main before cubePass2  numberMain = %d\n", numberMain);
	result = cubePass2(&numberMain);
	printf("\nIn main after cubePass2  numberMain = %d\n", numberMain);
	printf("result = %d\n", result);

} // main


int cubePass1(int number) // passes number by value
{
	int cube = 0;
	puts("\nIn cubePass1");
	printf("number = %d\n", number);
	printf("&number = %p\n", &number);
	cube = number * number * number;
	printf("cube  = %d\n", cube);
	number = cube; //value is deleted when the function ends anyways
	printf("number = %d\n", number);
	return cube; //returns 125
}

int cubePass2(int* numberPtr) // passes numberPtr address, pass my reference
{
	int cube = 0;
	puts("\nIn cubePass2");
	printf("numberPtr = %p\n", numberPtr);
	printf("*numberPtr = %d\n", *numberPtr);
	printf("&numberPtr = %p\n", &numberPtr);
	cube = (*numberPtr) * (*numberPtr) * (*numberPtr);
	*numberPtr = cube; // changes the value of the int value stored in memory address stored in numberPtr
	printf("*numberPtr = %d\n", *numberPtr);
	return cube; //returns 125
}


