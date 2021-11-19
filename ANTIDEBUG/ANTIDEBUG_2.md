# ANTIDEBUG_02


Cette fois ci, il faut regarder le handler de la fonction signal, car elle contient un calcul pour transformer l'entrée et la comparé à la chaine de caractère final '=sCc7_InB_9t5nB_D_C_D', via un petit script python, on a pris la chaine de caractère final et inverser le script :

    s = '=sCc7_InB_9t5nB_D_C_D'
    res_int = []
    
    for i in s:
        res_int.append(ord(i))
    
    for index in range(len(res_int)):
        if res_int[index] == 85:
            res_int[index] = 127
    
    for index in range(len(res_int)):
        if ((res_int[index] - 84) <= 32) and not (index & 1):
            res_int[index] -= 84
    
    for index in range(len(res_int)):
        if index & 1:
            res_int[index] -= 42
        else:
            res_int[index] += 84
            
    for index in range(len(res_int)):
        if res_int[index] <= 0:
            res_int[index] = 127 + res_int[index]
    
    print(''.join(chr(i) for i in res_int))
            
