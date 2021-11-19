# Less simple binary


Comme pour le premier exercice, on regarde la fin le début qui est forcément \x55\x89\xe5 et la fin qui est aussi \x89\xec\5d\xc3
On faisant un premier xor on tombe sur la clé suivante : 50%F4T!

La clé est z0b

    0:  55                      push   ebp
    1:  89 e5                   mov    ebp,esp
    3:  8b 75 08                mov    esi,DWORD PTR [ebp+0x8] ;; &unk_007
    6:  31 ff                   xor    edi,edi
    8:  31 c9                   xor    ecx,ecx
    a:  41                      inc    ecx
    b:  d1 e7                   shl    edi,1
    d:  8b 16                   mov    edx,DWORD PTR [esi]
    f:  83 e2 40                and    edx,0x40
    12: c1 ea 06                shr    edx,0x6
    15: 8b 1e                   mov    ebx,DWORD PTR [esi]
    17: 81 e3 00 00 04 00       and    ebx,0x40000
    1d: c1 eb 12                shr    ebx,0x12
    20: 31 da                   xor    edx,ebx
    22: 8b 1e                   mov    ebx,DWORD PTR [esi]
    24: d1 e3                   shl    ebx,1
    26: 9c                      pushf
    27: 58                      pop    eax
    28: 83 e0 01                and    eax,0x1
    2b: 01 c7                   add    edi,eax
    2d: 01 d3                   add    ebx,edx
    2f: 89 1e                   mov    DWORD PTR [esi],ebx
    31: 83 f9 08                cmp    ecx,0x8
    34: 75 d4                   jne    0xa
    36: 90                      nop
    37: 90                      nop
    38: 90                      nop
    39: 90                      nop
    3a: 81 e7 ff 00 00 00       and    edi,0xff
    40: 89 f8                   mov    eax,edi
    42: 89 ec                   mov    esp,ebp
    44: 5d                      pop    ebp
    45: c3                      ret


On appelle l'exécutable et on obtient ce résultat :


    "In the dark times
        Will there also be singing?
    Yes, there will also be singing.
        About the dark times."
    ― Bertolt Brecht
    
    The flag is: BFS{7h3_11th_h0uR}
