#include <iostream>

using namespace std;

struct transaction{
    string from;
    string to;
    string data;
    string publicKey;
    int timestamp;
    int nonce;
    string hash;
};

struct block {
    string previousHash;
    string hash;
    int nonce;
    int blocknumber;
    transaction transactions[10];
};


int main(){
    block blockchain[]{};
    int currentTimestamp = 0;
}