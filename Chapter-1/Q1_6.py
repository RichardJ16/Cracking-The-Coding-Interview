# implement an algorithm that performs a string compression

def repeatedCharacter(string):

    i = 0
    c = 1
    retString = ""
    
    while i != len(string):
           
        if i != len(string) - 1 and string[i] == string[i + 1]:

            c = c + 1
            
        elif i != len(string) - 1 and string[i] != string[i + 1]:
            retString = retString + string[i] + str(c)
            c = 1
        else:
            if string[i] == string[i - 1]:
                retString = retString + string[i] + str(c)
                return checkRetString(retString, string)
            else: 
                c = 1
                retString + string[i] + str(c)
                return checkRetString(retString, string)
        i = i + 1  
        
def checkRetString(retString, string):
    if len(retString) < len(string):
        return retString
    else:
        return string
             
def problemSet():

    test = "aabbccdd"
    runProblemSet(test)
    test = "aaabbbcccddd"
    runProblemSet(test)
    test = "abcd"
    runProblemSet(test)
    test = "aaaaaaabcd"
    runProblemSet(test)
    # False, False, True, True, True
    
def runProblemSet(string):
    print("String Compression?", repeatedCharacter(string))
    
problemSet()