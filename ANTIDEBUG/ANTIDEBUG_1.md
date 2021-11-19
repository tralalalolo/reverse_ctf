# ANTIDEBUG_01


Au niveau du main, après l'appel de ptrace, changer la valeur de rax en 0. Pareil une fois dans compute, changer la valeur de résultat de ptrace en 0. Dans compute pour pas s'embêter, patcher le binaire à la comparaison du résultat de ptrace. On voit la sortie de compute étant être : 'LLLLOWORLDABCDEF'