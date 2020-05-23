#include<stdio.h> 
#include <stdlib.h>

int recursion(int N, int D, int acc, int i){
	acc += i * D; // Each element myltiply ny D.Example 1*6+2*6+3*6...18*6 = 1026
	return i < N ? recursion(N , D, acc, i+1) : acc; 
}

int sum_row(int N){
	int res = 0;
	while (N != 0){
		res += N;
		N--;
	}
	
	return res;


}


int main(int argc, char *argv[]) 
{ 
	int N, D;


	if (argc != 3) 
	{ 
		printf("enter 2 arguments only"); 
		return 0; 
	} 
 

	
	N = atoi(argv[1]); 
	D = atoi(argv[2]); 
	if (N < 0 || D < 0) 
	{ 
		printf("enter only positive values"); 
		return 1; 
	} 
	//printf("%d", recursion(N, D, 0, 0));//Call recursive function, 
	//use too much resources
	
	printf("%d", D*sum_row(N));
	return 0; 
	}

