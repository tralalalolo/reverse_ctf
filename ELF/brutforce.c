#include<string.h>

unsigned int rev(char *argv)
{
  int len = strlen(argv);
  int compteur_to_zero = len;
  while (compteur_to_zero) {
    --compteur_to_zero;
      
    }
  
  
}

unsigned int fct(char *argv1)
{
  int compteur_jusqua_taille_max; // r15
  unsigned int v2; // er12
  int compteur1; // r12
  char *entree; // rbx
  int v6; // ecx
  char *end_string; // rdx
  char *begin_string; // rcx
  char v9; // al
  int index; // rbx
  char character; // al
  char v12; // al
  int string_length;

  compteur_jusqua_taille_max = 0LL;
  v2 = 0;
  while (strlen(argv1) > compteur_jusqua_taille_max )
  {
    entree = argv1;
    compteur1 = 0;
    while ( 1 )
    {
      string_length = strlen(argv1);
      if ( string_length <= compteur1 )
        break;
      if ( compteur1 & 1 )
      {
        if ( compteur_jusqua_taille_max & 1 )
          *entree -= 42;
        else
          *entree -= 3;
      }
      else if ( compteur_jusqua_taille_max & 1 )
      {
        *entree -= 42;
      }
      else
      {
        *entree += 26;
      }
      if ( !*entree )
        *entree = 42;
      ++compteur1;
      ++entree;
    }
    v6 = string_length - 1;
    if ( (signed int)string_length - 1 > 0 )
    {
      end_string = argv1 + v6;
      begin_string = argv1 + (v6 - 1 - (string_length - 2));
      do
      {
        v9 = *end_string - 2;
        if ( *end_string == 2 )
          v9 = 42;
        *end_string-- = v9;
      }
      while ( end_string != begin_string );
    }
    for ( index = 0LL; ; ++index )
    {
      v2 = index;
      if (strlen(argv1) <= index )
        break;
      character = argv1[index];
      if ( character < 0 )
        argv1[index] = -character;
      v12 = argv1[index];
      if ( v12 <= 32 )
        argv1[index] = v12 + 47;
    }
    ++compteur_jusqua_taille_max;
  }
  return v2;
}

void addone(char *c)
{
  char str[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
  int i = 0;

  while (str[i] != *c)
    ++i;
  *c = str[i + 1];
}

int main(int ac, char **av)
{
  char *tmp = strdup("K+N.R.X+R1U-M,X%Q+U");
  char *origin = strdup("0000000000000000000");
  char *result = strdup(origin);
  int len = strlen(tmp);
  printf("%d\n", strlen(origin));
  if (ac != 1) {
    free(tmp);
    tmp = strdup(av[1]);
  }
  fct(result);
  for (int i = 0; i < len;) {
    if (result[i] == tmp[i])
      ++i;
    if (i == len)
      break;
    addone(&origin[i]);
    free(result);
    result = strdup(origin);
    fct(result);
    printf("%s\n", origin);
  }
  printf("%s %d\n", origin, strlen(tmp));
}
