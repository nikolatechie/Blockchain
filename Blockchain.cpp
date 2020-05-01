#include "Blockchain.h"

Blockchain::Blockchain()
{
    chain.push_back(Block(0, "Genesis Block")); // initial block
    difficulty = 4; // higher number = longer mining
}

void Blockchain::addBlock(Block block)
{
    block.prevHash = getLastBlock()._hash;
    block.mineBlock(difficulty);
    chain.push_back(block);
}

Block Blockchain::getLastBlock() const
{
    return chain.back();
}