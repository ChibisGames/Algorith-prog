#include <iostream>
#include <cmath>
using namespace std;


char* allocate_vector(int n);
void input_vector(int n, char* x, char name);
void shaker(int n1, int n2, char* x, char* a, char* b);
void print_vector(int n, char* x);


int main()
{
    int n1, n2;
    char* a, * b, * x;

    cout << "Number of vector A:";
    cin >> n1;

    a = allocate_vector(n1);
    input_vector(n1, a, 'A');

    cout << "Number of vector B:";
    cin >> n2;

    b = allocate_vector(n2);

    input_vector(n2, b, 'B');

    x = allocate_vector(n1 + n2);
    
    shaker(n1, n2, x, a, b);

    cout << "Vector X:\n";
    print_vector(n1 + n2, x);

    return 0;
}


char* allocate_vector(int n)
{
    return (char*)malloc(n * sizeof(char));
}


void input_vector(int n, char* x, char name)
{
    for (int i = 0; i < n; i++)
    {
        cout << name << "[" << i << "]: ";
        cin >> x[i];
    }
}


void shaker(int n1, int n2, char* x, char* a, char* b)
{
    int i = 0, j = 0;
    if (n1 >= n2)
    {
        while (i < n2)
        {
            x[2 * i] = a[i];
            x[2 * i + 1] = b[i];
            i++;
        }

        j = 2 * i;

        while (i < n1 + n2)
        {
            x[j] = a[i];
            i++;
            j++;
        }
    }
    else
    {
        while (i < n1)
        {
            x[2 * i] = a[i];
            x[2 * i + 1] = b[i];
            i++;
        }

        j = 2 * i;

        while (i < n1 + n2)
        {
            x[j] = b[i];
            i++;
            j++;
        }
    }
}


void print_vector(int n, char* x)
{
    for (int i = 0; i < n; i++)
    {
        cout << x[i] << " ";
    }
}