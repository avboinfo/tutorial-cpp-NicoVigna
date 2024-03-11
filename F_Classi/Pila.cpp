/*
Pila.cpp
11/03/24
*/

#include <iostream>
using namespace std;

class Pila
{
protected:
    int dim, len, delta;
    int *v;

public:
    Pila(int d)
    {
        dim = d;
        len = 0;
        delta = 10;
        v = new int[dim];
    }
    void add(int n)
    {
        if (len == dim)
        {
            cout << "estendo da " << dim << " a " << dim + delta << endl; // debug
            int *nuovov = new int[dim + delta];
            for (int i = 0; i < dim; i++)
                nuovov[i] = v[i];
            dim += delta;
            delete[] v;
            v = nuovov;
        }
        v[len] = n;
        len++;
    }
    int pop()
    {
        int result = v[len - 1];
        len--;
        return result;
    }
    int GetElement(int index)
    {
        return v[index];
    }
    int SetElement()
    {
    }
    void print()
    {
        cout << "Contenuto del vettore: ";
        for (int i = 0; i < len; i++)
            cout << v[i] << " ";
        cout << endl;
    }
};

int main(int argc, char const *argv[])
{
    Pila vett(15);

    for (int i = 0; i < 20; i++)
        vett.push(i);
    for (int i = 0; i < 10; i++)
        cout << vett.pop() << " ";

    cout << endl;

    return 0;
}