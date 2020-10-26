def largestOfTwo(num1, num2):
    if num1 > num2:
        return num1
    return num2


def largestOfThree(num1, num2, num3):
    # Complete the function
    print(max(n1, n2, n3))
    return largestOfTwo( largestOfTwo( num1, num2), num3 )

def largestOfFour( num1, num2, num3, num4 ):
    return largestOfTwo(largestOfThree(num1,num2,num3),num4)

def largestOfFive( num1, num2, num3, num4,num5 ):
    return largestOfTwo(largestOfFour(num1,num2,num3,num4),num5)



n1 = 50
n2 = 400
n3 = -10
n4 = 500
n5 = -50

#print("Largest among n1, n2 : ", largestOfTwo(n1, n2))

"""
Please create below functions to find the largest among the numbers 
"""

print( "Largest among n1, n2, n3 : ", largestOfThree( n1, n2, n3 ) ) 
#print( "Largest among n1, n2, n3, n4 : ", largestOfFour( n1, n2, n3, n4 ) ) 
#print( "Largest among n1, n2, n3, n4, n5 : ", largestOfFive( n1, n2, n3, n4, n5 ) ) 
