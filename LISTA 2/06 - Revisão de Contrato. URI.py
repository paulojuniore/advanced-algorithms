# coding: utf-8
# 1120 - Revisão de Contrato. 18/04/2018

while True:
  n, x = map(str, input().split())
  
  if(n == '0' and x == '0'):
    break
  else:
    aux = x.replace(n, "")
    
    if (aux == ""):
      print(0)
    else:
      print(int(aux))
