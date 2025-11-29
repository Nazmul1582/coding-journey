// Problem 1: Count How Many Times a Number Appears
const arr = [1, 2, 2, 3, 1, 4, 2]

// =============== using for loop
// let count = 0
// for (let i = 0; i < arr.length; i++) {
//   if (arr[i] === 2) {
//     count++
//   }
// }
// console.log(count)

// =============== using while loop
// let count = 0
// let i = 0
// while (i < arr.length) {
//   if (arr[i] === 2) {
//     count++
//   }
//   i++
// }
// console.log(count)

// =============== using do while loop
// let count = 0
// let target = 2
// let i = 0
// do {
//   if (arr[i] === target) {
//     count++
//   }
//   i++
// } while (i < arr.length)
// console.log(count)

// =============== using for of loop
// let count = 0
// let target = 2
// for (let item of arr) {
//   if (item === target) {
//     count++
//   }
// }
// console.log(count)

// =============== using array.forEach
// let count = 0
// let target = 2
// arr.forEach((item) => {
//   if (item === target) {
//     count++
//   }
// })
// console.log(count)

// =============== using map()
// let count = 0
// let target = 2
// arr.map((el) => {
//   if (el === target) {
//     count++
//   }
// })
// console.log(count)

// =============== using filter()
// let target = 1
// let count = arr.filter((item) => item === target).length
// console.log(count)

// =============== using reduce()
// let target = 2
// let count = arr.reduce((acc, curr) => (curr === target ? acc + 1 : acc), 0)
// console.log(count)

// =============== using Map
let count = 0
let target = 2
let map = new Map()
for (let item of arr) {
  map.set(item, (map.get(item) || 0) + 1)
}
count = map.get(target)
console.log(count)
