#ifndef BLOCKCHAIN_H
#define BLOCKCHAIN_H

#include <vector>
#include "Block.h"
using namespace std;

class Blockchain
{
    unsigned difficulty;
    vector <Block> chain;

    Block getLastBlock() const;

public:
    Blockchain();
    void addBlock(Block block);
};

#endif // BLOCKCHAIN_H