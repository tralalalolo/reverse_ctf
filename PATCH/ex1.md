# EX1

Dans une fonction qui print 'Received message: %s\n', il suffit de faire un appel vers la fonction qui renvoie une chaine de charactère : 'send_help_pls', il y a une opportunité de faire un call near sur l'offset 0x10ca et de réécrire les 5 octets suivants sans problème aucun.

Et on obtiens un binaire qui affiche : Received message: send_help_pls!