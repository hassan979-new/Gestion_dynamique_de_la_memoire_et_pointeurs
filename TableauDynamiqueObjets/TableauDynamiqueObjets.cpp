#include <iostream>
using namespace std;

class Livre
{
private:
    string titre;
    float prix;

public:
    Livre(string t = "", float p = 0.0f)
    {
        titre = t;
        prix = p;
    }

    void afficher()
    {
        cout << "Titre = " << titre << endl
             << "Prix = " << prix << endl
             << endl;
    }
};

int main(int argc, char const *argv[])
{
    int n;
    cout << "donner la taille de votre tableau: ";
    cin >> n;

    Livre *tab = new Livre[n];

    for (size_t i = 0; i < size_t(n); i++)
    {
        string titre;
        float prix;

        cout << "donner le titre de livre" << i + 1 << ": ";
        cin >> titre;
        cout << "donner le prix de livre" << i + 1 << ": ";
        cin >> prix;

        tab[i] = Livre(titre, prix);
    }

    for (size_t i = 0; i < size_t(n); i++)
    {
        cout << "=== Livre" << i + 1 << " ===" << endl;
        tab[i].afficher();
    }

    delete[] tab;
    return 0;
}
