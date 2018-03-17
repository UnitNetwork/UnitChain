//
// Created by Xiang Jiang on 03/16/2018.
//

#ifndef TESTCHAIN_BLOCKCHAIN_HPP
#define TESTCHAIN_BLOCKCHAIN_HPP

#include <cstdint>
#include <vector>
#include "Block.hpp"

using namespace std;

class Blockchain {
public:
    Blockchain();

    void AddBlock(Block bNew);

private:
    uint32_t _nDifficulty;
    vector<Block> _vChain;

    Block _GetLastBlock() const;
};

#endif //TESTCHAIN_BLOCKCHAIN_HPP
