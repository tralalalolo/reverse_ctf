# ELF_FAST_03


On télécharge deux fichiers différents pour observer les différence, on observe l'utilisation d'une string qui se trouvant sur deux offset, et l'utilisation d'un tableau de nombre, tout utilisé dans la fonction check_pw. Il suffit d'extraire les information et de réalisé dans le script python ce que fait l'exécutable.

    import requests
    
    r = requests.get('http://reverse.blackfoot.io:8080/ELF_03', allow_redirects=True)
    
    data = r.content
    s1 = list((data[0x1189:0x1191].decode('utf-8') + data[0x1193:0x119b].decode('utf-8'))) # endianess
    s2 = [2, 3, 2, 3, 5] # endianess
    for index in range(len(s2)):
        s1[index] = chr(ord(s1[index]) + s2[index])
    flag = ''.join(s1)
    
    payload={}
    headers = {}
    url = "http://reverse.blackfoot.io:8080/validate/ELF_03/" + flag
    response = requests.request("GET", url, headers=headers, data=payload)
    print(response.text)


flag : BFS[cH4BllJVCnT0QPaVzM8t]