var password=1234;
var input;
var c1=0;
var c2=3;
var limit=false;

while(password!=input && !limit){
    c1++;
    if(c1<=c2){
        input=prompt('password');
    }
    else{
        limit=true;
    }
}
if(limit){
    alert("7414")
}
else{
    alert('login');
}