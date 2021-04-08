import csv

def importnames(file):
    names=[]
    with open(file) as datafile:
        reader = csv.reader(datafile, delimiter=',')
        for row in reader:
            for name in row:
                names.append(name)
    return(names)     

if __name__ == "__main__":
    names = importnames('p022_names.txt')
    print(names)