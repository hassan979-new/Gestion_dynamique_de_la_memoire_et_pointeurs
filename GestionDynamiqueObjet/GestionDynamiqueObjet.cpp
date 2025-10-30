#include <iostream>
using namespace std;

class Personne
{
private:
    string nom;
    int age;

public:
    Personne(string n, int a)
    {
        nom = n;
        age = a;
    }

    void afficher()
    {
        cout << "Nom : " << nom << ", age : " << age << endl;
    }
};

int main(int argc, char const *argv[])
{
    Personne *p = new Personne("Hassan", 21);
    p->afficher();
    delete p;
    return 0;
}
