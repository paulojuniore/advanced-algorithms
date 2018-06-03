// 1107 - Escultura à Laser. 18/04/2018
#include <iostream>
#include <vector>

using namespace std;

int main() 
{ 
    int altura, comprimento;
    while (cin >> altura >> comprimento && altura != 0 && comprimento != 0)
    {
      vector<int> comps(comprimento);
      int ligaLaser = 0;
      for (int i = 0; i < comprimento; i++)
      {
        cin >> comps[i];
        if (i) 
        {
          if (comps[i - 1] > comps[i]) 
          {
            ligaLaser += comps[i - 1] - comps[i];
          }
        } 
        else 
        {
          ligaLaser += altura - comps[i];
        }
      }
      cout << ligaLaser << endl;
    }
    return 0;
}
