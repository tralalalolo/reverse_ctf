# ELF_07

Plusieurs sont disponible pour trouver le mot de passe. La première chose le programme vérifie que le mot 'static' se trouve à partir de la 3eme position et le mot 'stripped' à partir de la 11eme position. On obtient ces mots en inversant les hash pour lesquels les positions sont comparées.

La fonction is_alpha_only(), vérifie que la chaine de charactère se trouve entre 'a' et 'z'. Et enfin les trois premier charactères sont identique au trois autre à la position 8.

Après un petit bruteforce on obtient deux possibilités:

    notstaticnotstripped
    natstaticnatstripped

Ce qui permet de récupérer le flag : BFS[GGGGGGGG]
