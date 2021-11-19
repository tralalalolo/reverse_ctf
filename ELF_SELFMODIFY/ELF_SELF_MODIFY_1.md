# ELF_SELF_MODIFY_1


La première chose que l'on remarque c'est l'utilisation de mprotect() pour exécuter quelque chose qui n'est pas présent d'origine sur la stack. On remarque par la suite qu'une données contenus dans le programme est xor par 0x42 dans cette région, et ensuite appelé en tant que fonction.

La fonction compare le mot de passe avec cette somme SHA256 '1B1D7478CCDC83C23D897948E110DB093459481E1A3B20E5CF85DFE3F69F6804'.

On trouve sur internet : flatearthsociety