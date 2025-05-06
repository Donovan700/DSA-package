#include <iostream>
using namespace std;

struct cellule
{
    int info;
    struct cellule* suivant;
};
typedef struct cellule* pointeur;
void createOrderList(pointeur&);
void displayList(pointeur);


int main()
{
    pointeur l;
    createOrderList(l);
    displayList(l);
}

void displayList(pointeur l)
{
    if(l != nullptr)
    {
        displayList(l->suivant);
        cout << l->info;
    }
}

void createOrderList(pointeur& l)
{
    l=nullptr;
    for(int i=1;i<=10;i++)
    {
        pointeur p;
        p->info = i;
        p->suivant = l;
        l = p;
    }
}