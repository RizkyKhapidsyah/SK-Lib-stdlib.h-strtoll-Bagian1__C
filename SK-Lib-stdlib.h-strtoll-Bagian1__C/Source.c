#include <stdio.h>      
#include <stdlib.h>     
#include <conio.h>

/*
	Source by CPlusPlus (https://www.cplusplus.com)
	Modified For Learn by RK
	I.D.E : VS2022
*/

int main() {
	char szNumbers[] = "1856892505 17b00a12b -01100011010110000010001101100 0x6fffff";
	char* pEnd;
	long long int lli1, lli2, lli3, lli4;
	lli1 = strtoll(szNumbers, &pEnd, 10);
	lli2 = strtoll(pEnd, &pEnd, 16);
	lli3 = strtoll(pEnd, &pEnd, 2);
	lli4 = strtoll(pEnd, NULL, 0);
	printf("The decimal equivalents are: %lld, %lld, %lld and %lld.\n", lli1, lli2, lli3, lli4);

	_getch();
	return 0;
}