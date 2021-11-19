# QtCalculator

Afin de trouer une bonne indication, on cherche dans .rodata une string qui est invoqué en cas de succès : "GG your treasure is now on the screen". On remarque ensuite que le binaire a retenus ses symboles et une classe Caculator dont la fonction Calculator::check_result() finis par être trouvé en examination croisé

On se retrouve dans une fonction bien étrange et bien nommé 'check_result' effectuant d'étrange opération à partir de la stack (offset fichier +0x6826)

    MOV qword ptr [[RBP + checksum],0x0
    MOV EAX, 0xfa56ea00
    ADD qword ptr [RBP + checksum],0x280de80
    ADD qword ptr [RBP + checksum],0x668a0
    ADD qword ptr [RBP + checksum],0x539
    
Le nombre obtenus est 0xfcde3659, en décimal 4242421337, qui une fois entrée dans la calculatrice nous donne le flag BFS[13371337]
