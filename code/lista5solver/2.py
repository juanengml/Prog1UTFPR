def main():
    contador = 0
    graos = 1
    soma_graos = 1
    contador = int(raw_input("Numero de Casas 1 a 64: "))
    if (contador <= 64):
        graos = graos ** 2
        soma_graos = graos + soma_graos
        print "O quadro %s tem %s graos" % (contador,graos)
        print "Serao pagos %s graos \n" % (soma_graos)

main()      
