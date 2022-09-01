
// Fig. 2.1: fig02_01.c
// A first program in C 
#include <stdio.h>
#include <string.h>

int areaCalc(int length, int width);
int lwDiv(int length, int width);

// function main begins program execution 
int main(void)
{
	printf("%s", "Welcome to C!\n");
	unsigned int length = 0;
	unsigned int width = 0;
	unsigned int area = 0;
	unsigned int div = 0;
	puts("Enter the length");
	scanf("%d", &length);
	puts("Enter the width");
	scanf("%d", &width);
	area = areaCalc(length, width);
	printf("%s", "Area is: ");
	printf("%d", area);
	div = lwDiv(length, width);
	printf("%s", "\nLength divided by width is: ");
	printf("%d", div);
	return 0;
} //end function main

int areaCalc(int length, int width) {
	return length * width;
}


int lwDiv(int length, int width) {
	return length / width;
}

/**************************************************************************
 * (C) Copyright 1992-2015 by Deitel & Associates, Inc. and               *
 * Pearson Education, Inc. All Rights Reserved.                           *
 *                                                                        *
 * DISCLAIMER: The authors and publisher of this book have used their     *
 * best efforts in preparing the book. These efforts include the          *
 * development, research, and testing of the theories and programs        *
 * to determine their effectiveness. The authors and publisher make       *
 * no warranty of any kind, expressed or implied, with regard to these    *
 * programs or to the documentation contained in these books. The authors *
 * and publisher shall not be liable in any event for incidental or       *
 * consequential damages in connection with, or arising out of, the       *
 * furnishing, performance, or use of these programs.                     *
 *************************************************************************/
