from math import sqrt

def delta(a,b,c):
  return  (b**2) -4*a*c

def main():
  a = int(raw_input("a: "))
  b = int(raw_input("b: "))
  c = int(raw_input("c: "))
  d = delta(a,b,c)
  if d < 0:
        print "Negativo "
  else: 
        print "Positivo ",d
  x1 = (-b +sqrt(d))  / (2*a)
  x2 = (-b - sqrt(d)) / (2*a)
  print a,b,c,d,x1,x2

main()
