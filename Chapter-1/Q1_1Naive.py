# implement an algorithm that checks if a string has all unique characters

def isUnique(string):
    i = 0
    j = 1
    length = len(string)
    
    for i in range(length):
        while j in range(length):
            if j <= i:
                j = i + 1               
            elif string[i] == string[j]:
                return False
            elif i == length - 2 and j == length - 1:
                return True
            else:
                j = j + 1
        j = 0

def problemSet():
    test = "abcdefghijklmnopqrsstt"
    runProblemSet(test)
    test1 = "qrf"
    runProblemSet(test1)
    test2 = "aaa"
    runProblemSet(test2)
    test3 = "sdfjkhs"
    runProblemSet(test3)

def runProblemSet(string):
    print("Is Unique?", isUnique(string))
    
problemSet()