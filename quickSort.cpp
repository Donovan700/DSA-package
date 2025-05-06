#include <iostream>
using namespace std;
void quickSort(int*&, int, int);
void sort(int*&, int, int, int&);
void showVec(int[], int);

int main()
{
    int* vec;
    int size = -1;
    do
    {
        cout << "Enter the size of your vector: ";
        cin >> size;
    } while (size < 0);
    vec = new int[size];
    cout << "Please insert value into your vector!" << endl;
    for(int i = 0;i<size;i++)
    {
        cout << "Position " << i+1 << ": ";
        cin >> vec[i];
        cin.ignore();
    }
    cout << "Your vector is : " << endl;
    showVec(vec, size);
    quickSort(vec, 0, size);
    cout << "\n ++++++ Here is your sorted vector with quick sort ++++++" << endl;
    showVec(vec, size);
    delete[] vec;
}

void sort(int*& t, int low, int high, int& place)
{
    int i,j,pivot;
    pivot = t[low];
    i=low+1; j= high;
    while(i<=j)
    {
        if(t[i]<=pivot) i++;
        else
        {
            swap(t[i],t[j]);
            j--;
        }
    }
    swap(t[low], t[j]);
    place = j;
}

void quickSort(int*& t, int low, int high)
{
    int place;
    if(low < high)
    {
        sort(t, low, high, place);
        quickSort(t, low, place);
        quickSort(t, place+1, high);
    }
}

void showVec(int t[], int n)
{
    for(int i=0;i<n;i++) cout << t[i] << " ";
}