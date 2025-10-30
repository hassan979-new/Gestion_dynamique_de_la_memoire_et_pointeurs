
# 🧮 Héritage multiple

## 📘 Description

Ce document regroupe plusieurs projets C++ illustrant des concepts fondamentaux de la programmation orientée objet et de la gestion dynamique de mémoire :

- Allocation dynamique de tableaux et d’objets

- Encapsulation des données

- Utilisation de pointeurs et de boucles d’entrée/sortie

- Gestion interactive de structures dynamiques

## 📂 Project Structure
````
projets/
├── CreationDynamiqueTableauEntiers/
│   └── CreationDynamiqueTableauEntiers.cpp
├── TableauDynamiqueObjets/
│   └── TableauDynamiqueObjets.cpp
├── GestionDynamiqueObjet/
│   └── GestionDynamiqueObjet.cpp
├── GestionCarnetAdresses/
│   └── GestionCarnetAdresses.cpp
└── README.md
````


## ⚙️ Features

### **1.** TableauEntiers – Lecture et affichage dynamique d’entiers
Fonction main() :

- Demande à l’utilisateur la taille du tableau

- Alloue dynamiquement un tableau d’entiers avec new

- Lit chaque entier via une boucle for

- Affiche les valeurs avec leur indice

- Libère la mémoire avec delete[]


### **2.** Tableau Dynamique de Personnes – Encapsulation et allocation dynamique d’un objet
Classe Personne :

- Attributs privés : nom, age

- Constructeur Personne(string, int) : Initialise les attributs avec les valeurs fournies

- Méthode afficher() : Affiche le nom et l’âge de la personne

Fonction main() :

- Crée dynamiquement un objet Personne avec new

- Appelle la méthode afficher()

- Libère la mémoire avec delete

### **3.** LivresDynamiques – Tableau dynamique d’objets Livre
Classe Livre :

- Attributs privés : titre, prix

- Constructeur Livre(string, float) : Initialise les attributs avec des valeurs par défaut ou saisies

- Méthode afficher() : Affiche le titre et le prix du livre

Fonction main() :

- Demande la taille du tableau de livres

- Alloue dynamiquement un tableau de Livre

- Lit les données de chaque livre via une boucle

- Affiche les informations de chaque livre

- Libère la mémoire avec delete[]

### **4.** CarnetContacts – Gestion interactive de contacts dynamiques
Classe Contact :

- Attributs privés : nom, telephone, email

- Constructeur Contact(string, string, string) : Initialise les informations du contact

- Méthode afficher() : Affiche les données du contact

- Méthode getNom() : Retourne le nom du contact

Fonction supprimerContact(Contact**, int&, string) :

- Recherche un contact par nom

- Supprime l’objet correspondant

- Réalloue le tableau sans le contact supprimé

Fonction main() :

- Initialise un tableau dynamique de pointeurs Contact**

Menu interactif avec 3 options :

- Ajouter un contact

- Afficher tous les contacts

- Supprimer un contact par nom

- Gère la mémoire et les réallocations dynamiques
## 🖥️ Example Execution


###  Création dynamique d’un tableau d'entiers :
- <img width="480" height="504" alt="image" src="https://github.com/user-attachments/assets/dea1deb5-db2e-4737-ba25-ba8e21e1a13a" />
### Gestion dynamique d’un objet : 
- <img width="480" height="504" alt="image" src="https://github.com/user-attachments/assets/6b516bcf-ad62-4bf2-9a55-22f4e983841a" />
###  Tableau dynamique d’objets :
- <img width="480" height="504" alt="image" src="https://github.com/user-attachments/assets/a93ff8e3-b3c8-4008-808a-e97e75b5fef3" />
### Gestion d’un carnet de Contacts :
##### choix = 1:
- <img width="480" height="504" alt="image" src="https://github.com/user-attachments/assets/e2839b42-d001-4d0b-b9e3-a74e6b4f6d4b" />
##### choix = 2:
- <img width="480" height="504" alt="image" src="https://github.com/user-attachments/assets/18f93c8a-84d1-4e8e-ad10-d01681363d3f" />
##### choix = 3:
- <img width="480" height="504" alt="image" src="https://github.com/user-attachments/assets/1f643850-9459-45bf-8e77-093f6878965f" />
##### choix = 0:
- <img width="480" height="504" alt="image" src="https://github.com/user-attachments/assets/1ff1f79d-b321-41b0-94f6-cab52a99bef6" />
## 💡 Concepts Practiced

- Allocation dynamique avec new et delete

- Encapsulation des attributs dans des classes

- Utilisation de tableaux dynamiques d’objets et de pointeurs

- Menus interactifs et gestion de structures évolutives

## 🧑‍💻 Author

- 👤 Agouram Hassan
- 🏫 Programmation orientée objet : C++
- 🎓 Instructor	Mr.LACHGAR
- 📅 30	October 2025
