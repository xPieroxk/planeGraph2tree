#pragma once
#include "stdafx.h"
#include <vector>
#include <string>

using namespace std;

struct halfEdges;
struct verticles;
struct faces;


class DCELformTransfer
{
public:DCELformTransfer(void);
public:~DCELformTransfer();

public:int splitTXT(string path);
public:int formTransfer(string path);
};