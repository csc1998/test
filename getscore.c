// this file constains the definition of function input_score()
#include "score.h"
#include <stdio.h>

void input_scores(int s[]){
	int i, input=0;

	printf("Enter Scroes, -1 to ende:\n");
	for(i=0; i<MAX && input!=-1; i++){
		printf("%d", i+1);
		scanf("%d", &input);
		s[i]=input;
	}
	printf("%d scores are given.\n", i-1);
}
