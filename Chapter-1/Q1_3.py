# Replace all spaces in a string with %20
def replaceSpace(a, b, string):

    retString = ""
    
    for i in string:
        if i == a:
            i = b
        retString += i
    
    return retString
            
        
    #temp = string.replace(" ", "%20")
    #return temp
                      
def problemSet():

    s = "The quick brown fox jumps over the lazy dog"
    runProblemSet(s)
    s = "Mr John Smith"
    runProblemSet(s)
    s = "Hello World"
    runProblemSet(s)
    s = " ' ; ' ; ' ; ] [ p . / . , "
    runProblemSet(s)
    s = "Success"
    runProblemSet(s)
    
    
def runProblemSet(s1):
    print("Replace: ", s1 , "\n" ,replaceSpace(" ", "%20", s1))
    
problemSet()
        
