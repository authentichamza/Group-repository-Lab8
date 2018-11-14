#include<iostream>
using namespace std;
class Record{
private:
  int record[10][4];
  int average;
  int grades;
  int total_marks=0;

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
  int total_marks(int record[][],int total_marks){
    for(int i=0;i<=30;i++){
      for(int j=1;j<=3;j++){
        total_marks+=record[i][j];
      }
  }
  int average(int record[][]){
    int i;
    return ((record[i][1]+record[i][2]+record[i][3])/3)
  }

  int class_average(int total_marks,int average)
  {
    return class_average=total_marks/30;
  }
};

int main(int argc, char const *argv[]) {

  return 0;
}
