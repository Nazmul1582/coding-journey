let arr = [1, 2, 2, 3, 4, 4, 5]

// 1. using for loop for sorted array =================
// let filteredArr = []
// filteredArr.push(arr[0])
// for (let i = 1; i < arr.length; i++) {
//   if (arr[i - 1] !== arr[i]) {
//     filteredArr.push(arr[i])
//   }
// }
// console.log(filteredArr)

// 2. using while loop for sorted array ======================
let filteredArr = []
filteredArr.push(arr[arr.length - 1])
let i = arr.length - 1
while (i > 0) {
  if (arr[i] !== arr[i - 1]) {
    filteredArr.push(arr[i - 1])
  }
  i--
}
console.log(filteredArr.sort((a, b) => a - b))
