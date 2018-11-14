
# -*- coding: utf-8 -*-
"""
10)
Construa um programa que seja capaz de concluir qual dentre os animais seguintes 
foi escolhido através de perguntas e respostas. Animais possíveis: leão, cavalo, homem, 
macaco, baleia, avestruz, pingüim, pato, águia, tartarug
a, crocodilo e cobra

Exemplo:
É mamífero: Sim
É quadrúpede: Sim
É carnívoro: Não
É herbívoro: Sim
Então o animal escolhido foi o cavalo
"""
quest = str(raw_input(" Mamifero ? "))
if quest=="y":
 quest2 = str(raw_input(" quadrupede ? "))
 if quest2=="y":
  quest3 = str(raw_input(" carnivoro ? "))
  if quest3 == "y":
        print "Leão"
  else:
   quest3 = str(raw_input(" herbivoro ? "))
   if quest3 == "y":
        print "Cavalo"
 else:
    quest2 = str(raw_input("bipede ?"))
    if quest2 == 'y':
        quest3 = str(raw_input("onivoro ?"))
        if quest3=='y':
            print 'Humano'
        else:
            quest3 = str(raw_input("frutifero ?"))
            if quest3=='y':
              print 'macaco'
    else:
        voa = str(raw_input("voador ?"))
        if voa=='y':
            print "Morcego"
        else:
            nada = str(raw_input("nada ?"))
            if nada == 'y':
                print "Baleia"
                        
else:
    ave = str(raw_input(" Ave ? "))
    if ave=="y":
        voa = str(raw_input("voa ?"))
        if voa == "y":
            nada = str(raw_input("nadadora ?"))
            if nada=='y':
                print "Pato"
            else:
                rapina = str(raw_input("rapina ?"))
                if rapina=='y':
                  print "Aguia"
                
        else:
            tropical = str(raw_input("Tropical ?"))
            if tropical == "y":
                print 'Avestruz'
            else:
                polar = str(raw_input("polar ?"))
                if polar == "y": 
                 print "Pinguim"       
    else:
        reptil = str(raw_input("Reptil ? "))
        if reptil=='y':
            casco = str(raw_input("casco ? "))
            if casco =='y':
                print "Tartaruga"
            else:
                carnivoro = str(raw_input("carnivoro ?"))
                if carnivoro =='y':
                    print "Crocodilo"
                else:
                    print "cobra"
