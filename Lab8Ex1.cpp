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
    for(int i=0;i<11;i++){
      record[i][0]=i;}
    for(int j=0;j<4;j++){
      record[0][i]=i+1;
    }
  }
  void input_grades(){
    for(int i=0;i<10;i++){
      for(int j=1;j<=3;j++){
        cin>>record[i][j];
      }
    }
  }
  int total_marks(){
    for(int i=0;i<=30;i++){
      for(int j=1;j<=3;j++){
        total_marks+=record[i][j];
      }
    return total_marks;
  }
}
  int average(){
    int i;
    cout<<"which student average required"<<endl;
    cin>>i;
    return ((record[i][1]+record[i][2]+record[i][3])/3)
  }

  int class_average()
  {
    return class_average=total_marks/30;
  }
  int display_array(){
    for(int i=0;i<=10;i++){
      for(int j=1;j<=3;j++){
        cout<<record[i][j];
      }
    }
  }
};

int main(int argc, char const *argv[]) {
  Record std();
  cout<<"Input Grades of Students for 3 Tests"<<endl;
  std.input_grades();
  std.display_array();
  std.total_marks();
  cout<<"a if u want to access average of each student "<<endl;
  cout<<"b if you want to access class_average"<<endl;
  string choice;
  cin>>choice;
  for(int j=0;j<2;j++){
  if(choice==a){
  for(int i=1;i<=10;i++){
  std.average();
}
}
  if(choice==b){
  std.class_average();
}
}




  return 0;
}
