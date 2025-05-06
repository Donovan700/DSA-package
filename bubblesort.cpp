#include <iostream>
using namespace std;
void bubbleSort(int[], int);
void displayVector(int[], int);
void permut(int&, int&);

int main()
{
    int *vec, size;
    vec = (int*)malloc(sizeof(int));
    do
    {
        cout << "Please enter the size of your vector (size > 0): ";
        cin >> size;
    } while (size <= 0);
    cout << "Enter value for each case of the vector: " << endl;
    for(int i=0;i<size;i++)
    {
        cout << "[" << i+1 << "]: ";
        cin >> vec[i];
        cin.ignore();
    }
    cout << "The actual vector: " << endl;
    displayVector(vec, size);
    cout << "sorting....." << endl;
    bubbleSort(vec, size);
    cout << "After sorting with bubble sort: " << endl;
    displayVector(vec, size);
    free(vec);
}

void bubbleSort(int vec[], int size)
{
    for(int i=0;i<size;i++)
    {
        for(int j=size;j>i;j--)
        {
            if(vec[j-1] > vec[j]) permut(vec[j-1], vec[j]);
        }
    }
}

void displayVector(int vec[], int size)
{
    for(int i=0;i<size;i++)
    {
        cout << vec[i] << " ";
    }
}

void permut(int& x, int& y)
{
    int tmp = x;
    x=y;
    y=tmp;
}