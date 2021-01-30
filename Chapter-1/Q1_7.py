# rotate matrix

def rotateMatrix(m1):

    for i in range(len(m1)):
    
        for j in range(i, len(m1)):
        
            m1[i][j], m1[j][i] = m1[j][i], m1[i][j]
            

    for k in range(len(m1)):
    
        for l in range(len(m1[k]) // 2):
        
            temp = len(m1[l]) - 1 - l
            
            m1[k][l], m1[k][temp] = m1[k][temp], m1[k][l]
             
    return m1
    
    
    
m1 = [[1,2,3],[4,5,6],[7,8,9]]
print("Matrix", m1)
print("Rotated", rotateMatrix(m1))
# [1 2 3]
# [4 5 6]
# [7 8 9]