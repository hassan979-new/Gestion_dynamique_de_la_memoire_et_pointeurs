
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

### Gestion dynamique d’un objet : 

###  Tableau dynamique d’objets :

### Gestion d’un carnet de Contacts :

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
