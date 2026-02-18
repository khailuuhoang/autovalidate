#include <algorithm>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <cctype>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;
using std::transform;

const vector <string> VALIDATION = {"Cool","Great","Perfect","Beautiful","Aw, yeah"};

string get_input_in_lowercase();

int main(){
  string input;
  int pick;

  srand(time(0));
  pick = rand() % VALIDATION.size();
  cout << "What are you listening to?\n";
  input = get_input_in_lowercase();
  cout << VALIDATION[pick] << "! Let's listen to more\n";

  do{
    cout << "What's next?\n";
    input = get_input_in_lowercase();
    pick = rand() % VALIDATION.size();
    cout << VALIDATION[pick] << "!\n";
  }while( input != "nothing" );

  return 0;
}

string get_input_in_lowercase(){
  string in;
  getline(cin,in);
  transform(in.begin(), in.end(), in.begin(), [](unsigned char c){ return std::tolower(c); });
  return in;
}
