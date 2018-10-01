
def saque(entrada):
  notas50 = entrada / 50 # 6
  resto50 = entrada % 50 # 33
  notas10 = resto50 / 10 # 33 / 10 = 3
  resto10 = notas50 % 10 # 3
  notas1  = resto50 % 10
  return [notas50,notas10,notas1]


while True:
 entrada = int(raw_input("Qual o valor do saque ? "))
 print saque(entrada)
 