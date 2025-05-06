#include <iostream>
using namespace std;

void triInsert(int *&, int &, int &);  
void insert(int [], int, int, int);
void displayVec(int [], int);
int findPosition(int [], int, int);
void resizeArray(int *&, int &, int);

int main()
{
    int tabSize = -1;
    int value;
    int *tab = nullptr;
    char decision = 'y';
    do
    {
        cout << "Enter the size of your vector: ";
        cin >> tabSize;
    } while (tabSize <= 0);
    tab = new int[tabSize];
    int currentSize = 0;
    for (int i = 0; i < tabSize; i++) {
        cout << "Position " << i + 1 << ": ";
        cin >> value;
        triInsert(tab, currentSize, value);
    }
    cout << "++++++++ Here is your sorted vector:" << endl;
    displayVec(tab, currentSize);
    do
    {
        cout << "\nContinue to insert? (y or n): ";
        cin >> decision;
        if (decision == 'y')
        {
            cout << "Enter your value: ";
            cin >> value;
            triInsert(tab, currentSize, value);
        }

        cout << "++++++ The new vector ++++++" << endl;
        displayVec(tab, currentSize);

    } while (decision == 'y');
    delete[] tab;
}

void insert(int vec[], int n, int value, int position)
{
    for (int i = n; i > position; i--)
    {
        vec[i] = vec[i - 1];
    }
    vec[position] = value;
}

int findPosition(int vec[], int n, int value)
{
    for (int i = 0; i < n; i++) {
        if (vec[i] > value) {
            return i;
        }
    }
    return n;
}

void triInsert(int *&tab, int &n, int &value)
{
    resizeArray(tab, n, n + 1);
    int position = findPosition(tab, n, value);
    insert(tab, n, value, position);
    n++;
}

void resizeArray(int *&tab, int &currentSize, int newSize)
{
    int *newTab = new int[newSize];
    for (int i = 0; i < currentSize; i++)  
    {
        newTab[i] = tab[i];
    }
    delete[] tab;
    tab = newTab;
}

void displayVec(int vec[], int n)
{
    for (int i = 0; i < n; i++) 
        cout << vec[i] << " ";
    cout << endl;
}
