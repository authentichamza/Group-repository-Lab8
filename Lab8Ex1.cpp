#include<iostream>
using namespace std;
class Record{
private:
  int record[10][4];
  int average;
  int grades;
  int total_marks=0;

public:
  Record();
  void array_firstcol(){
    for(int i=0;i<11;i++){
      record[i][0]=i;
  }
  void array_firstrow(){
    for(int i=0;i<4;i++){
      record[0][i]=i+1;
    }
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
  int average(int record[][],int total_marks,int average){
    return
  }
};
int main(int argc, char const *argv[]) {

  return 0;
}
