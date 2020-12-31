#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "functions.h"


void showCategories(char **categ){

	for (int k = 1, i=0; i<6; ++i, ++k){
		printf("%d.%s\t\t", i+1, categ[i]);
		if (k%3==0) printf("\n\n\n");
	}
}

void showSubCategories(char **sub_categ){
    for (int l = 1, k=0; k<2; ++l, k++){
        printf("%d.%s\t\t", k+1, sub_categ[k]);
        if (l%3==0) printf("\n\n\n");
    }
}

void showDesserts(char **d){
	for(int k = 1, j=0; j<4; ++j, ++k){
		printf("%d.%s\t\t", j+1, d[j]);
		if (k%3==0) printf("\n\n\n");
	}

}
void showJuices(char **j){
	for(int k = 1, i=0; i<4; ++i, ++k){
		printf("%d.%s\t\t", i+1, j[i]);
		if (k%3==0) printf("\n\n\n");
	}

}
void showCoeffes(char **c){
	for(int k = 1,  j=0; j<4; ++j, ++k){
        printf("%d.%s\t\t", j+1, c[j]);
		if (k%3==0) printf("\n\n\n");
	}

}
void showTeas(char **t){
	for(int k = 1, j=0; j<3; ++j, ++k){
		printf("%d.%s\t\t", j+1, t[j]);
		if (k%3==0) printf("\n\n\n");
	}

}
void showTraditionalDishes(char **td){
	for(int k = 1, j=0; j<3; ++j, ++k){
		printf("%d.%s\t", j+1, td[j]);
		if (k%3==0) printf("\n\n\n");
	}

}
void showBurgers(char **bu){
	for(int k = 1, j=0; j<3; ++j, ++k){
		printf("%d.%s\t\t", j+1, bu[j]);
		if (k%3==0) printf("\n\n\n");
	}

}
void showOthers(char **o){
	for(int k = 1, j=0; j<4; ++j, ++k){
		printf("%d.%s\t\t", j+1, o[j]);
		if (j%3==0) printf("\n\n\n");
	}

}










