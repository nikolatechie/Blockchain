#include <iostream>
#include "Blockchain.h"
using namespace std;


int main()
{
    Blockchain blockChain;

    cout << "Mining block 1...\n";
    blockChain.addBlock(Block(1, "Transaction 1"));

    cout << "Mining block 2...\n";
    blockChain.addBlock(Block(2, "Transaction 2"));

    cout << "Mining block 3...\n";
    blockChain.addBlock(Block(3, "Transaction 3"));


    return 0;
}