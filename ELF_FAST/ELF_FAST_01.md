# ELF_FAST_01


On télécharge deux fichiers différents pour observer les différence, on se rends compte que la string se trouve à l'offset 0x2022, du coup on peut faire un script python pour obtenir la données et ensuite la renvoyer:

    import requests
    
    r = requests.get('http://reverse.blackfoot.io:8080/ELF_01', allow_redirects=True)
    
    data = r.content
    flag = data[0x2022:0x2036].decode('utf-8')
    
    
    payload={}
    headers = {}
    url = "http://reverse.blackfoot.io:8080/validate/ELF_01/" + flag
    response = requests.request("GET", url, headers=headers, data=payload)
    print(response.text)

flag : BFS[OmgSuchF4stn3ss]