 #include <iostream>
using namespace std;
int main()
{
    int number;
    bool state=false;
cout<< "Please enter a number"<<endl;
cin>> number;

for(int i=2;i<n; i++){
    if(number%i==0){
        state= true;
        break;
    }
}
if (state==false && number>1){

    cout<<"The number you entered is prime "<<endl ;
}
else{
cout<<"The number you entered is not prime";
}


return 0;



}

