#ifndef MENU_H_INCLUDED
#define MENU_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>

typedef struct Juices {
	char name[50];
	double price;
	}Juices;

typedef struct Others{
	char name[50];
	double price;
	}Others;

typedef struct Traditionals{
	char name[50];
	double price;
	}Traditionals;

typedef struct Coeffes{
	char name[50];
	double price;
	}Coeffes;

typedef struct Teas{
	char name[50];
	double price;
	}Teas;

typedef struct Desserts{
	char name[50];
	double price;
	}Desserts;

typedef struct Burgers{
	char name[50];
	double price;
	}Burgers;



Burgers b1 = {"Pie n Burger", 15.2};
Burgers b2 = {"In-N-Out Burger", 18.1};
Burgers b3 = {"The Spotted Pig ", 10.0};

Desserts d1 = {"Cornes de Gazelle", 5};
Desserts d2 = {"Coconut Cake", 4.2};
Desserts d3 = {"Crème Brûlée", 3.5};
Desserts d4 = {"Doughnuts", 3.7};

Coeffes c1 = {"Espresso", 3.2};
Coeffes c2 = {"Americano", 2.1};
Coeffes c3 = {"Cafe Latte", 4};
Coeffes c4 = {"Cafe Mocha", 3.2};

Teas t1 = {"Matcha", 2.5};
Teas t2 = {"Citrus", 2.10};
Teas t3 = {"Earl Grey", 3.1};

Traditionals td1 = {"Tagine", 15};
Traditionals td2 = {"Couscous", 20};
Traditionals td3 = {"Hrira", 8};



Juices jc1 = {"Banana", 2.1};
Juices jc2 = {"Apple", 2.3};
Juices jc3 = {"Avocado", 2.5};
Juices jc4 = {"Mango", 2.4};

Others o1 = {"Milk", 1.2};
Others o2 = {"Water", 1};
Others o3 = {"Beer", 4.1};
Others o4 = {"Wine", 6.2};

char *categories_[7] = {"Coeffe", "Tea", "Drinks", "Burgers", "Desserts", "Traditional Dishes"};
char *drinks_[2] = {"Juices", "Other"};

char *dessert[4] = {d1.name, d2.name, d3.name, d4.name};
char *tea[3] = {t1.name, t2.name, t3.name};
char *coeffe[4] = {c1.name, c2.name, c3.name, c4.name};
char *traditional[3] = {td1.name, td2.name, td3.name};
char *juice[4] = {jc1.name, jc2.name, jc3.name, jc4.name};
char *other[4] = {o1.name, o2.name, o3.name, o4.name};
char *burger[3] = {b1.name, b2.name, b3.name};

#endif // MENU_H_INCLUDED
