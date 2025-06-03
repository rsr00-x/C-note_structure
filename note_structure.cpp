/*#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    string name="Ankush";
    cout<<sizeof(name);

}*/
#include<iostream>
using namespace std;
struct Emp{
    string name;
    int Id;
    double salary;
};
int main(){
    Emp E;
//    cout<<sizeof(E.name)<<" Bytes"<<endl;
//    cout<<sizeof(E.Id)<<" Bytes"<<endl;
//    cout<<sizeof(E.salary)<<" Bytes"<<endl;
//    E.name="Ankit";
//    E.Id=1900887;
//    E.salary=17000;
//    cout<<E.name<<ends<<E.Id<<ends<<E.salary;
      cout<<sizeof(Emp);
}


