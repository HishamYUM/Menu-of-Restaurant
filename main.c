#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "menu.h"
#include "functions.h"

int main()
{

    char order, confirm, OK, confirm2, command;
    int nbCommande=1, nbCategorie, nbSubCateg, nbElement;
    char **choices = malloc(1* sizeof(*choices));
    double *prices = malloc(1*sizeof(double));
start:
    printf("\t================ Welcome to TEAM C Restaurant! ================\n");
    printf("================ S to Show Menu 		Q to Quit ================\n");//presente deux options afficher le menu ou quitter
    scanf(" %c", &order);
    /* si le client a choisi de quitter on lui demande de confirmer son choix
    si oui il veut quitter, sinon la console est vidée et le program saute au menu*/
    if (order == 'Q')
    {
        printf("Are you sure you want to quit?\nY.yes 		N.No\n");
        scanf(" %c", &confirm); // " %c" to avoid buffer broblems
        if (confirm == 'Y')
        {
            printf("Thanks for visit us! Have a good day!\n");
            exit(0);
        }
        else
        {
            system("clear");// "clear" sous Linux et "cls" sous Windows
            goto menu; // the program jumb to label menu
        }
    }

    else if (order == 'S')  //si le client a choisi de voir le menu
    {
menu: //label
        printf("================== Select your choices ==================\n");
        showCategories(categories_);
        printf("Enter nomber of categorie\n");
        scanf("%d", &nbCategorie);
        switch(nbCategorie)
        {
        case 1:
            showCoeffes(coeffe);
            scanf("%d", &nbElement);
            addElements(choices, coeffe, nbElement, nbCommande);
            addPrices(prices,coeffeP, nbElement, nbCommande);
            break;
        case 2:
            showTeas(tea);
            scanf("%d", &nbElement);
            addElements(choices, tea, nbElement, nbCommande);
            addPrices(prices,teaP, nbElement, nbCommande);
            break;
        case 3:
menu2:
            showSubCategories(drinks_);

            scanf(" %d", &nbSubCateg);
            switch(nbSubCateg)
            {
            case 1:
                showJuices(juice);
                scanf("%d", &nbElement);
                addElements(choices, juice, nbElement, nbCommande);
                addPrices(prices,juiceP, nbElement, nbCommande);
                break;
            case 2:
                showOthers(other);
                scanf("%d", &nbElement);
                addElements(choices, other, nbElement, nbCommande);
                addPrices(prices,otherP, nbElement, nbCommande);
                break;
            default:
                printf("Enter a valid option\n"); //si le client a saisi un nombre qui n'est pas dans le menu principal retourner ce message
                goto menu2;
            }
            break;
        case 4:
            showDesserts(dessert);
            scanf("%d", &nbElement);
            addElements(choices, other, nbElement, nbCommande);
            addPrices(prices,dessertP, nbElement, nbCommande);
            break;
        case 5:
            showBurgers(burger);
            scanf("%d", &nbElement);
            addElements(choices, burger, nbElement, nbCommande);
            addPrices(prices,burgerP, nbElement, nbCommande);
            break;
        case 6:
            showTraditionalDishes(traditional);
            scanf("%d", &nbElement);
            addElements(choices, traditional, nbElement, nbCommande);
            addPrices(prices,traditionalP, nbElement, nbCommande);
            break;
        default:
            printf("Enter a valid option\n"); //si le client a saisi un nombre qui n'est pas dans le menu principal retourner ce message
            goto menu;
        }
ok:
        printf("======================= You asked for:\n");
        yourChoices(choices);
        printf("======================= Is this OK! ===========================\n");
        printf("O.OK\t\tB.Back\t\tC.Cancel\n");
        scanf(" %c", &OK);

        switch(OK)
        {
        case 'O':
            printf("========================= Enjoy! =======================\n");
            break;
        case 'B':
            system("clear");
            goto ok;
            break;
        case 'C':
            printf("Are you sure you want to Cancel this command?\nY.yes 		N.No\n");
            scanf(" %c", &confirm2); // " %c" to avoid buffer broblems
            if (confirm2 == 'Y')
            {
                printf("Thanks for visit us! Have a good day!\n");
                exit(0);
            }
            else
            {
                system("clear");
                goto ok;
            }
            break;
        }
    }
    /*si le client a saisi un nombre qui n'est pas dans le menu principal retourner un message d'erreur
    et le programme recommence au niveau de start label*/
    else
    {
        system("clear");
        printf("Enter a valid option!\n");
        goto start;
    }
finish:
    printf("1.Make an other command\t\t 2.Finish\n");
    scanf("%d", &command);
    if (command == 2) facture(choices, prices, nbCommande);// Si le client a choisi Finish le programme affiche la facture
    else if (command == 1)
    {
        nbCommande += 1;
        resizeChoices(choices, nbCommande);
        resizePrices(prices, nbCommande);
        system("clear");
        goto start;

    }
    else
    {
        printf("Enter a valid option!\n");
        goto finish;
    }
    return 0;
}
