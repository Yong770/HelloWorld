#pragma once

//extern : 다른 cpp에 이 변수나 함수가 있다고 알려주는 용도

extern int MazeWidth;
extern int MazeHeight;
extern int** Maze;

const char* DirectoryName = ".\\Data\\";
bool ReadMapFile(const char* MapFileName);

void Day0911();

