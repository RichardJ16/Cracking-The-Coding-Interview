# One Away: Check if the two strings are one edit or zero away from each other

def checkEdits(s1, s2):
    
    lengthDiff = abs(len(s1)-len(s2))
    wrongLetter = 0
    s1Curr = 0
    s2Curr = 0
           
    if lengthDiff > 1:
        return False
    else: 
        while s1Curr < len(s1) and s2Curr < len(s2) and wrongLetter < 2:
            print("s1, s2", s1[s1Curr], s2[s2Curr])
            
            if s1[s1Curr] == s2[s2Curr]:
                s1Curr = s1Curr + 1
                s2Curr = s2Curr + 1
            
            elif lengthDiff == 1:
            
                if len(s2) < len(s1):
                
                    temp = s2
                    s2 = s1
                    s1 = temp
                    
                if s1[s1Curr] == s2[s2Curr]:
                    s1Curr = s1Curr + 1
                    s2Curr = s2Curr + 1
                    
                else:
                    wrongLetter = wrongLetter + 1
                    s1Curr = s1Curr + 1
                    s2Curr = s2Curr + 2
                    
            else:
                wrongLetter = wrongLetter + 1
                s1Curr = s1Curr + 1
                s2Curr = s2Curr + 1
                
    if wrongLetter > 1:
        return False
    else: 
        return True
        
                
                    
                    
                        
def problemSet():

    t1, t2 = "test", "estt"
    runProblemSet(t1, t2)
    t1, t2 = "sort", "sorted" 
    runProblemSet(t1, t2)
    t1, t2 = "1234", "1233"
    runProblemSet(t1, t2)
    t1, t2 = "True", "True"
    runProblemSet(t1, t2)
    t1, t2 = "False", "Alsef"
    runProblemSet(t1, t2)
    t1, t2 = "True", "Trrue"
    runProblemSet(t1, t2)
    
    
def runProblemSet(s1, s2):
    print("One Edit?", s1, s2, checkEdits(s1, s2))
    
problemSet()
        