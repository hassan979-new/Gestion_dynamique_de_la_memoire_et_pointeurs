#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cout << "donner la taille de tableau (entiers) :";
    cin >> n;

    int *tab = new int[n];

    for (size_t i = 0; i < size_t(n); i++)
    {
        cout << "donner la valeur d'element " << i + 1 << " : ";
        cin >> tab[i];
    }

    for (size_t i = 0; i < size_t(n); i++)
    {
        cout << "tab[" << i << "] = " << tab[i];
    }

    delete[] tab;

    return 0;
}
