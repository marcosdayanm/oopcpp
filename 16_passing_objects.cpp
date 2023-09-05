#include <iostream>
using namespace std;

class student{
int id;
float grade;
string name;

public:
student(int idout, string n, float g){
  name = n;
  grade = g;
  id = idout;
}
float average(student s1, student s2, student s3){
  
  return (s1.grade+s2.grade+s3.grade)/3;  
}


};


int main() {

  student s1(123,"Marcos",99.87);
  student s2(456,"David",75.2);
  student s3(789,"James",92.3);


  cout<<"The average grade of all the students is: "<<s1.average(s1,s2,s3)<<endl;

  
  return 0;
}