#ifndef FUNCTIONS_H_INCLUDED
#define FUNCTIONS_H_INCLUDED// include guard pour eviter les problemes des include
#include <stdio.h>
#include <stdio.h>


void yourChoices(char **choices, int nbCommande);// afficher l'element choisi
void showCategories(char **categ);
void showSubCategories(char **sub_categ); // afficher les sous categories de la categorie Drinks (juices, others)
void showDesserts(char **d);
void showJuices(char **j);
void showCoeffes(char **c);
void showTeas(char **t);
void showTraditionalDishes(char **td);
void showBurgers(char **b);
void showOthers(char **o);
void addElements(char **choices, char **categ, int nbElement, int nbCommande);/*ajouter chaque element choisi par l'utilisateur
                                                                            dans l'array choices afin de le conserver pour les utiliser
                                                                            plus tard*/
void addPrices(double prices[], double categP[], int nbElement, int nbCommande);
void facture(char **choices, double prices[], int nbCommande);
void resizeChoices(char **choices, int nbCommande); /* changer la taille de tableau choices à chaque fois que le client
                                            fait une autre commande */

void resizePrices(double prices[], int nbCommande);
#endif // FUNCTIONS_H_INCLUDED
