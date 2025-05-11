#ifndef TABLE_H
#define TABLE_H
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

struct etudiant {
    string nom;
    string tel;
    struct etudiant* suivant;
};
typedef struct etudiant* pointeur;

class TableHash {
private:
    pointeur table[10];
    
    int hashFunction(const string& nom) const {
        return static_cast<int>(nom.size()) % 10;
    }

public:
    TableHash() {
        for (int i = 0; i < 10; i++) {
            table[i] = nullptr;
        }
    }
    ~TableHash() {
        for (int i = 0; i < 10; i++) {
            pointeur courant = table[i];
            while (courant != nullptr) {
                pointeur temp = courant;
                courant = courant->suivant;
                delete temp;
            }
            table[i] = nullptr;
        }
    }

    pointeur ajouterEtudiant(const string& nom, const string& tel) {
        int i = hashFunction(nom);
        pointeur l = table[i];
        if (l == nullptr) {
            l = new etudiant;
            table[i] = l;
            l->nom = nom;
            l->tel = tel;
            l->suivant = nullptr;
        }
        else {
            pointeur current = l;
            while (current != nullptr) {
                if (current->nom == nom) {
                    current->tel = tel;
                    return current;
                }
                if (current->suivant == nullptr) break;
                current = current->suivant;
            }
            pointeur p = new etudiant;
            current->suivant = p;
            p->nom = nom;
            p->tel = tel;
            p->suivant = nullptr;
            l = p;
        }
        return l;
    }

    pointeur creerEtudiant(const string& nom) {
        string tel;
        cout << "Enter tel for " << nom << ": ";
        cin >> tel;
        return ajouterEtudiant(nom, tel);
    }

    pointeur chercherEtudiant(const string& nom) const {
        int i = hashFunction(nom);
        pointeur current = table[i];
        while (current != nullptr) {
            if (current->nom == nom) {
                return current;
            }
            current = current->suivant;
        }
        return nullptr;
    }
    
    bool supprimerEtudiant(const string& nom) {
        int i = hashFunction(nom);
        pointeur current = table[i];
        if (current == nullptr) {
            return false;
        }
        if (current->nom == nom) {
            table[i] = current->suivant;
            delete current;
            return true;
        }
        while (current->suivant != nullptr && current->suivant->nom != nom) {
            current = current->suivant;
        }
        if (current->suivant != nullptr) {
            pointeur temp = current->suivant;
            current->suivant = temp->suivant;
            delete temp;
            return true;
        }
        return false;
    }

    void afficherTable() const {
        cout << "+---------------+---------------+-------+\n";
        cout << "| Nom           | Telephone     | Hash  |\n";
        cout << "+---------------+---------------+-------+\n";

        bool emptyTable = true;
        for (int i = 0; i < 10; i++) {
            pointeur current = table[i];
            while (current != nullptr) {
                emptyTable = false;
                cout << "| " << setw(13) << left << current->nom << " | "
                     << setw(13) << left << current->tel << " | "
                     << setw(5) << left << i << " |\n";
                current = current->suivant;
            }
        }
        cout << "+---------------+---------------+-------+\n";
        if (emptyTable) {
            cout << "Table is empty.\n";
        }
    }
    
    void afficherDistribution() const {
        cout << "Hash Table Distribution:\n";
        int total = 0;
        for (int i = 0; i < 10; i++) {
            int count = 0;
            pointeur current = table[i];
            while (current != nullptr) {
                count++;
                current = current->suivant;
            }
            cout << "Bucket " << i << ": " << count << " student(s)\n";
            total += count;
        }
        cout << "Total: " << total << " student(s)\n";
    }
    
    bool modifierTelephone(const string& nom, const string& nouveauTel) {
        pointeur etud = chercherEtudiant(nom);
        if (etud != nullptr) {
            etud->tel = nouveauTel;
            return true;
        }
        return false;
    }
};

#endif