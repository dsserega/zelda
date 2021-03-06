#ifdef _WIN32
#include <Windows.h>
#endif
#include <tsx_tileset.hpp>
#include <GL/gl.h>
#include "../graphic/sprite.hpp"

#pragma once

class Tileset {
public:
    int frames;
    float interval;
    bool random;

    Tileset(TSX::Tileset* tileset);
    ~Tileset();

    Sprite* sprite(int tile_id);

    void RenderTiles(int width, int height, const std::vector<std::vector<int>>& tiles, int frame) const;
    void RenderIndividualTiles(float x, float y, const std::vector<std::vector<int>>& tiles) const;

private:
    TSX::Tileset* info_;
    GLuint texture_;
    std::map<int, Sprite*> sprites_;
};
