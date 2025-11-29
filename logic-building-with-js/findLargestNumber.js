// 📅 Day 2 – Array & String Logic + Conditional Patterns
let arr = [3, 7, 2, 9, 4]

// ========= using Math.max()
// let solution = Math.max(...arr)
// console.log(solution)

// ========= using loop
// let larget = arr[0]
// for (let i = 0; i < arr.length; i++) {
//   if (arr[i] > larget) larget = arr[i]
// }
// console.log(larget)

// ============= using for...of loop
// let larget = arr[0]
// for (let item of arr) {
//   if (item > larget) larget = item
// }
// console.log(larget)

// ============ using Array.sort()
let sortedArr = arr.sort((a, b) => b - a)
console.log(sortedArr[0])

// =========== using Array.reduce()
// let larget = arr.reduce((acc, el) => (acc < el ? el : acc), 0)
// console.log(larget)
