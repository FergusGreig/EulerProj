import csv

def importtriangle(file):
    csv.QUOTE_NONNUMERIC
    triangle = []
    with open(file) as datafile:
        reader = csv.reader(datafile, delimiter=' ')
        for row in reader:
            n=0
            for x in row:
                row[n] = int(x)
                n+=1
            triangle.append(row)
    return(triangle)     
    #        print(','.join(row))


def findpath(triangle):
    x= len(triangle)
    for row in range(x-1,0,-1):
        for col in range(len(triangle[row-1])):
            if (triangle[row][col]>triangle[row][col+1]):
                triangle[row-1][col] += triangle[row][col]
            else:
                triangle[row-1][col] += triangle[row][col+1]
    return triangle

if (__name__ == "__main__"):
    triangle = importtriangle("maxpathtry.tsv")
    trysumed = findpath(triangle)
    print(trysumed)