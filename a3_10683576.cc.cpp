#include<iostream>
using namespace std;

int main() {

 int score=0;
  char grade;
  cout<<"please enter your score"<<endl;
  cin>>score;

  if(score>=80){
      grade='A';
  }else if(score>=70&&<80)
        grade='B';
  if(score>=60&&<70){
    grade='C';
    }else if(score>=50&&<60)
    grade='D';
    cout<<"your grade is"<<grade;
}
end if
