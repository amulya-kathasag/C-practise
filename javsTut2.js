var IptVar="100010110001110000111";
var CountVar =0;
for(var i=0;i<IptVar.length;i++){
    if(IptVar[i] =='1'&& IptVar[i+1]=='1'){
            CountVar++;
            i++;
    }
}
console.log(CountVar)