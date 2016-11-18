#include <iostream>
#include "map.h"    //подключили библиотеку для работы с map
using namespace std;
 
int main()
{
  map <string,int> myFirstMap = {{ "Mother", 37 },
                                 { "Father", 40 },///map явно инициализирована
                                 { "Brother", 15 },
                                 { "Sister", 20 }};
 
  ///вывод явно инициализированной map на экран
  for (auto it = myFirstMap.begin(); it != myFirstMap.end(); ++it)
  {
      cout << it->first << " : " << it->second << endl;
  }

  for (const auto& kv : myFirstMap) {
    cout << kv.first << " : " << kv.second << endl;
  }


  map <char,int> mySecondMap;
  for (int i = 0,c = 'a'; i < 5; ++i,++c)
  {
      mySecondMap.insert ( pair<char,int>(c,i) );
  }

  for (const auto& kv : mySecondMap) {
    cout << kv.first << " : " << kv.second << endl;
  }
 
  return 0;
}