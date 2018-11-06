#6) Escreva um programa que receba tres numeros e determina qual e o maior.

def getvalue():
    dado = list(raw_input("valor: "))
    return dado


def main(): 
    dado = getvalue()
    a = dado[0]
    b = dado[1]
    c = dado[2]
    if (a > b) and (a > c):
        print a
    else: 
        if (b > a) and (b > c):
            print b

        else:
            print c

          


main()