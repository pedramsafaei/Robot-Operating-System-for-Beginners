#include <iostream>

using namespace std;
/*
try{
  
}catch (Exception name){

}
*/
int main()
{
  try
  {
    int num1 = 1;
    int num2 = 0;
    if (num2 == 0)
    {
      throw num1;
    }
  }
  catch (int e)
  {
    cout << "Exception Found: " << e << endl;
  }
}