#include<iostream>
#include<string>
using namespace std;
class Record{
private:
  int record[10][4];
  int average;
  int grades;
  int total_marks;

public:
  Record(){
    for(int i=0;i<10;i++){
      record[i][0]=i;}
      int i=0;
    for(int j=0;j<4;j++){
      record[0][i]=i+1;
    }
  }
  void input_grades(){
    cout<<"Input grades"<<endl;
    for(int i=0;i<10;i++){
      for(int j=1;j<=3;j++){
        cin>>record[i][j];
      }
      cout<<endl;
    }
  }
  int totalMarks(){
    for(int i=0;i<=10;i++){
      for(int j=1;j<=3;j++){
        total_marks+=record[i][j];
      }
  }
  cout<<total_marks<<endl;
}
  int getAverage(){
    int i;
    cout<<"which student average required"<<endl;
    cin>>i;
    return ((record[i][1]+record[i][2]+record[i][3])/3);
  }

  int class_average()
  {
    return (total_marks/30);
  }
  int display_array(){
    for(int i=0;i<=10;i++){
      for(int j=1;j<=3;j++){
        cout<<record[i][j]<<" ";
      }
      cout<<endl;
    }
  }
};

int main(int argc, char const *argv[]) {
  Record students;
  cout<<"Input Grades of Students for 3 Tests"<<endl;
  students.input_grades();
  students.display_array();
  students.totalMarks();
  cout<<"a if u want to access average of each student "<<endl;
  cout<<"b if you want to access class_average"<<endl;
  string choice;
  cin>>choice;
  for(int j=0;j<2;j++){
    if(choice=="a"){
      for(int i=1;i<=10;i++){
        students.getAverage();
      }
    }
  if(choice=="b"){
  students.class_average();
}
}
  return 0;
}
