# UNPACK


Dès lors que l'on rentre dans l'exécutable on constate que le main est appelé en lui même avec une donnée localisé à l'offset 0x2034.

En suivant le fil d'exécution on voit ensuite que le programme xor et met dans un fichier mappé en mémoire, un autre programme. Cette autre programme est exécuter avec la donnée cité précédemment.

Ce nouveau programme va demander à l'utilisateur d'entrée un mot de passe, et vas comparer ce mot de passe contre un chaine de charactère décodé via un xor. Il ne nous reste plus qu'à extraire le fichier faire un petit script pour obtenir automatiquement le flag (unpack_2.bin dans ce dossier représente le deuxième binaire exécuter).

    with open('unpack', 'rb') as file:
	    r = file.read()
	with open('unpack_2.bin', 'rb') as file:
		s = file.read()
	for i in range(23):
		print(chr(s[0x2034+i] ^ r[0x2034 + (i & 0xf)]), end='')

On trouve donc le flag:

    BFS{uNp4ck1ng_m4s7eR!}
