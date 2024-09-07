#include <stdio.h>

int main()
{
		char c; // 1 byte
		int i; // 4 bytes
		float f; // 4 bytes
		double d; // 8 bytes


		char *p_c; // pointer 8 bytes (64bits) - store address(position/location) of a piece memory
		int *p_i; // pointer 8 bytes 
		
		p_c = &c; // & - get the address(position/location) of variable
				  
		c = 'a';
		// print formate %c char;  %p print address 
		printf("c=%c p_c=%p *p_c=%c \n", c, p_c, *p_c); // * - get the value from address

		return 0;
}
