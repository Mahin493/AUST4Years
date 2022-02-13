import matplotlib
import numpy as np
import matplotlib.pyplot as plt

X = [[1590,2.9], [1540,2.7], [1600,2.6], [1590,2.7], [1520,2.5],
     [1540,2.4], [1560,2.3], [1490,2.3], [1510,2.4],
     [1350,3.9], [1360,3.7], [1370,3.8], [1380,3.7], [1410,3.6],
     [1420,3.9], [1430,3.4], [1450,3.7], [1460,3.2],
     [1590,3.9], [1540,3.7], [1600,3.6], [1490,3.7], [1520,3.5],
     [1540,3.4], [1560,3.3], [1460,3.3], [1510,3.4],
     [1340,2.9], [1360,2.4], [1320,2.5], [1380,2.6], [1400,2.1],
     [1320,2.5], [1310,2.7], [1410,2.1], [1305,2.5],
     [1460,2.7], [1500,2.9], [1300,3.5], [1320,3.6], [1400,2.7],
     [1300,3.1], [1350,3.1], [1360,2.9], [1305,3.9],
     [1430,3.0], [1440,2.3], [1440,2.5], [1380,2.1], [1430,2.1],
     [1400,2.5], [1420,2.3], [1310,2.1], [1350,2.0]]

Y =['Dog','Dog','Dog','Dog','Dog','Dog',
    'Dog','Dog','Dog',
    'Dog','Dog','Dog','Dog','Dog','Dog',
    'Dog','Dog','Dog',
    'Dog','Dog','Dog','Dog','Dog','Dog',
    'Dog','Dog','Dog',
    'Cat','Cat','Cat','Cat','Cat','Cat',
    'Cat','Cat','Cat',
    'Cat','Cat','Cat','Cat','Cat','Cat',
    'Cat','Cat','Cat',
    'Cat','Cat','Cat','Cat','Cat','Cat',
    'Cat','Cat','Cat']

for i in range(len(X)):
    if Y[i] == 'Dog':
        plt.scatter(X[i][0], X[i][1], s=100, marker='P',
                    linewidths=2, color='green')
    else:
        plt.scatter(X[i][0], X[i][1], s=100, marker='P',
                    linewidths=2, color='red')

pathsToNeighbor={}

def kNearestNeighbor(point,k):
    findingPathToNeighbor(point)
    sortedPathsToNeighbor = sorted(pathsToNeighbor.items())
    dog=0
    cat=0
    for i in range(k):
        if sortedPathsToNeighbor[i][1]=='Dog':
            dog+=1
        else:
            cat+=1

    if(dog>cat):
        return 'Dog'
    else:
        return 'Cat'

def findingPathToNeighbor(point):
    n_of_dimensions=len(point)
    for i in range(len(X)):
        total_d=0
        for j in range(0,n_of_dimensions):
            d=abs(point[j]-X[i][j])
            total_d +=(d * d)
        total_d=np.sqrt(total_d)
        pathsToNeighbor[total_d]=Y[i]

point=[1500,2.3]
print(kNearestNeighbor(point,5))
plt.show()
