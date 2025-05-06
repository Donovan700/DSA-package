#include <iostream>
using namespace std;
void interclass(int[] , int, int[], int, int[], int&);
void sortInter(int*&, int, int);
void disp(int[], int);

int main()
{
    int size = -1;
    int* vec;
    do
    {
        cout << "Enter the size of your vector: ";
        cin >> size;
    } while (size < 0);
    vec = new int[size];
    cout << "Insert value to the vector !!!" << endl;
    for(int i=0;i<size;i++)
    {
        cout << "Position " << i+1 << ": ";
        cin >> vec[i];
        cin.ignore();
    }
    cout << "Here is your vector: " << endl;
    disp(vec, size);
    sortInter(vec, 0, size);
    cout << "\n ++++ Here is your vector after interclassement sorting ++++" << endl;
    disp(vec, size);
    delete[] vec;
}

void interclass(int t1[], int mid, int t2[], int high, int t3[], int &nb)
{
    int i,j,k;
    i=1;k=1;j=mid+1;
    while(i<mid && j<high)
    {
        if(t1[i] < t2[j])
        {
            t3[k]=t1[i];
            i++;
        }
        else
        {
            t3[k]=t2[j];
            j++;
        }
        k++;
    }
    while(i<mid)
    {
        t3[k] = t1[i];
        i++;
        k++;
    }
    while(j<high)
    {
        t3[k] = t2[j];
        j++;
        k++;
    }
    nb=k;
}

void sortInter(int*& t, int low, int high)
{
    int mid;
    int* t1;
    int* t2;
    int* t3;
    int nb;
    if(low < high)
    {
        mid = (low+high)/2;
        t1 = new int[mid];
        t2 = new int[(high-mid)];
        t3 = new int[mid+(high-mid)];
        sortInter(t1,low, mid);
        sortInter(t2, mid+1, high);
        interclass(t1, mid, t2, high, t3, nb);
    }
    delete[] t1;
    delete[] t2;
    delete[] t3;
}

void disp(int t[], int n)
{
    for(int i=0;i<n;i++) cout << t[i] << " ";
}