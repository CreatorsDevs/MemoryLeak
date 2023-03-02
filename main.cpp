#include <iostream>
using namespace std;

class Player{
public:
  Player(){
    cout << "I am a player, I just not spawned" << endl;
  }

  ~Player(){
    cout <<  "Oops, that enemy killed me, I just died!" << endl;
  }
};

int main() {
  Player player;
  Player *p = new Player();
  delete p; // Memeory leak will occur, if delete operator is commented out.
  return 0;
}