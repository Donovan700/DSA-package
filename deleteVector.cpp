#include <iostream>
using namespace std;
void display(int[], int);
void deleteElem(int[], int, int);


int main()
{
    int size = -1;
    int* vec = nullptr;
    int pos;
    do
    {
        cout << "Enter the size of the vector: ";
        cin >> size;
    } while (size < 0);
    vec = new int[size];
    for(int i=0;i<size;i++)
    {
        cout << "Value " << i+1 << ": ";
        cin >> vec[i];
        cin.ignore();
    }
    cout << "Here are your vector" << endl;
    display(vec, size);
    do
    {
        cout << "\n Enter position of vector to delete value from the vector: ";
        cin >> pos;
    } while (pos<0 || pos >= size);
    cout << "Deleting...." << endl;
    deleteElem(vec, size, pos);
    cout << "Here is your new vector after deleting position " << pos << endl;
    display(vec, size-1);
    delete[] vec;
}

void display(int tab[], int n)
{
    for(int j=0;j<n;j++) cout << tab[j] << " ";
}

void deleteElem(int tab[], int n, int position)
{
    for(int i=position;i<n;i++)
    {
        tab[i] = tab[i+1];
    }
    tab[n]= 0;
}