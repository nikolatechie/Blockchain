#ifndef BLOCK_H
#define BLOCK_H

#include <iostream>
using namespace std;

class Block
{
    unsigned index, nonce;
    string data;
    time_t _time;

    string calculateHash() const;

public:
    string _hash, prevHash;

    Block(unsigned indexIn, const string &dataIn);
    void mineBlock(unsigned difficulty);
};

#endif // BLOCK_H