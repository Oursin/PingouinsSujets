# **Atelier Pingouin PSO**

## **_Road to str_to_word_array_**

Nous allons à travers différentes fonctions vous aider à pouvoir créer un str_to_word_array.
### my_count_words :
Elle prend en argument une chaîne de caractères et **un caractère qui sert de séparateur**, et doit renvoyer le **nombre de mots** délimités par le séparateur.
```c
int my_count_words(const char *str, const char separateur);
```
> my_count_words("Hello World, how are you?", ' '); = 5
> my_count_words("I:am:alive!", ':'); = 3

### my_strdup :
Elle prend en argument une chaîne de caractères, et doit renvoyer **un pointeur sur une copie nouvellement allouée** de celle-ci.
```c
char *my_strdup(const char *str);
```
_Vous pourriez avoir besoin de **malloc**_

### my_strndup :
Elle prend en argument une chaîne de caractères, la position de départ de la copie et le nombre de caractères à copier. 
La fonction renverra **un pointeur sur cette copie nouvellement allouée**.
```c
char *my_strndup(const char *str, unsigned int start, unsigned int length);
```
### my_str_list : (OPTIONNELLE)
_Faites cet exercice si vous estimez avez des **difficultés avec les tableaux à deux dimensions**._
Elle prend en argument un **nombre de lignes et de colonnes**, et doit renvoyer un **pointeur vers tableau à deux dimensions**.
Chaque ligne doit être remplie de **'\0'** et la dernière ligne du tableau doit pointer vers **NULL**.
```c
char **my_str_list(unsigned int lines, unsigned int columns);
```
**Vous pouvez tester votre fonction avec ce Main :**
```C
int main(void)
{
    char **test = my_str_list(10, 20);
    int i = 0;

    for (; test[i] != NULL; ++i);
    if (i != 10)
        printf("Mauvais nombre de lignes\n");
    else
        printf("Tout est bon !\n");
    return (0);
}
```

### str_to_word_array :
##### You're nearly there !
La fonction découpe une chaîne de caractère donnée et renvoie un pointeur sur un **tableau à deux dimensions** où chaque ligne contient un **mot**.
La dernière ligne doit pointer vers **NULL**.
```c
char **str_to_word_array(char const *str);
```
#
#
#
#
#
#
#
#
#
#
#
#
#
# Merci D'avoir suivi cet Atelier.

![Pingouin](https://www.1001deguisement.fr/136-large_default/d%C3%A9guisement-pingouin-manchot.jpg)
