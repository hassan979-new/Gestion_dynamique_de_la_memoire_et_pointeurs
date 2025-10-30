#include <iostream>
using namespace std;

class Contact
{
private:
    string nom;
    string telephone;
    string email;

public:
    Contact(string n = "", string t = "", string e = "")
    {
        nom = n;
        telephone = t;
        email = e;
    }

    void afficher()
    {
        cout << "nom: " << nom << endl
             << "telephone: " << telephone << endl
             << "email: " << email << endl
             << endl;
    }

    string getNom()
    {
        return nom;
    }
};

void supprimerContact(Contact **&carnet, int &n, string nom)
{
    int index = -1;

    for (size_t i = 0; i < size_t(n); i++)
    {
        if (carnet[i]->getNom() == nom)
        {
            index = i;
            break;
        }
    }

    if (index == -1)
    {
        cout << "Contact introuvable" << endl;
        return;
    }

    delete carnet[index];


    Contact **carnet2 = new Contact *[n-1];

    for (size_t i = 0 , j = 0; i < size_t(n); i++)
    {
        if (i != index)
        {
            carnet2[j++] = carnet[i];
        }
        
    }

    delete[] carnet;

    carnet = carnet2;
    n--;
    cout << "Conatct " << nom << " supprime" << endl;
}

int main(int argc, char const *argv[])
{
    int n = 0;
    int choix;
    Contact **carnet = nullptr;

    do
    {
        cout << "==== Votre Contacts ====" << endl;
        cout << "<<1>> Ajouter un contact" << endl;
        cout << "<<2>> Afficher tous les contacts" << endl;
        cout << "<<3>> Supprimer un contact" << endl;
        cout << "<<0>> Quitter" << endl;
        cout << "Choix: ";
        cin >> choix;
        cin.ignore();

        switch (choix)
        {
        case 1:
        {
            string nom, tel, email;
            cout << "Nom : ";
            cin >> nom;
            cout << "Téléphone : ";
            cin >> tel;
            cout << "Email : ";
            cin >> email;

            Contact *c = new Contact(nom, tel, email);

            Contact **nouveau = new Contact *[n + 1];
            for (int i = 0; i < n; i++)
            {
                nouveau[i] = carnet[i];
            }
            nouveau[n] = c;

            delete[] carnet;
            carnet = nouveau;
            n++;

            cout << "Contact ajoute avec succès !" << endl;
            break;
        }

        case 2:
            if (n == 0)
                cout << "Conatct vide." << endl;
            else
            {
                cout << "--- Liste des contacts ---" << endl;
                for (int i = 0; i < n; i++)
                {
                    carnet[i]->afficher();
                }
            }
            break;

        case 3:
        {
            string nom;
            cout << "Entrez le nom du contact à supprimer : ";
            getline(cin, nom);
            supprimerContact(carnet, n, nom);
            break;
        }

        case 0:
            cout << "Fermeture du programme..." << endl;
            break;

        default:
            cout << "Choix invalide !" << endl;
        }

    } while (choix != 0);

    return 0;
}
