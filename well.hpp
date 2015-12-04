#pragma once
#include "tetromino.hpp"
#include <SDL2/SDL.h>

class Well
{
public:
  Well();
  void draw(SDL_Renderer *);
  enum { Width = 10, Height = 20 };
  bool isCollision(const Tetromino &t) const;
  void unite(const Tetromino &);
private:
  bool data[Width][Height];
};
