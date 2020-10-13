function largestOfTwo(num1, num2) {
    if (num1 > num2) return num1;
    return num2;
}

function largestOfThree(num1, num2, num3) {
    return largestOfTwo(largestOfTwo(num1, num2), num3)
}

function largestOfFour(num1, num2, num3, num4) {
    return largestOfTwo(largestOfTwo(num1, num2), largestOfTwo(num3, num4));
}

function largestOfFive(num1, num2, num3, num4, num5) {
    return largestOfTwo(largestOfTwo(largestOfTwo(num1, num2), largestOfTwo(num3, num4)), num5)
}
var n1 = 50,
    n2 = 400,
    n3 = -10,
    n4 = 500,
    n5 = -50;

console.log("Largest among n1, n2 : ", largestOfTwo(n1, n2));

/* Please create below functions to find the largest among the numbers */

console.log("Largest among n1, n2, n3 : ", largestOfThree(n1, n2, n3));
console.log("Largest among n1, n2, n3, n4 : ", largestOfFour(n1, n2, n3, n4));
console.log("Largest among n1, n2, n3, n4, n5 : ", largestOfFive(n1, n2, n3, n4, n5));

//Run this code in Browser console