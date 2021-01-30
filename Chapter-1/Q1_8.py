# Write and algorithm that finds a zero in an NxN matrix and writes the column and row as 0's as well

def rotateMatrix(m1):

    arrayI = []
    arrayJ = []
    
    for i in range(len(m1)):
    
        for j in range(len(m1[0])):
            if m1[i][j] == 0:
                arrayI.append(i)
                arrayJ.append(j)
            
    for x in arrayI:
        for q,r in enumerate(m1):
            q = q - 1
            m1[x][q] = 0
            
    for y in arrayJ:
        for q,r in enumerate(m1):
            m1[q][y] = 0
            
    return m1
    
    
    

m1 = [[1,0,1],[1,1,1],[1,1,0]]
print("Matrix", m1)
print("Zeros", rotateMatrix(m1))

m1 = [[0,0,0],[0,0,0],[0,0,0]]
print("Matrix", m1)
print("Zeros", rotateMatrix(m1))

m1 = [[1,1],[1,1],[0,1]]
print("Matrix", m1)
print("Zeros", rotateMatrix(m1))

