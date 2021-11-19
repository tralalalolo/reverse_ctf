# kill_la_kool

En parcourant le debugger, on voit toujours du wasm. En regardant attentivement, on vois deux opération connus : strlen et strcmp. Le tout est de savoir à quoi est comparé notre mot de passe.

On remarque dans le code javascript la présence d'une variable nommé HEAP8, servant à stocker certaine donnés, notamment le mot de passe entrée et le mot de passe comparé.

En parcourant la HEAP8, on voit cette chaine de charactère qui est le flag : d0n{?}_70s3_uR_W_#y!