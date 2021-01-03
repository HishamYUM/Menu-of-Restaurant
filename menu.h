#ifndef MENU_H_INCLUDED
#define MENU_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>

typedef struct Juices
{
    char name[50];
    double price;
} Juices;

typedef struct Others
{
    char name[50];
    double price;
} Others;

typedef struct Traditionals
{
    char name[50];
    double price;
} Traditionals;

typedef struct Coeffes
{
    char name[50];
    double price;
} Coeffes;

typedef struct Teas
{
    char name[50];
    double price;
} Teas;

typedef struct Desserts
{
    char name[50];
    double price;
} Desserts;

typedef struct Burgers
{
    char name[50];
    double price;
} Burgers;



Burgers b1 = {"Pie n Burger", 15.2};
Burgers b2 = {"In-N-Out Burger", 18.1};
Burgers b3 = {"The Spotted Pig ", 10.0};
Burgers b4 = {"Bison Burgers",12.0 };
Burgers b5 = {"Turkey Burgers",10.0 };
Burgers b6 = {"Beef Burgers", 20.0};
Burgers b7 = {"Black Bean Burgers", 10.17 };
Burgers b8 = {"Hamburger maison", 17.6};
Burgers b9 = {"Veggie Burgers", 19.33 };


Desserts d1 = {"Cornes de Gazelle", 5};
Desserts d2 = {"Coconut Cake", 4.2};
Desserts d3 = {"Crème Brûlée", 3.5};
Desserts d4 = {"Doughnuts", 3.7};
Desserts d5  = {"Gateau Biscuit Amandes Royal", 4.0};
Desserts d6  = {"Mhalabia", 6.0};
Desserts d7  = {"McFlurry & M&M's", 8.0};
Desserts d8  = {"Cap-cake au chocolat", 6.5};
Desserts d9  = {"Cap-cake au fraise", 2.5};
Desserts d10 = {"Crepes au chocolat", 2.5};
Desserts d11 = {"Crepes au chocolat+banane+sweeties", 6.0};
Desserts d12 = {"Tartelette au fruits", 9.8};


Coeffes c1 = {"Espresso", 3.2};
Coeffes c2 = {"Americano", 2.1};
Coeffes c3 = {"Cafe Latte", 4};
Coeffes c4 = {"Cafe Mocha", 3.2};
Coeffes c5  = {"cafe au lait", 3.2};
Coeffes c6  = {"cappuccino", 2.1};
Coeffes c7  = {"Mokaccino", 3.8};
Coeffes c8  = {"Iced coffee", 4.2};
Coeffes c9  = {"Macchiato ou cafe noisette", 2.0};
Coeffes c10 = {"Venice coffee", 3.9};
Coeffes c11 = {"Frensh press coffee", 2.5};
Coeffes c12 = {"Affogato", 2.4};

Teas t1 = {"Matcha", 2.5};
Teas t2 = {"Citrus", 2.10};
Teas t3 = {"Earl Grey", 3.1};
Teas t4 = {"Pai Mu Tan (white tea)", 5.5};
Teas t5 = {"Green tea", 3.12};
Teas t6 = {"Rooibos", 7.1};
Teas t7 = {"Turkish tea", 3.10};
Teas t8 = {"Mint tea", 5.50};


Traditionals td1 = {"Tagine", 15};
Traditionals td2 = {"Couscous", 20};
Traditionals td3 = {"Hrira", 8.3};
Traditionals td4 = {"Tangia", 15.5};
Traditionals td5 = {"pastilla", 17};
Traditionals td6 = {"Rfissa au poulet", 11.1};
Traditionals td7 = {"Poulet roti", 18.33};
Traditionals td8 = {"Meat & plums", 19.5};
Traditionals td9 = {"morrocain barbecUe", 10.1};


Juices jc1 = {"Banana", 2.1};
Juices jc2 = {"Apple", 2.3};
Juices jc3 = {"Avocado", 2.5};
Juices jc4 = {"Mango", 2.4};
Juices jc5  = {"Citrus", 3.1};
Juices jc6  = {"strawberry", 3.1};
Juices jc7  = {"cherry", 2.5};
Juices jc8  = {"Grappe ", 3.4};
Juices jc9  = {"Pomegranate", 4.1};
Juices jc10 = {"pears", 2.9};
Juices jc11 = {"nectarines", 3.5};
Juices jc12 = {"peach", 3.7};


Others o1 = {"Milk", 1.2};
Others o2 = {"Water", 1};
Others o3 = {"Beer", 4.1};
Others o4 = {"Wine", 6.2};
Others o5 = {"napkins", 3.5};



char *categories_[7] = {"Coeffe", "Tea", "Drinks", "Desserts", "Burgers", "Traditional Dishes"};
char *drinks_[2] = {"Juices", "Other"};


char *dessert[12] = {d1.name, d2.name, d3.name, d4.name, d5.name, d6.name, d7.name, d8.name, d9.name, d10.name, d11.name, d12.name};
char *tea[8] = {t1.name, t2.name, t3.name, t4.name, t5.name, t6.name, t7.name, t8.name};
char *coeffe[12] = {c1.name, c2.name, c3.name, c4.name, c5.name, c6.name, c7.name, c8.name, c9.name, c10.name, c11.name, c12.name};
char *traditional[9] = {td1.name, td2.name, td3.name, td4.name, td5.name, td6.name, td7.name, td8.name, td9.name};
char *juice[12] = {jc1.name, jc2.name, jc3.name, jc4.name, jc5.name, jc6.name, jc7.name, jc8.name, jc9.name, jc10.name, jc11.name, jc12.name};
char *other[5] = {o1.name, o2.name, o3.name, o4.name, o5.name};
char *burger[9] = {b1.name, b2.name, b3.name, b4.name, b5.name, b6.name, b7.name, b8.name, b9.name};

double dessertP[12] = {5, 4.2, 3.5, 3.7, 4.0, 6.0, 8.0, 6.5, 2.5, 2.5, 6.0, 9.8};
double teaP[12] = {2.5, 2.10, 3.1, 5.5, 3.12, 7.1, 3.10, 5.50};
double coeffeP[12] = {3.2, 2.1, 4, 3.2, 3.2, 2.1, 3.8, 4.2, 2.0, 3.9, 2.5, 2.4};
double traditionalP[9] = {15, 20, 8.3, 15.5, 17, 11.1, 18.33, 19.5, 10.1};
double juiceP[12] = {2.1, 2.3, 2.5, 2.4, 3.1, 3.1, 2.5, 3.4, 4.1, 2.9, 3.5, 3.7};
double otherP[5] = {1.2, 1, 4.1, 6.2, 3.5};
double burgerP[9] = {15.2, 18.1, 10.0, 12.0, 10.0, 20.0, 10.17, 17.6, 19.33};

#endif // MENU_H_INCLUDED








