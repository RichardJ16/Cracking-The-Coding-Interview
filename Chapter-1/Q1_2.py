# Check Permutation: Is one string a permutation of the other string?
def checkPermutation(s1, s2):
    s1 = sorted(s1)
    s2 = sorted(s2)
    
    if s1 == s2:
        return True
    else:
        return False
    
    
                      
def problemSet():

    t1, t2 = "test", "estt"
    runProblemSet(t1, t2)
    t1, t2 = "sort", "sorted"
    runProblemSet(t1, t2)
    t1, t2 = "1234", "5678"
    runProblemSet(t1, t2)
    t1, t2 = "True", "eurT"
    runProblemSet(t1, t2)
    t1, t2 = "tTtT", "TtTt"
    runProblemSet(t1, t2)
    
    
def runProblemSet(s1, s2):
    print("Permutation?", s1, s2, checkPermutation(s1, s2))
    
problemSet()
        