Skip to content
Search or jump to…

Pull requests
Issues
Marketplace
Explore
 
@mnj998 
mnj998
/
HacktoberFest
1
021
Code
Issues
Pull requests
2
Actions
Projects
Wiki
Security
Insights
Settings
fibonacci - recursion function is added #52
 Merged
NeuronEnix merged 1 commit into mnj998:master from charithRC:master 11 days ago
+14 −3 
 Conversation 0
 Commits 1
 Checks 0
 Files changed 1
 Merged
fibonacci - recursion function is added
#52
File filter... 
0 / 1 files viewed
 17  JavaScript/Fibonacci.js 
Viewed
@@ -1,23 +1,34 @@
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

fibUsingLoop(n);
 console.log("using loop")
 fibUsingLoop(n);

/* Write a function to print fibonacci series using recursion */
// fibUsingRecursion(n) ;
 console.log("using recursion")
 for(let i = 0; i < n; i++) {
 console.log(" "+fibUsingRecursion(i)) 
  }
//Run this code in Browser Console
 ProTip! Use n and p to navigate between commits in a pull request.
© 2020 GitHub, Inc.
Terms
Privacy
Security
Status
Help
Contact GitHub
Pricing
API
Training
Blog
About
