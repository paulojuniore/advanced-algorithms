# Codeforces - A. String Task. AA1

palavra = input()

vogais = ['A', 'O', 'Y', 'E', 'U', 'I']
auxiliar = ""
for i in palavra:
    if i.upper() in vogais:
        pass
    else:
        auxiliar += '.'
        if i.isupper():
            auxiliar += i.lower()
        else:
            auxiliar += i
            
print (auxiliar)
