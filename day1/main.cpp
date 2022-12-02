#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

// Parse input function
vector<string> parseInput(string path)
{
  vector<string> lines;
  ifstream myfile("input.txt");

  if (myfile.is_open())
  {
    string line;
    while (getline(myfile, line))
    {
      lines.push_back(line);
    }

    myfile.close();
  }
  else cout << "Unable to open file";

  return lines;
}

int main ()
{
  vector<string> inputs = parseInput("input.txt");

  int * calories = new int[inputs.size()];
  int max = -1;

  for (int i = 0; i < inputs.size(); i++) calories[i] = 0;

  for (int i = 0, y = 0; i < inputs.size(); i++, y++)
  {
    string line = inputs.at(i);

    while(line != "" && i < inputs.size() - 1)
    {
      calories[y] += stoi(line);
      i++;
      line = inputs.at(i);
    }

    if (calories[y] > max) max = calories[y];
  }
  
  cout << "Max calories: " << max << endl;

  return 0;
}