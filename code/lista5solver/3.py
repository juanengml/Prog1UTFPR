def main():
    dia1 = 12
    mes1 = 3 
    ano1 = 2010

    dia2 = 5
    mes2 = 9
    ano2 = 2011
    diaTotalAno = 0
    diaMes = 0

    for p in range(ano1,ano2):
      if p % 4 == 0:
        diaTotalAno = diaTotalAno + 366
      else:
        diaTotalAno = diaTotalAno + 365

    for p in range(ano1,ano2):
        diaMes = diaMes + 30

    print "ano 1: ",ano1,"\nano 2: ",ano2,"\nDia total anos: ",diaTotalAno


main()    