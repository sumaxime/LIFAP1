/* Retourner le nombre d'occurence d'une lettre dans une chaîne */
#include <iostream>

using namespace std;

/* Fonction */

int occurence(char c[], char c1)
{
  int o;
  
  o = 0;
  
  for (int i = 0; c[i] != '\0'; ++i) {
    if (c[i] == c1)
      ++o;
  }
  
  return o;
}

/* Utilisation */

int main()
{
  char mot[] = "bonjour";
  
  cout << occurence(mot, 'z');
  
  cout << endl;
  return 0;
}
