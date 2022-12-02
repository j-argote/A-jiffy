#include <iostream>
#include <iomanip>
using namespace std;

const double ONE_JIFFY_IN_SECONDS = .01;

//define function JiffiesToSeconds(); parameter->double #of jiffies; return double-> #of seconds
double JiffiesToSeconds(double jiffies){
  double seconds;
  seconds = jiffies * ONE_JIFFY_IN_SECONDS;
  return seconds;
}
int main(){
  double user_jiffies;
  //read in double-> #of jiffies
  cin >> user_jiffies;
  //call function JiffiesToSeconds()
  //output the # of seconds with 3 decimal points
  cout << fixed;
  cout << setprecision(3);
  cout << JiffiesToSeconds(user_jiffies) << endl;
  
  return 0;
}