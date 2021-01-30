
from re import search

def isSubstring(string, substring):

    if search(substring, string):
        return True
    else:
        return False
# Using Regex

def isRotation(s1, s2):
    
    if len(s1) != len(s2):
        return False
        
    elif s1 == s2:
        return False
        
    else:
        tempStr = s1 + s1
        return isSubstring(tempStr, s2)
        
def problemSet():

    t1, t2 = "waterbottle", "erbottlewat"
    runProblemSet(t1, t2)
    t1, t2 = "test", "test"
    runProblemSet(t1, t2)
    t1, t2 = "rotation", "ationrot"
    runProblemSet(t1, t2)
    t1, t2 = "False", "Flaes"
    runProblemSet(t1, t2)

    
    
def runProblemSet(s1, s2):
    print("Rotation?", s1, s2, isRotation(s1, s2))
    

problemSet()