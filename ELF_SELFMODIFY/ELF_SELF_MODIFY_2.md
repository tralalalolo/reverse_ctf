# ELF_SELF_MODIFY_2


Exactement la même chose que ELF_SELF_MODDIFY_1, sauf qu'il n'y a aucun symbole présent dans le fichier. Mais au final, il s'agit bien de la même chose, pour ce qui est de l'utilisation de mprotect, et du décodage de la fonction avec le nombre 0x42.

La fonction compare le mot de passe avec cette somme SHA256 'cd9cc6fdd2ad6bff55c4e20ab970931fcdcaba0863f79d93fa459aa2ef36c432'.

On trouve sur internet : bananapower