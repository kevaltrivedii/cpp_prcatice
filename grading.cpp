#include<iostream>

using namespace std;

int main(){

    int eng,maths,sci,chem,phy,comp,total;
    float per;

    cout<<"=============GRADING============="<<endl;
    cout<<"\nEnter marks of English: ";
    cin>>eng;
    cout<<"Enter marks of Maths: ";
    cin>>maths;
    cout<<"Enter marks of Science: ";
    cin>>sci;
    cout<<"Enter marks of Chemistry: ";
    cin>>chem;
    cout<<"Enter marks of Physics: ";
    cin>>phy;
    cout<<"Enter marks of Computer: ";
    cin>>comp;

    total=eng+maths+sci+chem+phy+comp;
    cout<<"*****************************************"<<endl;

    per=(float)total/6;
    
    char grade;
    if(per>=90 ){
      grade='A'; 
    }else if(per>=80){
       grade='B';
    }else if(per>=70){
        grade='C';
    }else if( per>=60){
        grade='D';
    }else if(per>=50){
        grade='E';
    }else{
        grade='F';
    }


    cout<<"Total: "<<total<<endl;
    cout<<"percentage: "<<per<<"%"<<endl;
    cout<< "Grade: "<<grade<<endl;
    
    return 0;

}