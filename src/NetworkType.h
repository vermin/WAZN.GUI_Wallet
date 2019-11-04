#pragma once

#include <QObject>
#include <wallet/api/wallet2_api.h>

class NetworkType : public QObject
{
    Q_OBJECT

public:
    enum Type : uint8_t {
        MAINNET = Wazn::MAINNET,
        TESTNET = Wazn::TESTNET,
        STAGENET = Wazn::STAGENET
    };
    Q_ENUM(Type)
};
