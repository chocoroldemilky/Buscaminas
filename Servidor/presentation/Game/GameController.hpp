#ifndef GAME_CONTROLLER
#define GAME_CONTROLLER

#include "../Services/game-service.hpp"
#include <nlohmann/json.hpp>

using namespace std;

class GameController {
  private:
    GameService gameService;
    string boardToJSON(const vector<vector<string>> &board);

  public:
    GameController ();
    string initGame (string difficulty);
    string revealCell (int row, int col);
    // vector<double> getRanking ();

};

#endif