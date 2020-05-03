#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{
  ofstream outFile;
  string data = "RobotID=0";
  cout << "Write Data: " << data << endl;
  outFile.open("config.txt");
  outFile << data << endl;
  outFile.close();

  ifstream inFile;
  inFile.open("config.txt");
  inFile >> data;
  cout << "Read Data: " << data << endl;
  inFile.close();

  return 0;
}