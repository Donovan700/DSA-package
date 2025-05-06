#include <iostream>
using namespace std;

struct cellule
{
    int info;
    struct cellule* suivant;
};
typedef struct cellule* pointeur;
pointeur createFromBack(int[], int);
void dispVec(int[], int);
void dispLinkedList(pointeur);


int main()
{
    int size = -1;
    int* tab;
    pointeur l;
    do
    {
        cout << "Enter the size of the linked list: ";
        cin >> size;
    } while (size < 0);
    tab = new int[size];
    cout << "Enter the values on the vector!!!" << endl;
    for(int i=0;i<size;i++)
    {
        cout << "Position " << i+1 << ": ";
        cin >> tab[i];
        cin.ignore();
    }
    cout << "Here are your values in your vector: " << endl;
    dispVec(tab,size);
    cout << "\nMapping datas to the linked list.........." << endl;
    l = createFromBack(tab,size);
    dispLinkedList(l);
    cout << "\nEnd of program...";
    delete[] tab;
}

pointeur createFromBack(int v[], int n)
{
    pointeur l;
    l=nullptr;
    for(int i=0;i<n;i++)
    {
        pointeur p;
        p->info = v[i];
        p->suivant = l;
        l=p;
    }
    return l;
}

void dispLinkedList(pointeur l)
{
    while(l->suivant != nullptr)
    {
        cout << l->info << " ";
        l = l->suivant;
    }
}

void dispVec(int v[], int n)
{
    for(int i=0;i<n;i++) cout << v[i] << " ";
}
