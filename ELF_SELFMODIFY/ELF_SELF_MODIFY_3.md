# ELF_SELF_MODIFY_3


De la même façon que les exercices précédent, il y a un mprotect, mais cette fois-ci il faut faire attention de prendre la taille indiqué dans le programme, et non la taille supposé dans .rodata (la zone concerné JUSQU'AU dernier octet avant le main).

De la même manière, la fonction est décodé avec 0x21 sur une longueur de 0x58f

Une fois le binaire patché, de retour sur le main, on trouve des commandes caché par des INT3. En regardant les instruction on voit bien un appel à une fonction qui elle aussi contient des INT3. Après avoir tout remplacé par des NOP, on constate cette chaine de charactère : 'lme6g5b1be0g7ce527gemd2m5acel2flfc`m6ag1g1db`fmm7bgbalc71bdcff71' qui se fait XOR pour obtenir ceci : '891b3a6e61d3c71afc3190f9a5718f282749b53e3e064299c636587ce60722ce '

Il s'agit d'une somme sha256 qui correspond à LONGTUNEL