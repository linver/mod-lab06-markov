// Copyright 2022 UNN-IASR
#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>
#include <deque>
#include <map>
#include "textgen.h"


int main() {
    TextGenerator tg = TextGenerator("source.txt");
    tg.generate(MAXGEN);
    return 0;
}
