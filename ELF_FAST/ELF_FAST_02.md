# ELF_FAST_02


Après comparaison avec deux fichier, on remarque qu'une chaine de charactère manipuler dans le main avec deux charactère supplémentaire. Il suffit de reproduire les même manipulation dans le script python et tenter plusieurs fois d'avoir le flag.

    import requests
    
    r = requests.get('http://reverse.blackfoot.io:8080/ELF_02', allow_redirects=True)
    
    data = r.content
    s = list(data[0x2051:0x2063].decode('utf-8'))
    for index in range(len(s)):
        s[index] = chr(ord(s[index]) - 1)
    s = ''.join(i for i in s)
    flag = chr(data[0x204F] - 1) + chr(data[0x2050] - 1) + s
    
    
    payload={}
    headers = {}
    url = "http://reverse.blackfoot.io:8080/validate/ELF_02/" + flag
    response = requests.request("GET", url, headers=headers, data=payload)
    print(response.text)




flag : BFS[s4MMy:TsltsyDKWKJNm]