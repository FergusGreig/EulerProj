num = 100
factorial = 1
for x in range(1,num+1,1):
    factorial *=x 
factorial=str(factorial)
sumfact = 0
for n in factorial:
    sumfact+=int(n)
print(sumfact)
