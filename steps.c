#include<stdio.h> 
#include <stdlib.h>
#include <math.h>


int steps(float N, float K){
	/*I used K + 1 because it is said "He knows he could "step over"" 
	  which means in our example "step over 3" => 4(each 4th is the one)
	Next, I used ceil() because I decided that Giant makes his final step
	on the final floor of the Tower and + 1 at the end because i count first position. 
	But Task is not fully understandable as long as it is not said is he on 0 floor at 
	the begining or he is on 1st stair. (Example with 10 stairs and 3 is step)
	First step is on 4th stair, second on 8th and  third may be considered as final floor
	 of the Tower but 4th step? Or 0 floor count as position is 1, so there are 4 steps. 
	Task is not that clear.
	*/
	return ceil((N - 1) / (K + 1) + 1);//without ceil() test case with 986 16 works as in example 
	//I used -lm flag while compile for apropriate ceil() compilation

	}

int main(int argc, char *argv[]) 
{ 
	int N, K;


	if (argc != 3) 
	{ 
		printf("enter 2 arguments only"); 
		return 0; 
	} 


	
	N = atoi(argv[1]); 
	K = atoi(argv[2]); 
	if (N < 0 || K < 0) 
	{ 
		printf("enter only positive values"); 
		return 1; 
	} 
	printf("%d\n",steps(N, K));
	return 0; 
	}

