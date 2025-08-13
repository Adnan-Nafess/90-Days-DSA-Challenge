function countdown(n) {
  if (n === 0) {  // Base Case
    console.log("Done!");
    return;
  }
  console.log(n); // 5 - 4
  countdown(n - 1); // Recursive Case // 4 
}

countdown(5);
