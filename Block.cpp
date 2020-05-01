#include <ctime>
#include <sstream>
#include "Block.h"
#include "sha256.h"

Block::Block(unsigned indexIn, const string &dataIn) : index(indexIn), data(dataIn)
{
    nonce = 0;
    _time = time(nullptr);
    _hash = calculateHash();
}

void Block::mineBlock(unsigned difficulty)
{
    string str(difficulty, '0');

    do
    {
        ++nonce;
        _hash = calculateHash();
    }
    while (_hash.substr(0, difficulty) != str);

    cout << "Block mined: " << _hash << "\n\n";
}

inline string Block::calculateHash() const
{
    stringstream ss;
    ss << index << prevHash << _time << data << nonce;

    return sha256(ss.str());
}