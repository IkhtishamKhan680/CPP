#include<iostream>
using namespace std;

class king{

    private:
        int age;
        int date;
        string name;

    public:

    void setage(int age){
        this -> age = age;
    }
    
    king(){}
    
    king(int date){
        this -> date = date;
    }

    void getvalue(){
        cout<<"age = "<<age<<endl;
        cout<<"date = "<<date<<endl;
    }

};

int main(){

      king k1(14);
      k1.setage(10);
      k1.getvalue();
      k1.setage(10);
      
     
    return 0;
}