#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "menu.h"
#include "functions.h"

int main(){
	char order, confirm;
	int nbCategorie, nbSubCateg;
	printf("================ Welcome! ================\n");
	printf("================ S to Show Menu 		Q to Quit ================\n");
    scanf("%c", &order);
	if (order == 'Q'){
		printf("Are you sure you want to quit?\nY.yes 		N.No\n");
		scanf("%c", &confirm);
		if (confirm == 'Y'){
			printf("Thanks for visit us! Have a good day!\n");
			exit(0);
		}
		else {
			system("clear");
			//goto menu;
		}
	}
	//menu:
	else if (order == 'S'){
		printf("================== Select your choices ==================\n");
		showCategories(categories_);
		printf("Enter nomber of categorie\n");
		scanf("%d", &nbCategorie);
		switch(nbCategorie){
			case 1:
				showCoeffes(coeffe);
				break;
			case 2:
				showTeas(tea);
				break;
			case 3:
				showSubCategories(drinks_);
				printf("Juices or something else?\n");
				printf("1.Juices 		2.Others\n");
				scanf("%d", &nbSubCateg);
				switch(nbSubCateg){
					case 1:
						showJuices(juice);
						break;
					case 2:
						showOthers(other);
						break;
				}
				break;
			case 4:
				showDesserts(dessert);
				break;
			case 5:
				showBurgers(burger);
				break;
			case 6:
				showTraditionalDishes(traditional);
				break;
		}
		printf("======================= You asked for: ================\n");
		printf("======================= OK! ===========================\n");
		printf("========================= Back! =======================\n");
		printf("========================= Cancel ======================\n");

    }
	else printf("Enter a valid option!\n");


	return 0;
}
