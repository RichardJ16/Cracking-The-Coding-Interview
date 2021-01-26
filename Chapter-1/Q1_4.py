
def palindromePermutation(s1):
    
    s1 = s1.replace(" ", "")   
    dictionary = {}
    
    for i, j in enumerate(s1):
        dictionary.setdefault(j, []).append(i)
        
    odd = 0
        
    for i in dictionary:          
        if len(dictionary[i]) % 2 != 0:
            odd = odd + 1
        
    if odd > 1:
        return "No"
    else:
        return "Yes"
    
def problemSet():
    test = "tact coa"
    runProblemSet(test)
    test1 = "taco cat"
    runProblemSet(test1)
    test2 = "palindrome"
    runProblemSet(test2)
    test3 = "meeeem"
    runProblemSet(test3)
      
def runProblemSet(s1):
    print("Is", s1, " a permutation of a palindrome? \n",  palindromePermutation(s1))
    
problemSet()
        