

def divisorsum(x):
    divs=0
    for n in range(1,round(x/2+1),1):
        if x%n == 0:
            divs+=n
    return divs


amis =[]


for a in range(2,10001,1):
    da = divisorsum(a)
    db = divisorsum(da)
    if db == a and da !=a :
        amis.append(a)
        
print(divisorsum(284))
print(sum(amis))