import abnumbers

def divisorsum(x):
    divs=0
    for n in range(1,round(x/2+1),1):
        if x%n == 0:
            divs+=n
    return divs

def isabundant(number):
    if number < divisorsum(number):
        return True
    else:
        return False


def listofAN(limit):
    ANs = []
    for x in range(limit-12):
        if isabundant(x): ANs.append(x)
    return ANs

def findNAsums(limit):
    ans = abnumbers.ABNums
    numlist = list(range(limit))
    sumNonAB =0
    nonAB =[]
    for x in ans:
        if len(numlist) == 0:
            return nonAB
        while numlist[0] < 2*x:
            sumNonAB+=numlist[0]
            nonAB.append(numlist.pop(0))
        for y in ans[ans.index(x):]:
            if x+y > limit: continue
            if x+y in numlist:
                numlist.remove(x+y)
        multx = 0
        while multx < limit:
            if multx in ans:
                ans.remove(multx)
            multx += x
    return(nonAB)
    

if __name__ == "__main__":
    nonAB = findNAsums(28123)
    print(sum(nonAB))
#    filename = open('abnumbers.py','w')
#    filename.write("%s = %s\n" %("ABNums",listofAN(28123)))
#    filename.close()
