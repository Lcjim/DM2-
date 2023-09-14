int main() {

    char WordKey [8] = {'e','l','e','p','h','a','n','t'};
    char devineword [8] = {'_','_','_','_','_','_','_','_'};
    int errorNumber = 0;
    char word;

    while (errorNumber<6) {
        printf("écrit une lettre:\n");
        scanf("%c", &word);
        getchar();

        char find = 0;

        for (int i = 0; i < 8; ++i) {
            if (word == WordKey[i]) {
                devineword[i] = WordKey[i];
                find = 1;
            }
        }
        if (!find) {
            errorNumber += 1;
            printf("La lettre ne se trouve pas dans le mot secret, t'as fait un erreur il te reste %d erreur(s). \n",
                   6 - errorNumber);
        } else {
            printf(" la lettre se trouve bien dans le mot secret, très bien!\n");
        }

        printf("le mot actuel est : ");
        for (int i = 0; i < 8; ++i) {
            printf("%c", devineword[i]);
        }
        printf("\n");
        if (errorNumber == 6) {
            printf("tu as perdu, Le mot secret était : ");
            for (int i = 0; i < 8; ++i) {
                printf("%c", WordKey[i]);
            }
            printf("\n");
            return 1;
        }

        int good = 1;
        for (int i = 0; i < 8; ++i) {
            if (devineword[i] == '_') {
                good = 0;
                break;
            }
        }

        if (good) {
            printf("congratulation! Le mot secret était : ");
            for (int i = 0; i < 8; ++i) {
                printf("%c", WordKey[i]);
            }
            printf("\n");
            return 0;
        }
    }
}

