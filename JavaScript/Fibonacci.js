function fibUsingLoop(n) {
  // Solve the bugs if there are any
  let first = 0,
    second = 1,
    third = first + second;
  for (let i = 0; i < n; i++) {
    console.log(first);
    first = second;
    second = third;
    third = first + second;
  }
}
function fibUsingRecursion(num) {
  if(num < 2) {
      return num;
  }
  else {
      return fibUsingRecursion(num-1) + fibUsingRecursion(num-2);
  }
}

let n = prompt("How many numbers from fib series? : ", 0);


 console.log("using loop")
 fibUsingLoop(n);

/* Write a function to print fibonacci series using recursion */
// fibUsingRecursion(n) ;
 console.log("using recursion")
 for(let i = 0; i < n; i++) {
 console.log(" "+fibUsingRecursion(i)) 
  }
//Run this code in Browser Console
