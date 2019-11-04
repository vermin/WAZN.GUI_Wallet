#pragma once

#include <QObject>
#include <wallet/api/wallet2_api.h>

class NetworkType : public QObject
{
    Q_OBJECT

public:
    enum Type : uint8_t {
        MAINNET = cryptonote::MAINNET,
        TESTNET = cryptonote::TESTNET,
        STAGENET = cryptonote::STAGENET
    };
    Q_ENUM(Type)
};
