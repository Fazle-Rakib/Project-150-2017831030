#include <bits/stdc++.h>
using namespace std;
int *numberArray;
int *harr;
int capacity;
int negative = -1;
int parent(int i)
{
	return (i-1)/2;
}
int left(int i)
{
	return (2*i+1);
}
int right(int i)
{
	return (2*i+2);
}

void Swap(int* x, int* y)
{
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}
void MinHeapify(int i, int n)
{
	int l = left(i);
	int r= right(i);
	int smallest = i;
	if(l < n && harr[l] < harr[i])
	{
		smallest = l;
	}
	if(r < n && harr[r] < harr[smallest])
	{
		smallest = r;
	}
	if(smallest != i)
	{
		Swap(&harr[i],&harr[smallest]);
		MinHeapify(smallest,n);
    }
}
void heap(int harr[],int n)
{
	for(int i = n/2-1; i >= 0; i--)
	{
		MinHeapify(i,n);
	}
}

void Delete(int item, int n)
{
    int  i = 0,f = 0;
    while(i < n)
    {
        if(harr[i] == item)
        {
            f = 1;
            harr[i] = negative;
            break;
        }
        i++;
    }
    if(f == 0)
    {
        cout << "Couldn't find " << item <<"\n";
    }
    else
    {
        heap(harr,capacity);
        harr[0] = harr[capacity-1];
        capacity--;
        heap(harr,capacity);
    }
}
int main()
{
	cin >> capacity;
	harr = new int [capacity];
	for(int i = 0; i < capacity; i++)
	{
		cin >> harr[i];
	}
	heap(harr,capacity);
	for(int i = 0; i < capacity; i++)
	{
		cout << harr[i] << " ";
	}
	cout << endl;
	Delete(150,capacity);
	cout << "After Delete : ";
	for(int i = 0; i < capacity; i++)
	{
		cout << harr[i] << " ";
	}
	cout << endl;

	return 0;
}
