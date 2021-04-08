import csv

def importnames(file):
    names=[]
    with open(file) as datafile:
        reader = csv.reader(datafile, delimiter=',')
        for row in reader:
            for name in row:
                names.append(name)
    names.sort()
    return(names)

def scorenames(namelist):
    scoresum=0
    n=0
    for name in namelist:
        score=0
        n+=1
        for letter in name:
            score+= ord(letter)-64
        scoresum+= score*n
    return(scoresum)


if __name__ == "__main__":
    names = importnames('p022_names.txt')
    print(scorenames(names))