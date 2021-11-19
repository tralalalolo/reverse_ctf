# ELF_06

En cherchant dans .rodata, on trouve les chaines suivantes : No, %s is not correct.\n et Yes, %s is correct!\n. Par référencement croisé, elles sont appelé par la même fonction qui charge une autre donné : K+N.R.X+R1U-M,X%Q+U

Vu les conditions pour afficher les chaines de charactères ci-dessus citées, on suppose que cette fonctions prends en paramètre argv[1], le transforme et compare à ' K+N.R.X+R1U-M,X%Q+U'

Via un script on trouve une possibilité de mot de passe à partir du résultat et de la fonction qui l'encode (voire fichier brutfforce.c ci-joint)

Via le résulta trouvé on obtient le flag : BFS[pokepokepoke]