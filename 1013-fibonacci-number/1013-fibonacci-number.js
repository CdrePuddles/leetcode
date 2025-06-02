/**
 * @param {number} n
 * @return {number}
 */
var fib = function(n) {
    if (!n) {
        return n;
    }
  let a = 0;
  let b = 1;

  for (let i = 2; i < n+1; i++) {
    let c = a + b;

    a = b;
    b = c;
  }

  return b;
};