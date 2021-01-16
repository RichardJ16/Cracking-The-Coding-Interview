# implement an algorithm that checks if a string has all unique characters

def isUnique(string):
    dictionary = {}

    for i, j in enumerate(string):
        dictionary.setdefault(j, []).append(i)
    
    if len(dictionary.keys()) < len(string):
        return False
    else:
        return True
    
def problemSet():

    test = "test"
    runProblemSet(test)
    test1 = "The quick brown fox jumps over the lazy dog"
    runProblemSet(test1)
    test2 = "True"
    runProblemSet(test2)
    test3 = "Unique"
    runProblemSet(test3)
    test4 = "abcdefghijklmnopqrstuvwxyz"
    runProblemSet(test4)
    
    # False, False, True, True, True
    
def runProblemSet(string):
    print("Is Unique?", isUnique(string))
    
problemSet()