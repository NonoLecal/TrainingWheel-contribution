#include <stdio.h>
#include <string.h>

int main() {
    // Définir le mot de passe correct
    char motDePasseCorrect[] = "FakePassword";
            
    // Demander à l'utilisateur de saisir le mot de passe
    char motDePasseSaisi[100]; // Vous pouvez ajuster la taille selon vos besoins
    printf("Pour obtenir le flag, il vous faut le bon mot de passe : ");
    scanf("%s", motDePasseSaisi);
    
    // Comparer le mot de passe saisi avec le mot de passe correct
    if (strcmp(motDePasseSaisi, motDePasseCorrect) == 0) {
        printf("DINUM{FakeFlag}\n"); // Mot de passe correct
    } else {
        printf("Hahaha, tu crois que ca sera si facile, essaie encore ! \n"); // Mot de passe incorrect
    }
    return 0;
}
