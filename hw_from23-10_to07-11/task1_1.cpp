#include <iostream>
#include <cmath>
using namespace std;

int* allocate_vector(int n);
void input_vector(int n, int* x, char name);
float middle_variable(int n, int* x);
float sum_products(int n, int* x, int* y);
float sum_quadrats(int n, int* x);
float sum_elements(int n, int* x);
float lin_progress_koef(int n, int* x, int* y);
float independent_variable(int n, float b1, int* x, int* y);
float lin_progress(float b0, float b1, float x);


int main()
{
    int n, * x, * y;
    float b1, b0, new_x, new_y, error;

    cout << "Number points:";
    cin >> n;

    x = allocate_vector(n);
    y = allocate_vector(n);

    input_vector(n, x, 'X');
    input_vector(n, y, 'Y');

    b1 = lin_progress_koef(n, x, y);
    b0 = independent_variable(n, b1, x, y);

    cout << "Enter new X: " << endl;
    cin >> new_x;

    cout << "Enter new Y: " << endl;
    cin >> new_y;
    
    cout << "Result Y: " << lin_progress(b0, b1, new_x) << endl;
    
    error = new_y - lin_progress(b0, b1, new_x);
    if (error >= 0)
    {
        cout << "Error: " << error;
    }
    else
    {
        cout << "Error: " << -1 * error;
    }
    

    return 0;
}


int* allocate_vector(int n)
{
    return (int*)malloc(n * sizeof(int));
}


void input_vector(int n, int* x, char name)
{
    for (int i = 0; i < n; i++)
    {
        cout << name << "[" << i << "]: ";
        cin >> x[i];
    }

}


float middle_variable(int n, int* x)
{
    float sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += x[i];
    }
    return sum / n;
}


float sum_products(int n, int* x, int* y)
{
    float sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += x[i] * y[i];
    }

    return sum;
}


float sum_quadrats(int n, int* x)
{
    float sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += x[i] * x[i];
    }

    return sum;
}


float sum_elements(int n, int* x)
{
    float sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += x[i];
    }

    return sum;
}


float lin_progress_koef(int n, int* x, int* y)
{
    float b1, mv_x, mv_y, sp, sq, se;
    mv_x = middle_variable(n, x);
    mv_y = middle_variable(n, y);

    sp = sum_products(n, x, y);
    sq = sum_quadrats(n, x);
    se = sum_elements(n, x);

    b1 = (sp - n * mv_x * mv_y) / (sq - pow(se, 2) / n);

    return b1;
}


float independent_variable(int n, float b1, int* x, int* y)
{
    return middle_variable(n, y) - middle_variable(n, x) * b1;
}


float lin_progress(float b0, float b1, float x)
{
    return b0 + b1 * x;
}

