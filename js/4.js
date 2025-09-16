// function changeText(){
//     let fpara=document.getElementById('fpara');
//     fpara.textContent="Hello KARTIK"
// }
// let fpara=document.getElementById('fpara');
// fpara.addEventListener('click',changeText);
// // fpara.removeEventListener('click',changeText);

//DEFAULT CONCEPT

// let anchorelement=document.getElementById('fanchor');
// anchorelement.addEventListener('click',function(event){
//     event.preventDefault();
//     anchorelement.textContent='clickdone'
// } );
let  paras=document.querySelectorAll('p');
function alertpara(event){
    alert("You have clicked on para:"+event.target.textContent);

}

for(let i=0;i<paras.length ;i++){
    let  para=paras[i];
    console.log("eventlistener added");
    para.addEventListener('click',alertpara);
}