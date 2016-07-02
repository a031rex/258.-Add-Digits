#include "stdio.h"
#include "stdlib.h"

/*
Given a non-negative integer num, repeatedly add all its digits until the result has only one digit.

For example:

Given num = 38, the process is like: 3 + 8 = 11, 1 + 1 = 2. Since 2 has only one digit, return it.
*/

/*
Follow up:
Could you do it without any loop/recursion in O(1) runtime?

Hint:

1. A naive implementation of the above process is trivial. Could you come up with other methods?
2. What are all the possible results?
3. How do they occur, periodically or randomly?
4. You may find this Wikipedia article useful.
*/


int addDigits(int num) {
	if(num == 0)
		return 0;
	else
		return ((num % 9)==0?9:(num % 9));
}

void main()
{
	int i =0;
	for(i=0;i<1200;i++)
		printf("%d, %d \n",i, addDigits(i));
}


