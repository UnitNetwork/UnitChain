//
// Created by Xiang Jiang on 03/16/2018.
//

#ifndef TESTCHAIN_BLOCK_HPP
#define TESTCHAIN_BLOCK_HPP

#include <cstdint>
#include <iostream>
#include <sstream>

using namespace std;

class Block {
public:
    string sHash;
    string sPrevHash;

    Block(uint32_t nIndexIn, const string &sDataIn);

    void MineBlock(uint32_t nDifficulty);

private:
    uint32_t _nIndex;
    uint32_t _nNonce;
    string _sData;
    time_t _tTime;

    string _CalculateHash() const;
};

#endif //TESTCHAIN_BLOCK_HPP
