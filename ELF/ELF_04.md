# ELF_04

On voit dans le code que la chaine de charactère ne doit pas faire plus de 16 de longueur et la somme de tout ses charactère doit être de 1664, un script python fait l'affaire :

    import secrets
    import string
    
    
    expected_result = 1664
    
    def sum_chararcter(string_to_test):
        res = 0
        for i in string_to_test:
            res += ord(i)
        return res
        
    string_result = ''.join(secrets.choice(string.ascii_letters + string.digits) for i in range(16))
    
    while (sum_chararcter(string_result) != expected_result):
        string_result = ''.join(secrets.choice(string.ascii_letters + string.digits) for i in range(16))
        
    print(string_result)
