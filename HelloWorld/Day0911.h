#pragma once

//extern : �ٸ� cpp�� �� ������ �Լ��� �ִٰ� �˷��ִ� �뵵

extern int MazeWidth;
extern int MazeHeight;
extern int** Maze;

const char* DirectoryName = ".\\Data\\";
bool ReadMapFile(const char* MapFileName);

void Day0911();

