// let obj ={
//     name:"kartik",
//     age:"25",
//     weight:85,
//     greet:function(){
//         console.log("hello");
//     }
// };
// console.log(obj)
// obj.greet();
// let arr=[1,2,"kartik"]
// console.log(arr)

// let brr=new Array('kartik',1,2);
// brr.shift();//Shift removes the left most element
// brr.unshift("srivastava");//unshift adds the element
// console.log(brr);

//map function
// let arr=[10,20,30];
// let ansArray=arr.map((number)=>{
//     return number*number;
// })
// console.log(ansArray);

//Filter function
// let arr=[10,20,30,11,21,43];
// let evenArray=arr.filter((number)=>{
//     return number%2==0;

// })
// console.log(evenArray);

// for each
let arr=[10,20,30];
arr.forEach((value,index)=>{
    console.log("value",value,"index",index)
})