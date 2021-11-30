#include<iostream>

using namespace std;

int adiff(int A,int B){
  int position_A = 0;
  int position_B = 0;
  int C = 0;
  A = A%360 ,B = B%360;

  if(A > 0) position_A = A;
  else position_A = 360+A;
  if(B > 0) position_B = B;
  else position_B = 360+B;

  if(position_A > position_B) C = position_A-position_B;
  else C = position_B-position_A;

  if(C < 180) return C;
  else return 360-C;
}

int main(){
  cout << adiff(180,270) << endl;
  cout << adiff(210,45) << endl;
  cout << adiff(0,360) << endl;
  cout << adiff(10,350) << endl;
  cout << adiff(95,260) << endl;
  cout << adiff(90,-90) << endl;
  cout << adiff(1000,280) << endl;
  cout << adiff(60,244);
}
