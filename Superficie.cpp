#include <iostream>

int main ()
    {
        int longueur = 0;
        int largeur = 0;

        std::cout << "Quelle est la longueur de votre piece ? "; //Output demandant la longueur d'une pièce
        std::cin >> longueur; //Input de la personne afin de donner sa réponse à propos de la longueur
        std::cin.ignore(); //Input pour passer à la prochaine question sans avoir de problème après avec le Return 0

        std::cout << "Quelle est la largeur de votre piece ? "; //Output demandant la largeur de la pièce
        std::cin >> largeur; //Input pour indiquer la largeur
        std::cin.ignore();

        std::cout << "Votre piece fait " << longueur*largeur << " m2" << std::endl;
        std::cin.ignore();

        return 0;
    }