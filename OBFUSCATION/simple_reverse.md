# Simple reverse


En parcourant le code, on voit une fonction caché qui a été encodé via une technique mystérieuse
S'il s'agit d'une fonction, et ayant déjà l'indice que la clé fait 3 octects, connaissant la convention d'appel de début, et le fait qu'elle se termine forcément par 0xC3, on peut deviner par simple XOR les trois premier octets, et vérifier que le dernier octect de le fonction nous donne 0xC3 après décodage.

La clé est z0b


    0:  55                      push   ebp
    1:  89 e5                   mov    ebp,esp
    3:  b8 ce fa ef be          mov    eax,0xbeefface
    8:  89 ec                   mov    esp,ebp
    a:  5d                      pop    ebp
    b:  c3                      ret


Une fois que l'on a la fonction on voit qu'elle retrourne une certaine valeur, qui nous permet d'obtenir le flag via le XOR de cette valeur dans la fonction printFlag, en faisant attention à l'endianness

Un petit script :

    with open('simple_binary', 'rb') as file:
	    r = file.read()
	key = [0xce, 0xfa, 0xef, 0xbe]
	for i in range(28):
		print(chr(r[0x2015 + i] ^ key[i % len(key)]), end='')

Le flag est BFS{5iMp1e_r1gH7? g00d J0b!}